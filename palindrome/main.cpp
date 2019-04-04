#include <iostream>
#include <string.h>

using namespace std;

void is_palindrome(string word){
    int word_length = word.length();
    string word_backwards;
    for (int i=1; i<=word_length; i++){
        word_backwards=word_backwards + word[word_length-i];
    }
    if (strcasecmp(word.c_str(), word_backwards.c_str()) == 0){
        cout << "True. This word is a palindrome." << endl;
    }
    else{
        cout << "False. This word is no palindrome." << endl;
    }
    return;
}

int main()
{
    string input;
    cout << "Please enter a word: ";
    cin >> input;
    is_palindrome(input);
    return 0;
}
