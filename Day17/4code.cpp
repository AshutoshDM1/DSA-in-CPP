#include<iostream>
#include<string>
using namespace std;


class Car {
 public : 
	string name; 
	string color;
	Car(string name, string color) {
		this->name = name;
		this->color = color;
	cout << "new Car Created\n";
	}
	Car(Car &original) {  // Custom Copy Constructor Called Here
		cout << "Copying...\n";
		name = original.name;
		color =original.color;
	}
	void getName(){
    cout  << "Name: " << name << endl;
  }
    void getColor () {
    cout<<"Color: "<<color<<endl;
  }
};


int main() {
  Car c1("maruti", "white");
 	Car c2(c1); //  copy constructor called here
	c2.getName();
	c2.getColor();
}

