#include <iostream>

/*
📝 Program should read 3 marks from the user.
✅ Calculate their average and print "Pass" if average ≥ 50, otherwise print "Fail".
*/

using namespace std;

enum enPassFail {Pass = 1 , Fail};

void ReadMarks(int& Mark1 , int& Mark2 , int& Mark3){
  cout << "Please Enter Mark 1 : " << endl;
  cin >> Mark1;

  cout << "Please Enter Mark 2 : " << endl;
  cin >> Mark2;

  cout << "Please Enter Mark 3 : " << endl;
  cin >> Mark3;
}

int SumOf3Numbers(int Mark1 , int Mark2 , int Mark3){
  return Mark1 + Mark2 + Mark3 ;
}

float CalculateAverage(int Mark1 , int Mark2 , int Mark3){
  return (float) SumOf3Numbers(Mark1 , Mark2 , Mark3) / 3 ;
}

enPassFail CheckAverage(float Average){
   if(Average >= 50){
     return enPassFail::Pass;
   }else{
     return enPassFail::Fail;
   }
}



void PrintResults(float Average){
   cout <<"Your Average is : " << Average <<endl;
  if(CheckAverage(Average) == enPassFail::Pass){
    cout << "\n You Passed \n" <<endl;
  }else{
    cout << "\n You Failed \n" <<endl;
  }
}

int main()
{
    int Mark1 , Mark2 , Mark3;
    ReadMarks(Mark1 , Mark2 , Mark3);
    PrintResults(CalculateAverage(Mark1 , Mark2 , Mark3));

    return 0;
}

