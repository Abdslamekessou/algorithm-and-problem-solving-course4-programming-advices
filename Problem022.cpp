#include <iostream>
#include <math.h>

// ✍️ This program is to calculate the area of a circle inscribed in an isosceles triangle  
// 🔺 The user enters the equal side length and the base, then the circle’s area is displayed  

using namespace std;

void ReadTriangleData(float& EqualSideLength ,float& Base){

   cout << "Please enter triangle equal side length: " <<endl;
   cin >> EqualSideLength;

   cout << "Please enter base : " <<endl;
   cin >> Base;

}



float CircleAreaByITriangle(float EqualSideLength , float Base){
    float Area ;
    Area =  M_PI * (pow(Base , 2)/ 4) * ((2 * EqualSideLength - Base)/(2 * EqualSideLength + Base));
    return Area;
}

void PrintResult(float Area){
    cout << "\nCircle Area = " << Area <<endl;
}

int main()
{
    float EqualSideLength ,Base;
    ReadTriangleData(EqualSideLength , Base);
    PrintResult(CircleAreaByITriangle(EqualSideLength , Base));
    return 0;
}
