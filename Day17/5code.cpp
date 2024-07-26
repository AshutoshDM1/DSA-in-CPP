#include<iostream>
#include<string>
using namespace std;
//Destructor
 
class Car {
 public : 
	string name; 
	string color;
    int *mileage;
	Car(string name, string color) {
		this->name = name;
		this->color = color;
        mileage = new int;
        *mileage = 12;
	    cout << "new Car Created\n";
	}
	Car(Car &original) {
		cout << "Copying...\n";
		name = original.name;
		color =original.color;
        mileage = new int; // Deep Copy
        *mileage = *original.mileage;
	}
    ~Car() {  // destructor...
        cout << "Destructing Car...\n";
        if (mileage != NULL){
            delete mileage;
            mileage = NULL;
        }
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
    Car c2(c1); // doing Deep Copy
	c2.getName();
	c2.getColor();

    return 0;
}

