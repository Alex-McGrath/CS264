//4.5 Power of Two
// Implement a C++ function that decides if an integer k (k ≥ 0) is a power of two
// (without using C++ built-in power function).

// Alex McGrath - 21397613



#include <iostream>
using namespace std;
int main(){
    int number; // declaring the number that will be inputted

    cout<<"Enter a number to check if it is a power of 2:"<<endl; // asking for the number to be inputted
    cin>>number;   // saving the number that was inputed in the variable number

    bool pwr=true; // setting up a boolean to prove whether its true or false 



    if(number<1){
        pwr = false;
    } // This if statement basically eliminates 0 and all negative integers, as they cannot be powers of 2
    else{
        while(number>1){ // while number is greater than 1 (because 1 is a power of 2 and anything lower is not)
            if (number % 2 != 0) { // If number is odd, it's not a power of 2
                pwr = false;
                break; // break ends the loop if its false, this ensures the code doesnt keep going even when there is no way of it being a power of 2
            }
            number/=2; //this halfs the inputted number to run through the loop again
        }
    }

    if(pwr==true){
        cout<<"True"<<endl; // if the number is a power of 2, it says true
    }
    else{
        cout<<"False"<<endl; // if its not a power of 2, it says false
    }
    //if(number <0){
    //}
    //else{
    //    cout<<number<<" is a power of 2"<<endl;
    //}
    

}