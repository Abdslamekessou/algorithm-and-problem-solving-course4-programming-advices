#include <iostream>

// 💰 Program to calculate the monthly installment of a loan  
// 📝 User enters the total loan amount and number of months,  
// 📊 Program divides the loan amount by months to get monthly payment  

using namespace std;


int ReadPositiveNumber(string Message){

  int Number = 0;

  do{
     cout << Message << endl;
     cin >> Number;
  }while(Number <= 0);

  return Number;

}


float MonthlyInstallment(float LoanAmount , int NumberOfMonths){
   return (float) LoanAmount / NumberOfMonths;
}


int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter loan amount?");
    float HowManyMonths = ReadPositiveNumber("How many months?");

    cout << "\nMonthly installment to pay is : " << MonthlyInstallment(LoanAmount , HowManyMonths)<<endl;

    return 0;
}
