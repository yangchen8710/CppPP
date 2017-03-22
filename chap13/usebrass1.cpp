#include <iostream>
#include "brass.h"
int main()
{
	using std::cout;
	using std::endl;

	Brass Piggy("Porcelot Pigg", 381299, 4000.0);
	BrassPlus Hoogy("Horatio Hoog", 382288, 3000.0);
	Piggy.ViewAcct();
	cout << endl;
	Hoogy.ViewAcct();
	cout << "Depositing $1000 into the Hoog Account:\n";
	Hoogy.Deposit(1000.00);
	cout << "New balance: $" << Hoogy.Balance() << endl;
	cout << "Withdrawing $4200 from the Pigg Account:\n";
	Piggy.Withdraw(4200.00);
	cout << "Piggy account balance: $" << Piggy.Balance() << endl;
	cout << "Withdrawing $4200 from the Hoog Account:\n";
	Hoogy.Withdraw(4200.00);
	Hoogy.ViewAcct();
	return 0;
}