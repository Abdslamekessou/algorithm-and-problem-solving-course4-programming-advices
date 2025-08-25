#include <iostream>

/*
📝 Program should read 3 numbers from the user.
🔎 Find and display the maximum of the three numbers.
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

int MaxOf3Numbers(int Num1 , int Num2 , int Num3){
   if(Num1 > Num2 && Num1 > Num3){
     return Num1;
   }else if(Num2 > Num1 && Num2 > Num3){
     return Num2;
   }else{
      return Num3;
   }
}

void printResults(int Max){
   cout << "\n The Maximum Number is : " << Max << endl;
}

int main()
{
    int Num1 , Num2 , Num3;
    ReadNumbers(Num1 , Num2 , Num3);
    printResults(MaxOf3Numbers(Num1 , Num2 , Num3));
    return 0;
}
