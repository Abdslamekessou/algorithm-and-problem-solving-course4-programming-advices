#include <iostream>
#include <math.h>

// ⏱️ Program to read a positive number of seconds  
// 🔄 Then convert it into days, hours, minutes, and seconds

using namespace std;


struct stTaskDuration{
  int NumberOfDays , NumberOfHours , NumberOfMinutes , NumberOfSecondes;
};



int ReadPositiveNumber(string Message){

  int Number = 0;

  do{
     cout << Message << endl;
     cin >> Number;
  }while(Number <= 0);

  return Number;

}



stTaskDuration SecondesToTaskDuration(int TotalSecondes){

  stTaskDuration TaskDuration;

  const int SecondesPerDays = 24 * 60 * 60;
  const int SecondesPerHours = 60 * 60;
  const int SecondesPerMinutes = 60;

  int Remainder = 0;

  TaskDuration.NumberOfDays = floor(TotalSecondes / SecondesPerDays);
  Remainder = TotalSecondes % SecondesPerDays;

  TaskDuration.NumberOfHours = floor(Remainder / SecondesPerHours);
  Remainder = Remainder % SecondesPerHours;

  TaskDuration.NumberOfMinutes = floor(Remainder / SecondesPerMinutes);
  Remainder = Remainder % SecondesPerMinutes;

  TaskDuration.NumberOfSecondes = Remainder;

  return TaskDuration;

}


void PrintTaskDurationDetails(stTaskDuration TaskDuration){

   cout << TaskDuration.NumberOfDays << " : " << TaskDuration.NumberOfHours << " : "
        << TaskDuration.NumberOfMinutes << " : " << TaskDuration.NumberOfSecondes <<endl;

}



int main()
{
    
    PrintTaskDurationDetails(SecondesToTaskDuration(ReadPositiveNumber("Please Enter Number Of Secondes? ")));

    return 0;
}
