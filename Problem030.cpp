#include <iostream>

// 📝 Problem: Read a positive number 🔢 (reject negatives) and calculate its factorial (!)  
// using a for loop, then display the result in a formatted way 📊.  


using namespace std;

int ReadPositiveNumber(string Message){
   int number;
   do{
     cout << Message;
     cin >> number;
   }while(number < 0);

   return number;
}

int Factorial(int Number){

   int factorial = 1;
   int Counter;

   for( Counter = Number ; Counter >= 1 ; Counter--){
     factorial *= Counter;
   }

   return factorial;
}

void printResult(int Number , int factorial){
   cout << "\n******************************************************\n\n";
   cout << "Factorial of " << Number << " is : " << factorial <<endl;
   cout << "\n******************************************************\n";
}

int main()
{
    int Number = ReadPositiveNumber("Enter A Positive Number :\n");
    printResult(Number , Factorial(Number));
    return 0;
}
