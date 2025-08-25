#include <iostream>

/*
📝 Program should read 3 numbers from the user.  
➕ Find their sum and display the result.
*/

using namespace std;

void ReadNumbers(int& Num1 , int& Num2 , int& Num3){
  cout << "Please Enter Number 1 : " << endl;
  cin >> Num1;

  cout << "Please Enter Number 2 : " << endl;
  cin >> Num2;

  cout << "Please Enter Number 3 : " << endl;
  cin >> Num3;
}

int SumOf3Numbers(int Num1 , int Num2 , int Num3){
  return Num1 + Num2 + Num3 ;
}

void PrintResults(int Total){
  cout << "The total sum of numbers is : " << Total <<endl;
}

int main()
{
    int Num1 , Num2 , Num3;
    ReadNumbers(Num1 , Num2 , Num3);
    PrintResults(SumOf3Numbers(Num1 , Num2 , Num3));

    return 0;
}
