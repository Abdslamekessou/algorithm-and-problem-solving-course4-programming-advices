#include <iostream>

// 🚗 Hire a Driver – Case 1
// Write a program to read a person’s age and whether they have a driving license.
// Accept the applicant if age > 21 AND has a driving license, otherwise reject.

using namespace std;

struct stInfo{
   int age;
   bool hasDrivingLicense;
};

stInfo readInfo(){
  stInfo Info;
  cout << "Please enter your age : " <<endl;
  cin >> Info.age;

  cout << "Do you have driver license (1/0) : " <<endl;
  cin >> Info.hasDrivingLicense;

  return Info;

}

bool isAccepted(stInfo Info){
  return (Info.age > 21 && Info.hasDrivingLicense);
}

void printResult(stInfo Info){

    if(isAccepted(Info)){
        cout <<"\n Accepted \n" <<endl ;
    }else{
      cout <<"\n Rejected \n" <<endl ;
    }

}

int main()
{
    printResult(readInfo());
    return 0;
}
