#include <iostream>
#include <math.h>

/*
📝 Program should read the side and diagonal of a rectangle.  
📐 Calculate its area using the formula and display the result.
*/

using namespace std;

void ReadNumbers(float& A , float& D){
   cout << "Please enter rectangle side  A : " <<endl;
   cin >>  A ;

   cout << "Please enter rectangle Diagonal  D : " <<endl;
   cin >> D;

}

float CalculateRectangleAreaBySideAndDiagonal(float A , float D){
    return A * sqrt(pow(D , 2) - pow(A , 2));
}

void PrintResult(float Area){
    cout << "\nRectangle Area By Side And Diagonal = " << Area <<endl;
}

int main()
{   float A , D ;
    ReadNumbers(A,D);
    PrintResult(CalculateRectangleAreaBySideAndDiagonal(A,D));
    return 0;
}
