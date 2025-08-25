#include <iostream>
#include <math.h>

/*
📝 Program should read the base and height of a triangle.  
📐 Calculate its area using the formula: Area = (base * height) / 2.
*/

using namespace std;

void ReadNumbers(float& A , float& H){
   cout << "Please enter Triangle base  A : " <<endl;
   cin >>  A ;

   cout << "Please enter Triangle Height H : " <<endl;
   cin >> H;

}

float TriangleArea(float A , float H){
    return (A * H)/ 2;
}

void PrintResult(float Area){
    cout << "\nTriangle Area By Side And Height = " << Area <<endl;
}

int main()
{   float A , H ;
    ReadNumbers(A,H);
    PrintResult(TriangleArea(A,H));
    return 0;
}
