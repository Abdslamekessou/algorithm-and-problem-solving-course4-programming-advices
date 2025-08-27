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
    cout << "\n**Print Range Using While Loop**\n";
    int i = 1;
    while(i <= N){
       cout << i <<endl;
       i++;
    }
}

void PrintRangeFrom1ToN_UsingDoWhile(int N){
    cout << "\n**Print Range Using Do While Loop**\n";
    int i = 1;
    do{
       cout << i <<endl;
       i++;
    }while(i <= N);
}

void PrintRangeFrom1ToN_UsingFor(int N){
    cout << "\n**Print Range Using For Loop**\n";
    int i = 1;
    for(int i = 1 ; i<= N ; i++){
        cout << i <<endl;
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
