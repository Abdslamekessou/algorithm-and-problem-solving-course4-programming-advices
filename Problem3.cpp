#include <iostream>

// Program To Check if the number is odd or even

using namespace std;

enum enNumberType {Odd = 1 , Even = 2};

int ReadNumber(){
   int number;
   cout << "Enter Your Number : " << endl ;
   cin >> number;
   return number;
}

enNumberType CheckNumberType(int number){
    int result = number % 2;

     if(result == 0){
        return enNumberType::Even;
     }else{
        return enNumberType::Odd;
     }
}

void printNumberType(enNumberType NumberType){

    if(NumberType == enNumberType::Even){
        cout << "Your Number Is Even" <<endl;
    }else{
       cout << "Your Number Is Odd" <<endl;
    }

}

int main()
{
    printNumberType(CheckNumberType(ReadNumber()));
    return 0;
}
