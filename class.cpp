#include <iostream>
#include <string>
using namespace std;

class Car {
  private:
    string brand;
    string model;
    int year;

  public:
    Car(string x, string y, int z);

    void display ();
};


Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

void Car :: display (){

    cout << brand << endl;
    cout << model << endl;
    cout << year << endl;
    cout << endl;

}

void print(Car C, Car B){

    C.display() ;
    B.display() ;

}

int main() {

  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  print(carObj1,carObj2);
  return 0;
}
