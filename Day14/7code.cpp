#include<iostream>
#include<cstring>
using namespace std;
int main() {
  
  char str1[100];
  strcpy(str1, "Hello World");
  cout << str1 << endl;
  char str2[100];
  strcpy(str2, str1);
  cout  << str2 <<  endl;


  strcat(str1, str2);
  cout << str1 << endl;

  cout << strcmp("Hello World", "Hello World") << endl ;
  cout << strcmp(str1, str2) << endl ;



  return 0;
}

 