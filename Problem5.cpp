#include <iostream>

// 🚗 Hire a Driver – Case 2
// Write a program to read a person’s age, driving license status, and recommendation.
// Accept the applicant if (age > 21 AND has a driving license) OR if they have a recommendation.

using namespace std;

struct stInfo{
   int age;
   bool hasDrivingLicense;
   bool hasRecommendation;
};

stInfo readInfo(){
  stInfo Info;
  cout << "Please enter your age : " <<endl;
  cin >> Info.age;

  cout << "Do you have driver license (1/0) : " <<endl;
  cin >> Info.hasDrivingLicense;

  cout << "Do you have recommendation (1/0) : " <<endl;
  cin >> Info.hasRecommendation;

  return Info;

}

bool isAccepted(stInfo Info){
    if(Info.hasRecommendation){
         return true;
    }else{
         return (Info.age > 21 && Info.hasDrivingLicense);
    }

}

void printResult(stInfo Info){

    if(isAccepted(Info)){
        cout <<"\n Hired \n" <<endl ;
    }else{
      cout <<"\n Rejected \n" <<endl ;
    }

}

int main()
{
    printResult(readInfo());
    return 0;
}
