#include <iostream>

using namespace std;

// 🧮 Program reads two numbers and an operator (+, -, *, /) from the user
// ➡️ Then calculates and displays the result of the chosen operation

enum enOperatorType{ Add = '+' , Subtract = '-' , Multiply = '*' , Divide = '/' };

enOperatorType ReadOperationType(){
  char OT = '+';

  cout << "Please enter operation type ( + , - , * , / ) : " <<endl;
  cin >> OT;

  return (enOperatorType) OT;
}

float ReadNumber(string Message){
  float Number;

  cout << Message <<endl;
  cin >> Number;

  return Number;
}


float Calculate(float Number1 , float Number2 ,enOperatorType OpType ){

    switch(OpType){
      case enOperatorType::Add :
          return (Number1 + Number2);
      case enOperatorType::Subtract :
           return (Number1 - Number2);
      case enOperatorType::Multiply :
           return (Number1 * Number2);
      case enOperatorType::Divide:
           return (Number1 / Number2);
      default:
           return (Number1 + Number2);

    }

}

int main()
{
    float Number1 = ReadNumber("Please enter your first number? ");
    float Number2 = ReadNumber("Please enter your second number? ");
    enOperatorType OpType = ReadOperationType();

    cout << "Result = " << Calculate(Number1 , Number2 , OpType) <<endl;
    return 0;
}
