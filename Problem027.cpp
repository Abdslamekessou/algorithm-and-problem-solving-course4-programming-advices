#include <iostream>

// 📝 Problem: Read a number 🔢 and print the range from N to 1 using three different loops
// (while ⏳, do-while 🔄, and for 🔁).

using namespace std;


int ReadNumber(){
   int number;
   cout << "Please enter a number : \n";
   cin >> number;
   return number;
}

void PrintRangeFromNTo1_UsingWhile(int N){
    cout << "\n**Range Printed Using While Loop**\n";
    int Counter = N;
    while(Counter >= 1){
       cout << Counter <<endl;
       Counter--;
    }
}

void PrintRangeFromNTo1_UsingDoWhile(int N){
    cout << "\n**Range Printed Using Do..While Loop**\n";
    int Counter = N;
    do{
       cout << Counter <<endl;
       Counter--;
    }while(Counter >= 1);
}

void PrintRangeFromNTo1_UsingFor(int N){
    cout << "\n**Range Printed Using For Loop**\n";

    for(int Counter = N ; Counter >= 1 ; Counter--){
        cout << Counter <<endl;
    }
}

int main()
{
    int N = ReadNumber();

    PrintRangeFromNTo1_UsingWhile(N);
    PrintRangeFromNTo1_UsingDoWhile(N);
    PrintRangeFromNTo1_UsingFor(N);

    return 0;
}
