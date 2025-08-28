#include <iostream>
#include <string>

// 📝 Program keeps asking the user to enter numbers and adds them together
// ⛔ The loop stops when the user enters -99, then the total sum is displayed


using namespace std;

int readNumber(string Message){
    int Number;

     cout << Message<< endl;
     cin >> Number;

    return Number;
}

int SumUntilTerminator(){
    int Sum = 0 , Num = 0 , Counter = 0;
    
    do{
        Num = readNumber("Please enter number " + to_string(Counter+1) + " (-99 to quit) : " );
        Counter++;
        
        if(Num == -99){
            break;
        }

        sum += Num;
    }while(Num != -99);

    return Sum;
}

int main()
{
    int sumUtilTerminator = SumUntilTerminator();
    cout << "\nResult = " << sumUtilTerminator << endl;
    return 0;
}
