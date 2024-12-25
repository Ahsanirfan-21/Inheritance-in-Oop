#include <iostream>
using namespace std;
class Vehicle {
public:
    string model;
    int num;
    void display() {
        cout << model << endl;
        cout << num << endl;
    }
};
class Truck : public Vehicle {
public:
    int loadCapacity;
    void display() {
        cout << model << endl;
        cout << num << endl;
        cout << loadCapacity << endl;
    }
};
int main() {
    Truck* mazda = new Truck();
    mazda->model = "Haval";
    mazda->num = 222;
    mazda->loadCapacity = 1000; 
    mazda->display();
    delete mazda; 
    return 0;
}
