/*
    Geeth De Silva
    github : sagee-dev
    condinal flows uses to run the different code segments
    depending on the different condition
*/
//include iostream to create output streams
#include <iostream>

//use namespae std to ease of code
using namespace std;

//main method entrance to the program
int main(){
    
    //set condition1 false
    bool condition1 = false;

    //set condition2 true
    bool condition2 = true;

    //set condition3 1059
    bool condition3 = 1059;

    if(condition1){
        cout<<"Condition 1 is true"<<endl;
        //run set of code if the condition1 is true
    }else{
        cout<<"Condition 1 is false"<<endl;
        //run set of if the condition1 is not true
    }

    if(condition2){
        cout<<"Condition 2 is true"<<endl;
        //run set of code if the condition2 is true
    }else{
        cout<<"Condition 2 is false"<<endl;
        //run set of if the condition2 is not true
    }

    if(condition3){
        cout<<"Condition 3 is true"<<endl;
        //run set of code if the condition3 is true
    }else{
        cout<<"Condition 3 is false"<<endl;
        //run set of if the condition3 is not true
    }
    //Boolean intialized to value higher to 0 will be considered true

    //initialized intiger x,y,z

    int x = 100;
    int y = 150;
    int z = 300;

    //compare x and y
    if(x>y){
        cout<<"x is larger than y "<<endl;
        //run set of code if the x is larger than y
    }else{
        cout<<"y is larger than x "<<endl;
        //run set of code if the y is larger than x
    }

    //compare z
    if(z<150){
        cout<<"z is lesser than 149"<<endl;
        //run a set of code if the z is lesser than 150
    }else if(z>149 && z<300){
        cout<<"z is between 150 and 299"<<endl;
        //run a set of code if the z between 150 and 299
    }else if(z>299){
        cout<<"z is larger than 300"<<endl;
        //run set of code if the z is larger than 300
    }

    //return 0 at the end
    return 0;
}
