#include <iostream>

using namespace std;
int main()
{
    string phrase = "Giraffe Academy";
    string phraseSub;

    phraseSub = phrase.substr(8, 3);
    cout << phraseSub << endl;
    cout << phrase.length();
    cout << phrase[0] << endl;
    phrase[0] = 'T';
    cout << phrase << endl;

    return 0;
}