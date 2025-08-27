#include <iostream>

// 📝 Problem: Read a grade percentage (0–100) 📊 and convert it into a letter grade 🎓  
// (A, B, C, D, E, or F) based on the standard grading scale.  


using namespace std;

int ReadNumberInRange(int From , int To){
    int Number;
    do{
        cout << "\nEnter a Number In Range Form "<< From << " To " << To << " : \n" <<endl;
        cin >> Number;
    }while(Number < From || Number > To);


    return Number;
}

char GetGradeLetter(int grade){

   if(grade >= 90){
         return 'A';
    }else if(grade >= 80){
        return 'B';
    }else if(grade >= 70){
        return 'C';
    }else if(grade >= 60){
        return 'D';
    }else if(grade >= 50){
       return 'E';
    }else{
      return 'F';
    }
}


int main()
{
    int Grade = ReadNumberInRange(0,100);
    cout << endl <<"Result = " << GetGradeLetter(Grade) <<endl;
    return 0;
}
