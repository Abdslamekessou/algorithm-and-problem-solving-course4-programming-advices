#include <iostream>

// 🔑 Program asks the user to enter a PIN code for login  
// 🔄 Keeps looping until the correct PIN is entered, then shows the balance  


using namespace std;


string ReadPinCode(){

    string PinCode ;

    cout << "Please enter pin code? " << endl;
    cin >> PinCode;

    return PinCode;

}



bool Login(){

   string PinCode;

   do{

     PinCode = ReadPinCode();

     if(PinCode == "1234"){
        return 1;

     }else{

        cout <<"\nWrong Pin\n" <<endl;
        system("color 4F");

     }
   }while(PinCode != "1234");

   return 0; 
}



int main()
{
    if(Login()){
        cout <<"\nBalance = " << 7500 <<endl;
        system("color 2F");
    }

    return 0;
}
