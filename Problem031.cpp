#include <iostream>
#include<cmath>

// 📝 Problem: Read a number 🔢 and calculate its power of 2️⃣, 3️⃣, and 4️⃣,  
// then display the results on the screen 📊.  


using namespace std;

int ReadNumber(){
    int number;
    
    cout << "Enter a Number : \n" <<endl;
    cin >> number;
    
    return number;
}


void PowerOf2_3_4(int Number){

    int PowerOf2 , PowerOf3 , PowerOf4;

    PowerOf2 = Number * Number;
    PowerOf3 = Number * Number * Number;
    PowerOf4 = Number * Number * Number * Number;

    cout << "Number " << Number << " in power of two is : " << PowerOf2 <<endl;
    cout << "Number " << Number << " in power of three is : " << PowerOf3 <<endl;
    cout << "Number " << Number << " in power of four is : " << PowerOf4 <<endl;
}

int main()
{
    PowerOf2_3_4(ReadNumber());
    
    return 0;

}
