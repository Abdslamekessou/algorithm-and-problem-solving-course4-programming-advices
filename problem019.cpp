#include <iostream>
#include <math.h>

// ✍️ Write a program that asks the user to enter the diameter of a circle  
// 🔵 Then calculate and print the circle’s area using the formula (π × d²) / 4  

using namespace std;

float ReadDiameter(){
    float Diameter;
   cout << "Please enter circle diameter : " <<endl;
   cin >>  Diameter ;
   return Diameter;
}

float CircleAreaByDiameter(float Diameter){
    float Area ;
    Area = (M_PI * pow(Diameter , 2) ) / 4;
    return Area;
}

void PrintResult(float Area){
    cout << "\nCircle Area = " << Area <<endl;
}

int main()
{
    PrintResult(CircleAreaByDiameter(ReadDiameter()));
    return 0;
}
