#include <iostream>

// 📝 Problem: Read a person's age 👤 and check if it falls within the valid range (18–45) ✅❌  


using namespace std;


int ReadAge(){
  int Age;
  cout << "Enter Your Age : " <<endl;
  cin >> Age;
  return Age;
}

bool ValidateNumberInRange(int Number , int From , int To){
  return (Number >= From && Number <= To);
}

void PrintResult(int Age){

    if(ValidateNumberInRange(Age , 18 , 45)){
        cout << Age <<"is valid Age" <<endl;
    }else{
        cout << Age <<"is invalid Age" <<endl;
    }

}

int main()
{
    PrintResult(ReadAge());

    return 0;
}
