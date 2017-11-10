#include<iostream>
#include "Q5.h"
using namespace std;   
void main ()
   {
    ZooAnimal bozo();
    bozo.create ("Bozo", 408, 1027, 400);
    cout << "This animal's name is " << bozo.name << endl;
    bozo.Destroy ();
   }
