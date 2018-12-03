#include <iostream>
#include <cmath>
#include "Account.h"

using namespace std;

Account :: Account()
{
	balance = 100;
}

Account :: Account(int initialBalance)
{
	balance = initialBalance;
}

int Account :: getBalance()
{
	return balance;
}

int Account :: setBalance(int i)
{
	balance = i;
}

void Account :: withdrawl(int i)
{
	balance -= i;
}

void Account :: deposit(int i)
{
	balance += i;
}
