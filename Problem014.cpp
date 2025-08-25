#include <iostream>

/*
📝 Program should read 2 numbers from the user.  
🔄 Swap their values and print the numbers before and after swapping.
*/


using namespace std;

void ReadNumbers(int& Num1 , int& Num2){
  cout << "Please Enter Number 1 : " << endl;
  cin >> Num1;

  cout << "Please Enter Number 2 : " << endl;
  cin >> Num2;
}


void SwapNumbers(int& Num1 , int& Num2){
  int Temp;
  Temp = Num1;
  Num1 = Num2;
  Num2 = Temp;
}

void printNumbers(int Num1 , int Num2){
   cout <<"\n****************************\n";
   cout << "Number 1 : "<< Num1 <<endl;
   cout << "Number 2 : "<< Num2 ;
   cout <<"\n****************************\n";
}

int main()
{
    int Num1 , Num2;
    ReadNumbers(Num1 , Num2);
    printNumbers(Num1 , Num2);
    SwapNumbers(Num1 , Num2);
    printNumbers(Num1 , Num2);

    return 0;
}
