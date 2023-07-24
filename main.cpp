/***************************************************************************************
Alexis Martinez 
15.1 Ship, CruiseShip, CargoShip

This program demonstrates a virtual `print` function within a `Ship` class, 
and it's two derived classes `CruiseShip` and `CargoShip`, displaying the name
of the ship and another corresponding detail- year built, max passengers, 
and max cargo capacity, respectively. 
****************************************************************************************/

#include "ships.h"

int main(){
    const int NUM_SHIPS = 3;

    // Array of Ship pointers, intialized with addresses of dynamically allocated objects.
    Ship *ships[NUM_SHIPS] = {new Ship, new CruiseShip, new CargoShip};

    // Steps through `ships` array, calling each object's `print` function.
    for(int i = 0; i < NUM_SHIPS; i++){
        ships[i]->print();
    }

    return 0;
}