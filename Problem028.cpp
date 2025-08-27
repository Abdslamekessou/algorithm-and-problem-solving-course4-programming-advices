#include <iostream>

// 📝 Problem: Read a number 🔢 and calculate the sum of all odd numbers from 1 to N  
// using three different loops (while ⏳, do-while 🔄, and for 🔁).  


using namespace std;

enum enOddOrEven {Odd = 1 , Even = 2};

int ReadNumber(){
   int number;
   cout << "Please enter a number : \n";
   cin >> number;
   return number;
}

enOddOrEven CheckOddOrEven(int Number){

    if(Number % 2 != 0){
        return enOddOrEven::Odd;
    }else{
       return enOddOrEven::Even;
    }

}

int SumOddNumbersFrom1ToN_UsingWhile(int N){
    cout << "\n**Sum Of Odd Numbers Using While Loop**\n";
    int Counter = 1;
    int Sum = 0;

    while(Counter <= N){
       if(CheckOddOrEven(Counter) == enOddOrEven::Odd){
         Sum += Counter;
       }
       Counter++;
    }

    return Sum;
}

int SumOddNumbersFrom1ToN_UsingDoWhile(int N){

    cout << "\n**Sum Of Odd Numbers Using Do..While Loop**\n";
    int Counter = 1;
    int Sum = 0 ;

    do{
       if(CheckOddOrEven(Counter) == enOddOrEven::Odd){
         Sum += Counter;
       }
       Counter++;
    }while(Counter <= N);

    return Sum;
}

int SumOddNumbersFrom1ToN_UsingFor(int N){
    cout << "\n**Sum Of Odd Numbers Using For Loop**\n";

    int Sum = 0;

    for(int Counter = 1 ; Counter <= N ; Counter++){
        if(CheckOddOrEven(Counter) == enOddOrEven::Odd){
         Sum += Counter;
       }

    }
   return Sum;
}

int main()
{
    int N = ReadNumber();

    cout << SumOddNumbersFrom1ToN_UsingWhile(N) <<endl;
    cout << SumOddNumbersFrom1ToN_UsingDoWhile(N) <<endl;
    cout << SumOddNumbersFrom1ToN_UsingFor(N) << endl;

    return 0;
}
