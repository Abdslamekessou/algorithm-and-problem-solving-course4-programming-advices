#include <iostream>
#include <math.h>

// 📐 This program calculates the area of a circle inscribed in a square.
// 🟦 The user enters the side of the square, then the circle’s area is printed.


using namespace std;

float ReadSquareSide(){
   float SquareSide;
   cout << "Please enter square side  : " <<endl;
   cin >> SquareSide;
   return SquareSide ;
}

float CircleAreaInscribedInSquare(float SquareSide){
    float Area ;
    Area = (M_PI * pow(SquareSide , 2) ) / 4;
    return Area;
}

void PrintResult(float Area){
    cout << "\nCircle Area = " << Area <<endl;
}

int main()
{
    PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));
    return 0;
}
