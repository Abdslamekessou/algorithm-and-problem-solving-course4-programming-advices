#include <iostream>

// 🧾 Program to read a bill value from the user  
// ➕ Then calculate the total after adding 10% service fee and 16% sales tax

using namespace std;


float ReadPositiveNumber(string Message){
  float Number;

  do{
     cout << Message << endl;
     cin >> Number;
  }while(Number <= 0);

  return Number;
}


float TotalBillAfterServiceAndTax(float BillValue){

    BillValue = BillValue * 1.1 ;
    BillValue = BillValue * 1.16;

    return BillValue;
}


int main()
{
    float BillValue = ReadPositiveNumber("Please Enter Bill Value?");
    cout << "\nBill Value = " << BillValue <<endl;

    cout << "*****************************************************\n";
    float TotalBill = TotalBillAfterServiceAndTax(BillValue);
    cout << "Total Bill After Services Fee And Sales Tax = " << TotalBill << endl;

    return 0;
}
