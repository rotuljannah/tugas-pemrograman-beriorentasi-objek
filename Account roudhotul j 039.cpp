#include<iostream>
#include <string>
using namespace std;

class Account
{
	public:
		Account(int);
	void credit(int);
	void debit(int);
	int getAccountBalance();

 	private:
	int accountBalance;
};

Account::Account( int balance)
{
	if(balance>=0)
		accountBalance=balance;
	else
	{
		accountBalance=0;
		cout<<"Saldo awal tidak valid"<<endl;
	}
}

void Account::credit( int balance) {
	accountBalance = accountBalance - balance;
}
void Account::debit( int balance) {
	if(accountBalance>=balance)
	{
		accountBalance = accountBalance + balance;
	}
	else
	{
		cout<<"Debit amount exceeded account balance."<<endl;
	}
}

int Account::getAccountBalance() {
	return accountBalance;
}

int main()
{
	cout << "\t\t\t Account " <<endl <<endl;

	cout << endl;
	Account Account1(30000);
	Account Account2(10000);
	cout << "SALDO PERTAMA ACCOUNT 1 : Rp. "<< Account1.getAccountBalance() <<",-" <<endl;
	cout << "SALDO PERTAMA ACCOUNT 2 : Rp. "<< Account2.getAccountBalance() <<",-" <<endl;
	cout << endl;
	cout << "-----------------------------------------------------------------------------------" <<endl;

	cout << endl;
	Account1.credit(4000);
	Account2.credit(1000);
	cout << "CREDIT ACCOUNT 1 : Rp. 4000 ,-" << endl;
	cout << "CREDIT ACCOUNT 2 : Rp. 1000 ,-" << endl;

	cout <<endl << "SETELAH CREDIT :" << endl <<endl;
	cout << "SALDO ACCOUNT 1 : Rp. "<< Account1.getAccountBalance() <<",-" <<endl;
	cout << "SALDO ACCOUNT 2 : Rp. "<< Account2.getAccountBalance() <<",-" <<endl;
	cout << endl;
	cout << "-----------------------------------------------------------------------------------" <<endl;

	cout << endl;
	Account1.debit(3000);
	Account2.debit(2000);
	cout << "DEBIT ACCOUNT 1 : Rp. 3000 ,-" << endl;
	cout << "DEBIT ACCOUNT 2 : Rp. 2000 ,-" << endl;

	cout <<endl << "SETELAH DEBIT :" << endl <<endl;
	cout << "SALDO AKHIR ACCOUNT 1 : Rp. "<< Account1.getAccountBalance() <<",-"<< endl;
	cout << "SALDO AKHIR ACCOUNT 2 : Rp. "<< Account2.getAccountBalance() <<",-"<< endl;
	cout << "-----------------------------------------------------------------------------------" <<endl;
}
