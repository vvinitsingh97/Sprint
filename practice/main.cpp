/* Filename	:	main.cpp
 *  This file has the implementation of all the function which are *  declared in calculator.h and defined in the calculator.cpp

 */



#include<iostream>
#include "calculator.h"

using namespace std;
int p,q;


void printmenu()
{
	cout << "=====================================================================================" << endl;
	cout << "===================================Simple Calculator ===================================\n\n \
		\t1. Find Small Number\n \
		\t2. Find Large Number\n \
		\t3. Add\n \
		\t4. Subtract\n \
		\t5. LogicalAND\n \
		\t6. LogicalOR\n \
		\t7. LogicalXOR\n \
		\t8. Exit\n\n";
	cout << "====================================================================================\n" << endl;


}
void result()
{
	cout << "Enter First Number: ";   
	cin >> p;
	cout << "Enter Second Number: ";  
	cin >> q;
}


int main()
{
	Calculator obj;
	int option;
	while(1)
	{
		printmenu();
		cin>>option;
		switch(option)
		{
			case 1:
				result();
				cout<<"Result is : " << obj.small() << endl;
				break;

			case 2:
				result();
				cout<<"Result is : " << obj.large() << endl;
				break;
			case 3:
				result();
				cout<<"Result is : " << obj.add() << endl;
				break;
			case 4:
				result();
				cout<<"Result is : " << obj.sub() << endl;
				break;
			case 5:
				result();
				cout<<"Result is : " << obj.logicalAND() << endl;
				break;

			case 6:
				result();
				cout<<"Result is : " << obj.logicalOR() << endl;
				break;
			case 7:
				result();
				cout<<"Result is : " << obj.logicalXOR() << endl;;
				break;
			case 8:
				exit(0);
		}
	}
	cout << "==================================== Thank You ====================================\n" << endl;
	return 0;
}




