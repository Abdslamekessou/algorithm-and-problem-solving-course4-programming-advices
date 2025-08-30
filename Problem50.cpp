#include <iostream>

// 🔑 Program simulates ATM login with a PIN code  
// ⏳ User has 3 attempts, otherwise the card gets locked  

using namespace std;


string ReadPinCode(){

    string PinCode ;

    cout << "Please enter pin code? " << endl;
    cin >> PinCode;

    return PinCode;

}


bool Login(){
   string PinCode;
   int Counter = 3;

   do{
       PinCode = ReadPinCode();
       Counter--;

        if(PinCode == "1234"){

            return 1;

        }else{

            system("color 4F"); //turn screen to red
            cout<< "\nWrong Pin You have " << Counter << " tries \n" <<endl;
        }


   }while(PinCode != "1234" && Counter >= 1);

   return 0;

}



int main()
{
    if(Login()){
        cout <<"\nBalance = " << 7500 <<endl;
        system("color 2F"); //turn screen to green
    }else{
      cout << "\nYour Card Is Locked In !! Call The Bank For Help" <<endl;
    }
    return 0;
}
