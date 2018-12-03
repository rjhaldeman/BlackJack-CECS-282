#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

//Header file.
using namespace std;

class Account {
	
	//Function delcarations.
	public:
		Account();
		Account(int initialBalance);
		int getBalance();
		int setBalance(int i);
		void withdrawl(int i);
		void deposit(int i);
		
	//Instance Variables.
	private:
		
		int balance;
		int idNum;
		
	friend class Player;	

	
};

#endif
