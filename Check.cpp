//Jim Vargas
#include <iostream>
#include <stdlib.h>
using namespace std;

void check();
int main()
{
	check();

	cout << "Main is successful" << endl;
	return 0;
}

void check()
{
	cout << "Do You want to continue?" << endl;
	cout << endl;
	cout << "Enter [1] to continue. Entering anything else will terminate the program."
	<< endl;
	int response;
	cin >> response;
	if (response != 1)
	{
		cin.clear();
		cout << "Quitting..." << endl;
		exit(1);
	}else
	{
		int main();
	}
}
