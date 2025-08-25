#include <iostream>

/*
📌 Write a program that reads a student's mark.  
🎯 Print "You Passed" if mark ≥ 50, otherwise print "You Failed".
*/

using namespace std;

enum enPassFail {Pass = 1 , Fail };

int readMark(){
  int Mark;
  cout << "Please Enter Your Mark : " <<endl;
  cin >> Mark;
  return Mark;
}

enPassFail CheckMark(int Mark){
   if(Mark >= 50){
     return enPassFail::Pass;
   }else{
     return enPassFail::Fail;
   }

}

void PrintResults(int Mark){

  if(CheckMark(Mark) == enPassFail::Pass){
    cout << "\n You Passed" <<endl;
  }else{
    cout << "\n You Failed" <<endl;
  }

}

int main()
{
    int Mark;
    PrintResults(readMark());
    return 0;
}
