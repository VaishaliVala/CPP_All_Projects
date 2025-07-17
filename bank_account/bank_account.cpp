 #include <iostream>
using namespace std;


class BankAccount{
    private:
        string accountName ;
        int accountNumber ;
        double balance;
    public:
        BankAccount(string accName, int accNum, double bal){
            accountName = accName;
            accountNumber = accNum;
            balance = bal ;
        }  

        void deposit(double amount){
            if(amount > 0){
                balance = balance + amount ;
                cout << "Your Deposite was Add Successfully..." << endl ;
            }else{
                cout << "Your Deposite is not Accessible... " << endl ;
            }
        }

        void withDraw(double amount){
            if(amount > 0 && amount <= balance){
                balance = balance - amount ;
                cout << "Your Amount Withdraw Successfully..." << endl ;
            }else{
                cout << "Your amount is invalid, Plese Check Your Amount ..." << endl ;
            }
        }

        void getBalance(){
            cout << "Your Current Balance is = " << balance << endl ;
        }

        void  displayAccInfo(){
            cout << "...... Your Account Details ......" << endl ;
            cout << "Account Holder Name = " << accountName << endl ;
            cout << "Account Number = " << accountNumber << endl ;
            cout << "Account Balance = " << balance << endl ; 
        }
};


class SavingAccount  :  public BankAccount{
    public:
    double interestRate;

    SavingAccount(string accName, int accNum, double bal) : BankAccount (accName, accNum, bal){
        interestRate = 10.0; 
    }
    void calcIntrestRate(int amount){
        double interest = amount * interestRate / 100 ;
        cout << "Interest of Amount "<< amount  << " on Interest "<< interestRate << " % is : " << interest << endl ;
    }

};

class CheckingAccount  : public BankAccount{
    public: 
    int overdraftLimit = -10000 ;

    CheckingAccount(string accName, int accNum, double bal)  : BankAccount(accName, accNum, bal) {

    }

    void checkOverdraft(double bal){
        if(bal < 0 && bal >= overdraftLimit){
            cout << "Overdraft Approve Successfully..." << endl;
        }else if(bal < 0){
            cout << "Overdraft limit exceeded!" << endl;
        }else{
            cout << endl ;
            cout << "No need for Overdraft." << endl ;
        }

    }
};

class FixedDepoAccount  :  public BankAccount{
    public:
    int term;

    FixedDepoAccount(string accName, int accNum, double bal)
        : BankAccount(accName, accNum, bal) {
            
    }
    void calcIntrestRate(double amount, double interestRate){
        cout << "Enter the term for Interest = " ;
        cin >> term ;
        double interest = amount * interestRate * term / 12 / 100 ;
        cout << "Interest for " << term << " months : " << interest << endl ;
    }
};


