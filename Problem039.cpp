#include <iostream>

// 🛒 Program to read total bill and cash paid  
// 💵 Then calculate the remainder (change or amount still owed)


using namespace std;

float ReadPositiveNumber(string Message){
  float Number;

  cout << Message << endl;
  cin >> Number;

  return Number;
}


float CalculateRemainder(float TotalBill ,float TotalCashPaid){
   return (TotalCashPaid - TotalBill);
}



int main()
{
    float TotalBill = ReadPositiveNumber("Please enter Total Bill? ");
    float TotalCashPaid = ReadPositiveNumber("Please enter Total Cash Paid? ");

    cout << "Total Bill = " << TotalBill <<endl;
    cout << "Total Cash Paid = " << TotalCashPaid <<endl;


    float Remainder = CalculateRemainder(TotalBill , TotalCashPaid);
    cout << "\n*****************************************************\n";
    cout << "Remainder = " << Remainder <<endl;

    return 0;
}
