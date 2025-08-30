#include <iostream>

// 🌙 Ask the user to enter a month number (1-12)
// 📅 Then print the corresponding month name


using namespace std;

enum enMonthes {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};


int ReadNumberInRange(string Message , int From , int  To){

  int Number = 0;

  do{
     cout << Message << endl;
     cin >> Number;
  }while(Number < From || Number > To);

  return Number;

}


enMonthes ReadMonth(){
    return (enMonthes) ReadNumberInRange("Please Enter Month Number (1 = January, 2 = February, ..., 12 = December): " , 1, 12);
}


string GetMonthName(enMonthes Month){

    switch(Month){
      case enMonthes::January:
         return "Janurary";
      case enMonthes::February:
        return "February";
      case enMonthes::March:
        return "March";
      case enMonthes::April:
         return "April";
      case enMonthes::May:
         return "May";
      case enMonthes::June:
         return "June";
      case enMonthes::July:
         return "July";
      case enMonthes::August:
         return "August";
      case enMonthes::September:
         return "September";
      case enMonthes::October:
         return "October";
      case enMonthes::November:
         return "November";
      case enMonthes::December:
         return "December";
      default :
        return "Invalid Month!!";
    }
}


void PrintMonthName(string Month){
  cout << "\nMonth = " << Month <<endl;
}



int main()
{
    PrintMonthName(GetMonthName(ReadMonth()));
    return 0;
}
