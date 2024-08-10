#include<iostream>
#include<string>
using namespace std;

// solve my self

string removeDuplicateString(string name, string dub , int idx, bool arr[26] ){
if (idx == name.size()){
  return dub;
};
if (arr[name[idx] - 'a'] == false){
  dub += name[idx];
  arr[name[idx] - 'a'] = true;
}
return removeDuplicateString(name ,dub , idx+1 , arr);
}

int main() {
    cout<<"remove duplicate string:\n";
    string name = "";
    cin >> name;
    bool arr[26] = { false };
    cout << removeDuplicateString(name ,"" , 0 , arr) <<"\n" ;
}
  