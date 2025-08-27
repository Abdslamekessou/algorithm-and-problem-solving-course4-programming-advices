#include <iostream>

// 📝 Problem: Read a number 🔢 and print the range from 1 to N using three different loops
// (while ⏳, do-while 🔄, and for 🔁).

using namespace std;

int ReadNumber(){
   int number;
   cout << "Please enter a number : \n";
   cin >> number;
   return number;
}

void PrintRangeFrom1ToN_UsingWhile(int N){
    cout << "\n**Range Printed Using While Loop**\n";
    int Counter = 1;
    while(Counter <= N){
       cout << Counter <<endl;
       Counter++;
    }
}

void PrintRangeFrom1ToN_UsingDoWhile(int N){
    cout << "\n**Range Printed Using Do..While Loop**\n";
    int Counter = 1;
    do{
       cout << Counter <<endl;
       Counter++;
    }while(Counter <= N);
}

void PrintRangeFrom1ToN_UsingFor(int N){
    cout << "\n**Range Printed Using For Loop**\n";

    for(int Counter = 1 ; Counter <= N ; Counter++){
        cout << Counter <<endl;
    }
}

int main()
{
    int N = ReadNumber();

    PrintRangeFrom1ToN_UsingWhile(N);
    PrintRangeFrom1ToN_UsingDoWhile(N);
    PrintRangeFrom1ToN_UsingFor(N);

    return 0;
}
