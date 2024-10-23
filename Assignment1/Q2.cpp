//4.2 Greatest Common Divisor
//Write a C++ program that reads in two integers from user’s input and calculates
//the greatest common divisor of two integers.

//Alex McGrath - 21397613

#include <iostream>
using namespace std;

int main(){
    // these variables store the first and second inputted numbers
    int first;
    int second;
    // these two ints store the highest and lowest of the two ints respectively
    int high;
    int low;
    // this stores the greatest common divisor, the int that will b e printed at the end
    int gcd;


    // This outputs a message asking for the 2 ints and saves both inputs in first and second respectively
    cout << "Enter the first number:"<<endl;
    cin>>first;
    cout <<"Enter the second number:"<<endl;
    cin>>second;

    //cout<<"The GCD of "<<first<<" and "<<second<<" is:"<<endl;

    // This if else assigns the highest value to high and the lowest to low depending on which one it is
    if(first>second){
        high = first;
        low = second;
    }
    else{
        high = second;
        low = first;
    }

    //cout<<high<<" is greater than "<<low<<endl;


    // This loop iterates from the smaller number (low) down to 1
    // It checks if both 'high' and 'low' can be divided by the current number that is stored in 'i'
    // The first number we find will be the greatest common divisor
    for(int i=low;i>0;i--){
        if(high%i==0 && low%i==0){
            gcd = i; // this sets the gcd to the current number, this will then end the loop with the break
            break;
        }

    }
    cout<<"The Greatest Common Divisor of "<<first<<" and "<< second<<" is: "<<gcd<<endl;
}