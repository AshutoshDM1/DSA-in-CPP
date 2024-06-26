#include <iostream>
#include <cstring>
using namespace std;

// apna college logic little better

int checkPalindrome() {
  char name[5] = "MoDx";
  cout << "String : " << name << endl;
  int start = 0;
  int end  = strlen(name) - 1;
  bool palindrome = false;
  while(start <= end) {
    if (name[start++] != name[end--]){
    palindrome = false;
    };
  }
  if (! palindrome){
     cout << "The string is not a palindrome" << endl;
  }
  else {
     cout << "The string is a palindrome" << endl;
  }
  return 0;
}



// My logic
int main() {
  char name[] = "mom";
  char str[sizeof(name)];
  cout << "String : " << name << endl;

  int end = strlen(name) - 1;
  for (int i = 0; i < strlen(name); ++i) {
    str[i] = name[end];
    end--;
  }
  str[strlen(name)] = '\0';
  cout << "Reversed String : " << str << endl;
  if (strcmp(name, str) == 0) {
    cout << "The string is a palindrome" << endl;
  } else {
    cout << "The string is not a palindrome" << endl;
  };
  cout << "----------------------------" <<  endl ;
  checkPalindrome();
  return 0;
}


