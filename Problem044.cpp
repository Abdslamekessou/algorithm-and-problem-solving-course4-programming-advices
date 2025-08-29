#include <iostream>

// 🗓️ Program asks the user to enter a day number (1–7) and shows the corresponding day of the week.  
// ⚠️ If the number is invalid, it displays an error message.  


using namespace std;

enum enDays {
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday ,
};



int ReadNumberInRange(string Message , int From , int  To){

  int Number = 0;

  do{
     cout << Message << endl;
     cin >> Number;
  }while(Number < From || Number > To);

  return Number;

}


enDays ReadDayOfWeek(){
  return (enDays) ReadNumberInRange("Please enter a day number (1 = Sunday, 2 = Monday, ..., 7 = Saturday): " , 1, 7) ;
}



string GetDayOfWeek(enDays Day){

   switch(Day){
     case enDays::Sunday:
         return "Sunday" ;
     case enDays::Monday :
         return "Monday";
     case enDays::Tuesday :
         return "Tuesday" ;
     case enDays::Wednesday :
         return "Wednesday";
     case enDays::Thursday:
          return "Thursday";
     case enDays::Friday:
          return "Friday";
     case enDays::Saturday :
          return "Saturday";
     default :
         return "Invalid Day!!";

   }
}


void PrintDayOfWeek(string Day){
   cout << "\nToday is : " << Day <<endl;
}



int main()
{
    PrintDayOfWeek(GetDayOfWeek(ReadDayOfWeek()));

    return 0;
}
