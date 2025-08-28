#include <iostream>

// Program reads piggy bank content (pennies, nickels, dimes, quarters, dollars)  
// 💵 Then calculates and prints the total value in pennies and dollars  

using namespace std;

struct stPiggyBankContent{
    int Pennies , Nickels , Dime ,Quarters , Dollars ;
};

stPiggyBankContent ReadPiggyBankContent(){

     stPiggyBankContent PiggyBankContent;

    cout << "Please enter the total number Pennies : " <<endl;
    cin >> PiggyBankContent.Pennies;

    cout << "Please enter the total number Nickels : " <<endl;
    cin >> PiggyBankContent.Nickels;

    cout << "Please enter the total number Quarters : " <<endl;
    cin >> PiggyBankContent.Quarters;

    cout << "Please enter the total number Dime : " <<endl;
    cin >> PiggyBankContent.Dime;

    cout << "Please enter the total number Dollars : " <<endl;
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;

}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent){
  int totalPennies = 0;
  totalPennies = PiggyBankContent.Pennies + (PiggyBankContent.Nickels * 5) + (PiggyBankContent.Dime * 10) + (PiggyBankContent.Quarters * 25) + (PiggyBankContent.Dollars * 100);

  return totalPennies;
}



int main()
{
    float TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

    cout << "Total Pennies = " <<TotalPennies << endl;
    cout << "Total Dollars = " << (float) TotalPennies /100<<endl;

    return 0;
}
