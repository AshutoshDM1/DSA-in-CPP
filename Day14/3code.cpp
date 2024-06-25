#include <iostream>
using namespace std;
int main() {
    char word[10];
    char Line[50];
    cout << "Enter the chat words: ";
    cin >> word; // to store the input but no new line or space will be added
    cout  << "The entered chat words are as follows:" << word << endl;
    cout << "Enter a Line of Chat Words: "; 
    cin.getline(Line, 50 ,'*' );
    cout << "The entered chat words are as follows:" << endl << Line << endl; // for input with new line and space will be added
    return 0;
}

