#include <iostream>

// 📝 Problem: Read total sales 💰 from user  
// 🎯 Calculate commission % based on sales range 📊  
// ➗ Compute total commission earned 💵  
// 📤 Print both commission % and commission value ✅


using namespace std;

float ReadTotalSales(){
    float totalSales;

    cout << "Enter You Total Sales Value : " << endl;
    cin >> totalSales;

    return totalSales;
}

float GetComissionPercentage(float totalSales){

    if(totalSales >= 1000000){
        return 0.01;
    }else if(totalSales >= 500000){
        return 0.02;
    }else if(totalSales >= 100000){
       return 0.03;
    }else if(totalSales >= 50000){
      return 0.05;
    }else {
       return 0.00;
    }

}

float CalculateTotalComission(float totalSales){
  
  return GetComissionPercentage(totalSales)*totalSales;
  
}

int main()
{
    float totalSales = ReadTotalSales();
    cout << "\nComission Percentage = " << GetComissionPercentage(totalSales) * 100 <<"%" << endl;
    cout << "\nTotal Comission  = " << CalculateTotalComission(totalSales) <<endl;
    return 0;
}
