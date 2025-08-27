#include <iostream>

// 📝 Problem: Read a number 🔢 and a power 〽️, then calculate Number^Power using a loop,
// and print the result on the screen 📊.

using namespace std;

int ReadNumber(){
    int Number;

    cout << "\nEnter a Number : \n" <<endl;
    cin >> Number;

    return Number;
}


int ReadPower(){
    
    int Power;

    cout << "\nEnter a Power : \n" <<endl;
    cin >> Power;

    return Power;
}


int PowerOfM(int Number , int M){
    
     int powerOfM = 1 ;

     if(M == 0){
        //Any number powered to zero gives 1
        return 1;
     }

      for(int Counter = 0 ; Counter < M ; Counter++ ){

        powerOfM = powerOfM * Number;
      }

     return powerOfM;
}



int main()
{
    int powerOfM = PowerOfM(ReadNumber() , ReadPower());

    cout << endl <<"Result = " << powerOfM << endl;
    return 0;
}
