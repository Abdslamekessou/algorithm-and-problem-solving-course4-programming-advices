#include <iostream>
#include <string>


// ✂️ Half of a Number
// Write a program that reads an integer from the user.
// Then calculate and print half of that number.

using namespace std;

int readNumber(){
  int number;
  cout << "Enter A Number : " << endl;
  cin >> number;
  return number;
}

float CalculateHalfNumber(int Num){
   return (float) Num / 2;
}

void PrintResults(int Num){

  string result = "Half of " + to_string(Num) + " is :  " + to_string(CalculateHalfNumber(Num));
  cout << endl << result << endl ;
}


int main()
{
    PrintResults(readNumber());
    return 0;
}
