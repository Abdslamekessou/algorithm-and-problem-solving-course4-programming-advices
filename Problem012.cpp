#include <iostream>

/*
📝 Program should read 2 numbers from the user.  
🔎 Find and display the maximum of the two numbers.
*/

using namespace std;

void ReadNumbers(int& Num1 , int& Num2){
  cout << "Please Enter Number 1 : " << endl;
  cin >> Num1;

  cout << "Please Enter Number 2 : " << endl;
  cin >> Num2;
}

int MaxOf2Numbers(int Num1 , int Num2){
   if(Num1 > Num2)
      return Num1;
   else
      return Num2;
}

void printResults(int Max){
   cout << "\n The Maximum Number is : " << Max << endl;
}

int main()
{
    int Num1 , Num2;
    ReadNumbers(Num1 , Num2);
    printResults(MaxOf2Numbers(Num1 , Num2));
    return 0;
}
