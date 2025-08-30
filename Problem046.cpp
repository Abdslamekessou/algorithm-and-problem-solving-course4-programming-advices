#include <iostream>

// 🔤 Program to print all uppercase letters from A to Z 
// 🖨️ Uses ASCII codes (65–90) and prints each letter on a new line


using namespace std;

void PrintLettersAtoZ(){
  for(int i = 65 ; i <= 90 ; i++){
    cout << char(i) <<endl;
  }
}


int main()
{
  
    printLettersAtoZ();
    
    return 0;
}
