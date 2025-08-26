#include <iostream>
#include <math.h>

// 📝 Problem: Calculate the area of the circle ⭕ described around an arbitrary triangle 🔺  


using namespace std;

void ReadTriangleData(float& SideA ,float& SideB ,float& SideC){

   cout << "Please enter triangle side A : " <<endl;
   cin >> SideA;

   cout << "Please enter triangle side B : " <<endl;
   cin >> SideB;

   cout << "Please enter triangle side C : " <<endl;
   cin >> SideC;

}



float CircleAreaByATriangle(float SideA ,float SideB ,float SideC){
    float Area , T ,p;
    
    p = (SideA + SideB + SideC) / 2 ;
    T = (SideA * SideB * SideC) / (4* sqrt( p * (p - SideA)* (p - SideB) * (p - SideC)));
    
    Area = M_PI * pow(T,2);
    return Area;
}

void PrintResult(float Area){
    cout << "\nCircle Area = " << Area <<endl;
}

int main()
{
    float SideA , SideB , SideC;
    ReadTriangleData(SideA , SideB , SideC);
    PrintResult(CircleAreaByATriangle(SideA , SideB , SideC));
    return 0;
}
