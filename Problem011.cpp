#include <iostream>

/*
📝 Program should read 3 numbers from the user.  
✅ Calculate their average and print "Pass" if average ≥ 50, otherwise print "Fail".
*/

using namespace std;

enum enPassFail {Pass = 1 , Fail};

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

float CalculateAverage(int Num1 , int Num2 , int Num3){
  return (float) SumOf3Numbers(Num1 , Num2 , Num3) / 3 ;
}

enPassFail CheckAverage(float Average){
   if(Average >= 50){
     return enPassFail::Pass;
   }else{
     return enPassFail::Fail;
   }
}



void PrintResults(float Average){
  if(CheckAverage(Average) == enPassFail::Pass){
    cout << "\n You Passed \n" <<endl;
  }else{
    cout << "\n You Failed \n" <<endl;
  }
}

int main()
{
    int Num1 , Num2 , Num3;
    ReadNumbers(Num1 , Num2 , Num3);
    PrintResults(CalculateAverage(Num1 , Num2 , Num3));

    return 0;
}
