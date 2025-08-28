#include <iostream>
#include <math.h>

// 🧮 Program reads a positive number from the user
// 🔎 Then checks if it is Prime or Not Prime and prints the result

using namespace std;

enum enPrimeNotPrime {Prime = 1 , NotPrime = 2};


int ReadPositiveNumber(string Message){
    int Number;

     do{
        cout << Message<< endl;
        cin >> Number;
     }while(Number <= 0);

    return Number;
}



enPrimeNotPrime CheckPrime(int Number){

   for(int counter = 2 ; counter <= round(Number / 2) ; counter++){
      if(Number % counter == 0 ){
         return enPrimeNotPrime::NotPrime;
      }
   }

      return enPrimeNotPrime::Prime;
}


void PrintPrimeType(int Number){

    switch(CheckPrime(Number)){
      case enPrimeNotPrime::Prime :
        cout << "The number is prime" <<endl;
        break;

       case enPrimeNotPrime::NotPrime :
        cout << "The number is not prime" <<endl;
        break;
    }
}


int main()
{
    PrintPrimeType(ReadPositiveNumber("Please Enter A Positive Number ? "));
    return 0;
}
