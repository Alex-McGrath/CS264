//Write a C++ program that reads in an integer and checks if it is palindrome. An
//integer is palindrome when it reads the same backward as forward.

// Alex McGrath 21397613


// i started by copying and pasting my reverse.cpp code into this, as my logic was that you can compare the revered int to the orignal int to see if they do or do not match
#include <iostream>
using namespace std;

int main(){
    int number; 
    int reversed=0; 

    cout << "Enter an integer to test if it is a palindrome:" << endl; 
    cin>> number; 
    int newnumber = number;
    while(number!=0){
        int last = number%10; // by getting the modulo 10 of the inputted number, it isolates the last digit and saves it into a temporary int called last
        reversed = reversed*10+last; // this assigns the last digit to the reversed int, but it also multiplies any int that is already saved as revered by 10 in order for the new last int to be saved at the front of the new int to ensure it's being placed in reverse order
        number/=10; // as the last digit has now been stored in the new int, dividing the original number by 10 removes that last digit and saves number without it so that it can be run through the loop again
    }

    // this makes sure that the number is not negative (as negative ints cant be palindromes due to the -) and that they reversed int is the same as the original int
    if(reversed == newnumber && newnumber>=0){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<< endl;
    }

    
}

