#include <iostream>
#include <string>
using namespace std;

class Ship{
    private:
        string name;
        int year;
    
    public:
        // Constructors
        Ship(){ 
            name = "SS CS"; 
            year = 2023; 
        }
        Ship(const string name, int year){
            this->name = name;
            this->year = year;
        }

        // Accessors and Mutators
        string getName() const{ return name; }
        int getYear() const{ return year; };

        void setName(string name){ this->name = name ;}
        void setYear(int year){ this->year = year; }

        // Virtual function
        virtual void print(){ 
            cout << "\nShip Name: " << this->getName() 
                 << "\nYear Built: " << this->getYear() << endl;
        }
};

// ------------------------------ Derived class, CruiseShip ------------------------------
class CruiseShip : public Ship{
    private:
        int maxPassengers;

    public:
        // Constructors
        CruiseShip(): Ship(){ 
            maxPassengers = 5000; 
        }
        CruiseShip(const string name, int year, int maxPassengers) : Ship(name, year){
            this->maxPassengers = maxPassengers;
        }

        // Accessors and Mutators
        int getMaxPassengers() const{ return maxPassengers; }
        void setMaxPassengers(int maxPassengers){ this->maxPassengers = maxPassengers; }

        // Overriding function
        virtual void print(){
            cout << "\nCruise Ship Name: " << this->getName() 
                 << "\nMaximum Number of Passengers: " << this->getMaxPassengers() << endl;
        };
};

// ------------------------------ Derived class, CargoShip ------------------------------
class CargoShip : public Ship{
    private:
        int maxCapacity;

    public:
        // Constructors
        CargoShip() : Ship(){
            maxCapacity = 3000;
        }
        CargoShip(const string name, int year, int maxCapacitiy) : Ship(name, year){
            this->maxCapacity = maxCapacitiy;
        }

        // Accessors and Mutators
        int getMaxCapacity() const{ return maxCapacity; }
        void setMaxCapacity(int maxCapacity){ this->maxCapacity = maxCapacity; }

        // Overriding function
        virtual void print(){
            cout << "\nCargo Ship Name: " << this->getName() 
                 << "\nMaximum Cargo Capacity in Tons: " << this->getMaxCapacity() << endl;
        }
 };

