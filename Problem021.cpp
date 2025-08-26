#include <iostream>
#include <math.h>

// ✍️ This program is to calculate the area of a circle using its circumference  
// 🔵 The user enters the circumference, then the program prints the circle’s area  

using namespace std;

float ReadCircumference(){
   float Circumference;
   cout << "Please enter circle circumference : " <<endl;
   cin >> Circumference;
   return Circumference ;
}

float CircleAreaByCircumference(float Circumference){
    float Area ;
    Area =  pow(Circumference , 2) / (4 * M_PI);
    return Area;
}

void PrintResult(float Area){
    cout << "\nCircle Area = " << Area <<endl;
}

int main()
{
    PrintResult(CircleAreaByCircumference(ReadCircumference()));
    return 0;
}
