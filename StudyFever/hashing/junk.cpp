#include <vector>
#include <unordered_map>
#include <unordered_set>
class Twitter {
public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        feed.push_back({ userId, tweetId });
    }
    
    std::vector<int> getNewsFeed(int userId) {
        std::vector<int> ret;
        for (int i = feed.size() - 1; i >= 0; --i) {
            auto& [user, tweet] = feed[i];
            if (userId == user || (following[userId].find(user) != following[userId].end())) {
                ret.push_back(tweet);
                if (ret.size() == 10) break;
            }
        }
        return ret;
    }
    
    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }

    std::unordered_map<int, std::unordered_set<int>> following;
    std::vector<std::pair<int, int>> feed;
};

int main() {
    Twitter twitter;
    twitter.postTweet(1, 5);
    twitter.postTweet(1, 6);
    twitter.postTweet(2, 7);
    twitter.postTweet(1, 8);
    twitter.postTweet(2, 9);
    twitter.postTweet(1, 10);
    twitter.follow(1, 2);
    twitter.follow(1, 1);
    twitter.postTweet(2, 11);
    std::vector<int> newsFeed = twitter.getNewsFeed(1);
    std::cout << "News Feed for User 1:" << std::endl;
    for (int tweetId : newsFeed) {
        std::cout << tweetId << " ";
    }
    std::cout << std::endl;

    return 0;
}
