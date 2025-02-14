#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;


void authenticate(int pin) {
    bool outOfAttempts = false;

    for(int attempts = 0; attempts < 3; attempts++) {
        cout << "Please input your 4-digit PIN: ";
        cin >> pin;

        if (pin == 5802) {
                    cout << "You are signed in ! Press enter to continue." << endl;            
            return; 
        } else {
            cout << "Incorrect PIN, try again" << endl;
        }
        
    }

    outOfAttempts = true;
    cout << "You are out of attempts" << endl;
    exit(152);
}


    int main() {

        authenticate(5802);

        cin.get();
        cin.get();

        for (int i = 0; i < 1000; i++)
        {





                    
    cout << "Enter a number" << endl;
    cout << "1.Balance 2.Withdrawing 3.depositing or type 0 cancel "<< endl;
    int Money = 1000;
    ifstream file("Balance.txt");
    file >> Money;
    file.close();
    int Check;
    cin >> Check;






    if (Check==1)
    {
    cout << Money << endl;
    }



if (Money < 0)
{
    cout << "You have insufficient funds" << endl;
    cout << "You cannot withdraw only deposit " << endl;

}


    if (Money > 0)
    {
        if (Check==2)
        {
        int wthd;
        cout << "Type the amount you want to withdraw" << endl;
        cin >> wthd;
        int Withdrawn_money = Money - wthd;
        int Money = Withdrawn_money; 
        ofstream file("Balance.txt");
        file << Money;
        file.close();
        cout <<"Your balance is now  " << Money << endl;
        }
    
    }
    else
    {
            cout << "You do not have enough money to withdraw ! " << endl;
            int yon;
            int insuff;
            cout << "do you wish to deposit ? 1. yes 2. no" << endl;
            cin >> yon;
            if (yon == 1 )
            {
                cout << "How much ? " << endl;
                int moredepo;
                cin >> moredepo;
                int Sum = Money + moredepo;
                int Mon = Sum;
                int Money = Mon;
                ofstream file("Balance.txt");
                file << Money;
                file.close();
            }
            if (yon == 0)
            {
                cout << " you have entered no ! ";
            }
            return 0;

    }
    
    
   




    if (Check==3)
    {
        int deposit;
        cout << "Type the amount you want to deposit" << endl;
        cin >> deposit;
        int Deposited_money = Money + deposit;
        int Money = Deposited_money;
        ofstream file("Balance.txt");
        file << Money;
        file.close();  
        cout << "Your Balance is now  " << Money << endl;
    }




    else if (Check==0)
    {
        return 0;
    }
    
    
    
        }

    return 0;
}


