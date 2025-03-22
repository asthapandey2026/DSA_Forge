//Banking system including-> account details, show balance, withdraw, deposit and exit

#include<iostream>
#include<string>
using namespace std;

class bank{
	int password=1234;
	long long accno=987654321987;
	double balance=100000.00;
	string holder="Ansh Chaurasiya";
	
public:
	void options(){
		int op;
		cout<<"\n\n-----------------------------Welcome to MyBank---------------------------";
		cout<<"\n1. Check Account Details\n";
		cout<<"2. Check Balance\n";
		cout<<"3. Withdraw Amount\n";
		cout<<"4. Deposit Amount\n";
		cout<<"5. Exit\n";
		cout<<"\nEnter Your Choice: ";
		cin>>op;
		switch (op){
			case 1:
				accdetails();
			break;
			case 2:
				show_bal();
				break;
			case 3:
				withdraw();
				break;
			case 4:
				deposit();
				break;
			case 5:
				cout<<"\nThankyou for your visit!";
				break;
			default:
				cout<<"\nInvalid choice! Try again";
				options();
		}

    }
    int accdetails(){
	if(checkpass()){
    	cout<<"\nAccount Holder: "<<holder<<"\nAccount Number: "<<accno;
		options();
    } else { cout<<"Access denied! Invalid Password!";}
	}
	
	void show_bal(){
	if(checkpass()){
		cout<<"\nAccount Balance: "<<balance;
		options();
    } else { cout<<"Access denied! Invalid Password!";}
	}
	
	int withdraw(){
	if(checkpass()){
		int wam;
		cout<<"Enter amount to withdraw: ";
		cin>>wam;
		*(&balance)-=wam;
		cout<<"\nMoney debited from account XXXXXXXX1987: "<<wam;
		cout<<"\nAccount Balance: "<<*(&balance);
		options();
    } else { cout<<"Access denied! Invalid Password!";}
	}
	
	void deposit(){
	if(checkpass()){
		int dam;
		cout<<"Enter amount to deposit: ";
		cin>>dam;
		*(&balance)+=dam;
		cout<<"\nMoney deposited from account XXXXXXXX1987: "<<dam;
		cout<<"\nAccount Balance: "<<*(&balance);
		options();
    } else { cout<<"Access denied! Invalid Password!";}
	}

	bool checkpass(){
		int p;
		cout<<"Enter password: ";
		cin>>p;
		return p==password;
	}
};
int main(){
	bank b;
	b.options();
}
