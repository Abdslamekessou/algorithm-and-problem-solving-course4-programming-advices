#include <iostream>

// Program To Print Full Name

using namespace std;

struct stInfo{
   string firstName;
   string lastName;
};

stInfo ReadInfo(){
  stInfo Info;
  cout << "Enter Your First Name : " << endl;
  cin >> Info.firstName;

  cout << "Enter Your Last Name : " << endl;
  cin >> Info.lastName;

  return Info;
}

string GetFullName(stInfo Info , bool reversed){
  string fullName;

  if (reversed)
    fullName = Info.lastName + " " + Info.firstName;
  else
    fullName = Info.firstName + " " + Info.lastName;

  return fullName;
}


void printFullName(string fullName){
   cout << "Your Full Name Is : " << fullName << endl;
}




int main()
{
    printFullName(GetFullName(ReadInfo() , true));

    return 0;
}
