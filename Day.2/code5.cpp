#include<iostream>
using namespace std;
int main() 
{
  cout << "Enter the Marks Of the Student : \n";
  float english , maths , science , sum , ave;
  cout<<"Enter The Marks of English \n";
  cin>>english;
  cout<<"Enter The marks of Maths\n";
  cin>>maths;
  cout<<"Enter The marks of Science\n";
  cin>>science;
  sum=english+maths+science;
  cout<<"The Toalt Marks Of Student Are : \n "<< sum <<"\n";;
  ave= sum /3;
  cout<<"The Average Marks Of the Student Are :\n"<< ave;
  return 0;
}

