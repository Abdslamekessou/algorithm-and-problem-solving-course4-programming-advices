#include <iostream>

// 💰 Program to calculate how many months are needed to pay off a loan
// 📝 User enters loan amount and monthly payment, then program computes and prints the result


using namespace std;


int ReadPositiveNumber(string Message){

  int Number = 0;

  do{
     cout << Message << endl;
     cin >> Number;
  }while(Number <= 0);

  return Number;

}


float TotalMonths(float LoanAmount , float MonthlyPayment){
   return (float) LoanAmount / MonthlyPayment;
}


int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter loan amount?");
    float MonthlyPayment = ReadPositiveNumber("Please enter monthly payment");

    cout << "\nTotal months to pay  : " << TotalMonths(LoanAmount , MonthlyPayment) << " months" <<endl;

    return 0;
}
