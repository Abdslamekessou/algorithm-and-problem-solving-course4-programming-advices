#include <iostream>
#include <math.h>

/*
📝 Program should read the radius of a circle.
⚪ Calculate its area using the formula: Area = π * r² and display the result.
*/

using namespace std;

float ReadRadius(){
    float Radius;
   cout << "Please enter circle radius : " <<endl;
   cin >>  Radius ;
   return Radius;
}

float CircleArea(float Radius){
    return M_PI * pow(Radius , 2);
}

void PrintResult(float Area){
    cout << "\nCircle Area = " << Area <<endl;
}

int main()
{
    PrintResult(CircleArea(ReadRadius()));
    return 0;
}

