#include<iostream>
#include<string>
// Valid Anagrams in C++
using namespace std;


bool is_anagrams( string s , string t ) { 
  int count[26] = {0};
  if ( s.length() != t.length() ){
    cout << "the strings are not anagrams" << endl;
    return false;
  }

  for( int i = 0 ; i < s.length() ; ++i) {
    count[s[i]-'a']++;
    count[t[i]-'a']--;
  }
  for( int i = 0 ; i < 26 ; ++i ) {
    if ( count[i] != 0 ) {
      cout << "the strings are not anagrams" << endl;
      return false;
    }
  }
  cout << "the strings are anagrams" << endl;
  return true;
}

int main()
{
  string str1 = "anagram";
  string str2 = "nagaram";

  cout << is_anagrams(str1 , str2) << endl;

  return 0;
}