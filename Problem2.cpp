#include <iostream>
using namespace std;

// Program To Read Name And Print It

string readName(){
  string name;

  cout << "Please Enter Your Name : " <<endl;
  getline(cin , name);

  return name;
}

void PrintName(string name){
  cout << "\nYour Name is: " << name <<endl;
}

using namespace std;

int main()
{
    PrintName(readName());
    return 0;
}
