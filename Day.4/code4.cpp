#include <iostream>
using namespace std;
int main()
{
  int day;
  cout<<"Enter the Day Number: ";
  cin>>day;
  switch(day) {
    case 1 : {
      cout<<"The Given Day is a Sunday! \n" << endl;
      break;
    }
    case 2 : {
      cout<<"The Given Day is a Monday! \n" << endl;
      break;
    }
    case 3 : {
      cout<<"The Given Day is a Tuesday! \n" << endl;
      break;
    }
    case 4 : {
      cout<<"The Given Day is a Wednesday! \n" << endl;
      break;
    }
    case 5 : {
      cout<<"The Given Day is a Thursday! \n" << endl;
      break;
    }
    case 6 : {
      cout<<"The Given Day is a Friday! \n" << endl;
      break;
    }
    case 7 : {
      cout<<"The Given Day is a Saturday! \n" << endl;
      break;
    }
  }

  return 0 ;
}