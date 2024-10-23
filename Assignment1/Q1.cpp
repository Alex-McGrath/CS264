//4.1 Reverse an integer
//Write a C++ program that reads in an integer from user’s input and reverses it’s
//value.

// Alex McGrath - 21397613


#include <iostream>
using namespace std;

int main(){
    int number; // initialise 2 variables, one for the input and one for the reversed number
    int reversed=0; 

    cout << "Enter an integer:" << endl; 
    cin>> number; // assigning the inputted value to the numver variable

    //this while loop runs through the entire int until it reaches 0
    while(number!=0){
        int last = number%10; // by getting the modulo 10 of the inputted number, it finds the last digit and saves it into a temporary int called last
        reversed = reversed*10+last; // this assigns the last digit to the "reversed" int, but it also multiplies any int that is already saved as "revered" by 10 in order for the new last int to be saved at the front of the new int to ensure it's being placed in reverse order
        number/=10; // as the last digit has now been stored in the new int, dividing the original number by 10 removes that last digit and saves number without it so that it can be run through the loop again
    }

    cout<<reversed<<endl; // this prints out the number reversed
  
    
}