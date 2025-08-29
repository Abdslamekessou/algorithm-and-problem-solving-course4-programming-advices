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

    stTaskDuration TaskDuration;

    TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days : ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours : ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes : ");
    TaskDuration.NumberOfSecondes = ReadPositiveNumber("Please Enter Number Of Secondes : ");

    return TaskDuration;

}



int TaskDurationInSecondes(stTaskDuration TaskDuration){

   int DurationInSecondes = 0;

   DurationInSecondes = TaskDuration.NumberOfDays * 24 * 60 * 60;
   DurationInSecondes += TaskDuration.NumberOfHours * 60 * 60;
   DurationInSecondes += TaskDuration.NumberOfMinutes * 60;
   DurationInSecondes += TaskDuration.NumberOfSecondes;

   return DurationInSecondes;

}


int main()
{
    int taskDurationInSecondes = TaskDurationInSecondes(ReadTaskDuration());

    cout << "\nTask Duration In Secondes = " << taskDurationInSecondes << endl;
    cout << endl;
    return 0;
}
