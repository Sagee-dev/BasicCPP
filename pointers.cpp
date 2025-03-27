/*Geeth De Silva
  github : sagee-dev
  pointers 
  when we a variable is initialized in C++
  it allocates a space in memory
  pointers returns the address of these memory locations
  it has multiple uses
*/
//include iostream to create output steams
#include <iostream>

// use name spase std for ease of coding
//otherwise std::cout need to be used
using namespace std;

//create main method enter point to the program
int main(){
    //initialize two intiger variables
    int x = 7;
    int y = 10;
    // get the address of x to the integer pointer p
    int* p = &x;

    //print the value and the address of x
    cout<< "x = " <<x<< endl;
    cout<< "Address of x is"<<p<<endl;

    //print the value of y
    cout<< "y = "<< y<<endl;

    //copy the value of the address of the p to y
    y = *p;

    //print thr new value of y
    cout<< "new y = "<< y<<endl;
    
    //creta a refference z to x
    int& z = x;

    //print the value of z
    cout<< "z = "<<z<<endl;

    //modify the value of z
    z = 15;

    //print the new value of the z and the 
    //value of x
    cout<<"new value of z ="<<z<<endl;
    cout<<"x = "<<x<<endl;

    //notice when refference z change original x is modified

    //but the value of y is not change because
    //value of address p is copied to y
    cout<<"y = "<<y<<endl;

    //copy the value of the address p again to y
    y = *p;

    //print the new value of
    cout<<"y = "<<y<<endl;

    //value of the y is now updated

    //return 0 in the end
    return 0;
}