int main(){
    string accName;
    int accNum;
    double bal;

    cout << "Enter Your Account Name : " ;
    cin >> accName ;
    cout << "Enter Your Account Number : " ;
    cin >> accNum ;
    cout << "Enter Your Balance : " ;
    cin >> bal ;
    cout << endl ;


    BankAccount yourAcc(accName, accNum, bal);

    int choice;

    do{
        cout << "Choose Account type." << endl ;
        cout << "Enter 1 for create Saving Account. " << endl ;
		cout << "Enter 2 for create Checking Account. " << endl ;
		cout << "Enter 3 for create Fixed Deposite Account. " << endl ;
        cout << "Enter 0 for Exit. " << endl ;
        
		cout << endl << "Enter the Number Of Your choice = " ;
		cin >> choice ;

        if(choice == 1){
            cout << "Congratulations, Your Saving Account is Created...." << endl;
            cout << endl;

            SavingAccount saving(accName, accNum, bal);
            int sub_choice;
            do {
                cout << "Enter 1 for add Deposite. " << endl ;
                cout << "Enter 2 for withdraw Deposite. " << endl ;
                cout << "Enter 3 for Get balance. " << endl ;
                cout << "Enter 4 for display account informations. " << endl ;
                cout << "Enter 5 for calculate intrest. " << endl;
                cout << "Enter 0 for Exit. " << endl ;
        
                cout << endl << "Enter the Number Of Your choice = " ;
                cin >> sub_choice ;

                double amount;
                switch (sub_choice){
                    case 1:
                    cout << "Enter deposit amount: ";
                        cin >> amount;
                        saving.deposit(amount) ;
                        break;
                    case 2:
                        cout << "Enter withdraw amount: ";
                        cin >> amount;
                        saving.withDraw(amount);
                        break ;
                    case 3:
                        saving.getBalance();
                        break;
                    case 4:
                        saving.displayAccInfo() ;
                        break;
                    case 5:
                        cout << "Enter amount to calculate interest on: ";
                        cin >> amount;
                        saving.calcIntrestRate(amount);
                        break ;
                }
        
            } while (sub_choice != 0);
    } else if(choice == 2){
        cout << "Congratulations, Your Checking Account is Created...." << endl;
        cout << endl;

        CheckingAccount checking(accName, accNum, bal);

         int sub_choice;
            do {
                cout << "Enter 1 for add Deposite. " << endl ;
                cout << "Enter 2 for withdraw Deposite. " << endl ;
                cout << "Enter 3 for Get balance. " << endl ;
                cout << "Enter 4 for display account informations. " << endl ;
                cout << "Enter 5 for Overdraft." << endl ;
                cout << "Enter 0 for Exit. " << endl ;
        
                cout << endl << "Enter the Number Of Your choice = " ;
                cin >> sub_choice ;

                double amount;
                switch (sub_choice){
                    case 1:
                    cout << "Enter deposit amount: ";
                        cin >> amount;
                        checking.deposit(amount);
                        break;
                    case 2:
                        cout << "Enter withdraw amount: ";
                        cin >> amount;
                        checking.withDraw(amount);
                        break;
                    case 3:
                        checking.getBalance();
                        break ;
                    case 4:
                        checking.displayAccInfo();
                        break ;
                    case 5:
                        cout << "Enter amount for overdraft: ";
                        cin >> amount;
                        bal = bal-amount;
                        checking.checkOverdraft(bal);
                        break;
                }
        
            } while (sub_choice != 0);

    } else if (choice == 3) {
            cout << "Congratulations, Your Fixed Deposite Account is Created...." << endl;
            cout << endl;

            FixedDepoAccount fixed(accName, accNum, bal);

        int sub_choice, rate;
            do {
                cout << "Enter 1 for add Deposite. " << endl ;
                cout << "Enter 2 for withdraw Deposite. " << endl ;
                cout << "Enter 3 for Get balance. " << endl ;
                cout << "Enter 4 for display account informations. " << endl ;
                cout << "Enter 5 for Calculate Interest." << endl ;
                cout << "Enter 0 for Exit. " << endl ;
        
                cout << endl << "Enter the Number Of Your choice = " ;
                cin >> sub_choice ;

                double amount;
                switch (sub_choice){
                    case 1:
                    cout << "Enter deposit amount: ";
                        cin >> amount;
                        fixed.deposit(amount);
                        break;
                    case 2:
                        cout << "Enter withdraw amount: ";
                        cin >> amount;
                        fixed.withDraw(amount);
                        break;
                    case 3:
                        fixed.getBalance();
                        break ;
                    case 4:
                        fixed.displayAccInfo();
                        break ;
                    case 5:
                        cout << "Enter amount to calculate interest on: ";
                        cin >> amount;
                        cout << "Enter annual interest rate : ";
                        cin >> rate;
                        fixed.calcIntrestRate(amount, rate);
                        break ;
                }
        
            } while (sub_choice != 0);
    } else if (choice != 0) {
            cout << "Invalid choice. Please try again." << endl;
    }

    }while(choice != 0);



    return 0;
}