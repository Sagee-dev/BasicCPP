/*Geeth De Silva
    github : sagee-dev
    iterations used in C++ to run a set of code
    again and again subject to a condition
    or fixed number of time 
*/
//include iostream create outputs
#include <iostream>

//use namestd std for ease of program
using namespace std;

//create main method entry method for the program
int main(){

    //for loop
    // runs for the number of fixed times
    for(int i = 0; i<12; i++){
        //int i initialized to 0
        // i++ increase i by 1
        // i<12 codition will run the loop for 11 time
        cout<<"for loop i = "<<i<<endl;
    }

    bool condition1 = false;
    int j = 0;
    //while loop
    while(!condition1){
        //while loop will run as long as condition1 is false
        cout<<"while loop i = "<<j<<endl;
        
        if(j == 25){
            //set the condition1 to ture when j reaches to 25
            condition1 = true;
        }
        j++;
    }

    bool condition2 = false;
    int k = 0;

    do{
        //do while loop will run one time without checking the condition
        //then rerun the do while loop depending on the condition
        cout<<"do while k = "<<k<<endl;
        if(k==0){
            //set condition2 true if k=0
            condition2 = true;
        }else if(k==20){
            //set condition2 false if k=20
            condition2 = false;
        }
        k++;
    }while(condition2);

    //return 0 at the end
    return 0;
}
