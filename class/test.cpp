 #include <iostream>

using namespace std;

class test;

class test {
	private:
		int score;
		char name[20];
	public:
	void	getScore();
        void    showScore();
};

void test::getScore() {
	cout << "Enter your score: ";
	cin >> score;
	cout << "Enter your name: ";
	cin >> name;
}
void test::showScore() {
	cout << "Your score is: " << score << endl;
	cout << "Your name is: " << name << endl;
}
int main () {
  test t;
t.getScore();
t.showScore();
return 0;
}

