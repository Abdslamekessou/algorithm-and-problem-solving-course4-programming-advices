#include <iostream>

// ⏱️ Program to read a positive number of hours  
// 🔄 Then convert it into days and weeks


using namespace std;


float ReadPositiveNumber(string Message){
  float Number;

  do{
     cout << Message << endl;
     cin >> Number;
  }while(Number <= 0);

  return Number;
}


float HoursToDays(float NumberOfHours){
    
  return (float) NumberOfHours / 24;
  
}


float HoursToWeeks(float NumberOfHours){
    
   return (float) NumberOfHours / 24 / 7;
   
}


float DaysToWeeks(float NumberOfDays){
    
   return (float) NumberOfDays / 7 ;
   
}


int main()
{
    float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours?");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << endl;
    cout << "Number Of Hours = " << NumberOfHours <<endl;
    cout << "Number Of Days = " << NumberOfDays << endl;
    cout << "Number Of Weeks = " << HoursToWeeks(NumberOfHours) << endl;


    return 0;
}
