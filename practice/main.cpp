/* Filename	:	main.cpp
 *  This file has the implementation of all the function which are *  declared in calculator.h and defined in the calculator.cpp

 */



#include<iostream>
#include "calculator.h"

using namespace std;
int a,b;

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
	cin >> a;
	cout << "Enter Second Number: ";  
	cin >> b;
}


int main()
{
	Calculator obj;
	int option;
	while(1)
	{
		printmenu();
		cout<<"Enter your choice : ";
		cin>>option;
		switch(option)
		{
			case 1:
				result();
				cout<<"Result is : " << obj.small(a,b) << endl;
				break;

			case 2:
				result();
				cout<<"Result is : " << obj.large(a,b) << endl;
				break;
			case 3:
				result();
				cout<<"Result is : " << obj.add(a,b) << endl;
				break;
			case 4:
				result();
				cout<<"Result is : " << obj.sub(a,b) << endl;
				break;
			case 5:
				result();
				cout<<"Result is : " << obj.logicalAND(a,b) << endl;
				break;

			case 6:
				result();
				cout<<"Result is : " << obj.logicalOR(a,b) << endl;
				break;
			case 7:
				result();
				cout<<"Result is : " << obj.logicalXOR(a,b) << endl;;
				break;
			case 8:
				exit(0);
		}
	}
	cout << "==================================== Thank You ====================================\n" << endl;
	return 0;
}:
