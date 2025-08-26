#include <iostream>

// 📝 Problem: Keep asking the user 👤 to enter their age until it is within the valid range (18–45) 🔄✅  


using namespace std;


int ReadAge(){
  int Age;
  cout << "Please enter age between 18 and 45 : " <<endl;
  cin >> Age;
  return Age;
}

bool ValidateNumberInRange(int Number , int From , int To){
  return (Number >= From && Number <= To);
}

int ReadAgeUntilBetween(int From , int To){
  int Age = 0;

  do{
     Age = ReadAge();
  }while(!ValidateNumberInRange(Age , From , To));

  return Age;

}

void PrintResult(int Age){

  cout << "Your Age is : " << Age << endl;

}

int main()
{
    PrintResult(ReadAgeUntilBetween(18 , 45));

    return 0;
}
