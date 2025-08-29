#include <iostream>

// ⏳ Program to read a task duration in days, hours, minutes, and seconds  
// 🔢 Then calculate the total duration in seconds


using namespace std;


struct stTaskDuration{
  int NumberOfDays , NumberOfHours , NumberOfMinutes , NumberOfSecondes;
};


int ReadPositiveNumber(string Message){

  int Number;

  do{
     cout << Message << endl;
     cin >> Number;
  }while(Number <= 0);

  return Number;

}



stTaskDuration ReadTaskDuration(){

    stTaskDuration strTaskDuration;

    strTaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days : ");
    strTaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours : ");
    strTaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes : ");
    strTaskDuration.NumberOfSecondes = ReadPositiveNumber("Please Enter Number Of Secondes : ");

    return strTaskDuration;

}



int TaskDurationInSecondes(stTaskDuration strTaskDuration){

   int DurationInSecondes = 0;

   DurationInSecondes = strTaskDuration.NumberOfDays * 24 * 60 * 60;
   DurationInSecondes += strTaskDuration.NumberOfHours * 60 * 60;
   DurationInSecondes += strTaskDuration.NumberOfMinutes * 60;
   DurationInSecondes += strTaskDuration.NumberOfSecondes;

   return DurationInSecondes;

}


int main()
{
    int taskDurationInSecondes = TaskDurationInSecondes(ReadTaskDuration());

    cout << "\nTask Duration In Secondes = " << taskDurationInSecondes << endl;
    cout << endl;
    return 0;
}
