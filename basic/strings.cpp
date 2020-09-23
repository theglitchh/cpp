#include <iostream>

using namespace std;

int main ()
{
    string phrase ="academy";
    phrase [0] = 'B';
    string phrasesub;
    phrasesub = phrase.substr(5, 3);
    phrasesub = phrase.find("");
    phrasesub = phrase.length();

    cout << phrasesub;

return 0;
}