#include<bits/stdc++.h>
using namespace std;

class Bank_Account {
private:
    string account_no;
    string holderName;
    double balance;

public:
    void deposit(double amount) {

        balance += amount;
    }

    void withdraw(double amount) {

        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance" << endl;
    }

    double getBalance() {
        return balance;
    }

    void setData(string a, string h, double b) {
        account_no = a;
        holderName = h;
        balance = b;
    }

    void display() {
        cout << "Account No : " << account_no << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance    : " << balance << endl;
    }
};

int main() {
    Bank_Account obj;
    
    cout<<"\n1.Deposit\n"<<"\n2.Withdraw\n"<<"\n3.Acount Balance\n"<<"\n4.Account info\n";
    
    int choice;
    cout<<"Choose one of the content:"<<endl;
    cin>>choice;
    
    switch(choice){
    	
    	case 1:
    		double depositAmount;
    		cout<<"Enter the amount to deposit:"<<endl;
    		cin>>depositAmount;
    		obj.deposit(depositAmount);
    		break;
    		
    	case 2:
    		cout<<"Enter the Withdraw amount"<<endl;
    		double amt;
    		cin>>amt;
    		obj.withdraw(amt);
    		break;
    		
    	case 3:
    		cout<<"Account Details Section"<<endl;
    		cout<<obj.getBalance();
    		break;
    		
    		
    	case 4:
    		cout<<"Account no:"<<endl;
    		string ac_no;
    		getline(cin,ac_no);
    		
    		cout<<"Account holder name:"<<endl;
    		string name;
    		getline(cin,name);
    		
    		cout<<"balance:"<<endl;
    		double bal;
    		cin>>bal;
    		
    		obj.setData(ac_no,name,bal);
    		obj.display();
    		
	}
    
    
    
    

   /*** obj.setData("23AG1A6766", "AdithyKumar", 25000.00);
    obj.display();

    obj.deposit(5000);
    obj.withdraw(3000);

    cout << "Final Balance: " << obj.getBalance() << endl;
    **/

    return 0;
}

