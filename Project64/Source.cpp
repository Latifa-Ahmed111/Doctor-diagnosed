#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void exit();
void login();
void registreation();


int main()
{
		
	int c;
	cout << "\t\t\t*******************************************\n\n";
	cout << "\t\t\t              WELCOME TO THE MENU PAGE!!   \n\n\n ";
	cout << "\t\t\t **********************MENU*************************\n\n";
	cout << " \t\tpress 1 to LOGIN " << endl;
	cout << " \t\tpress 2 to REGISTRATION " << endl;
	cout << " \t\tpress 3 to FORGET YOUR PASSWARD   " << endl;
	cout << " \t\tpress 4 to EXIT" << endl;
	cout << "ENTERE YOUR CHOICE PLEASE " << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		system("cls");
		login();

		break;
	case 2:
		system("cls");
		registreation();

		break;

	case 4:
		void exit();

		break;
	default:
		system("cls");
		cout << "\n\n\n\n\n";
		cout << "PLEASE ENTERE ONE OF ABBOVE OPTIONS\n\n\n\n\n" << endl;
		main();
	}
}
void login()
{


	bool x = false;
	string userid, passward, id, pass;
	system("cls");
	cout << "PLEASE ENTERE YOUR USERNAME AND YOUR PASSWORD" << endl;
	cout << " USERNAME: " << endl;
	cin >> userid;
	cout << " PASSWORD: " << endl;
	cin >> passward;

	ifstream input;
	input.open("desease .txt");

	while (input >> id >> pass)
	{
		if (userid == id && passward == pass)

		{
			x = true;
			system("cls");
		}
	}
	input.close();
	if (x)
	{

		cout << "YOUR LOGIN IS SUCCESSFUL" << endl;
		cout << "THANK YOU" << endl;

	}
	else
	{
		cout << "\t\t\tYOUR PASSWARD IS NOT CORRECT PLEASE ENTERE THE CORRECT PASSWARD\n\n";
		main();
	}


};
void registreation()
{
	char choice;
	string rpassward, ruserid, rpass, rid;
	cout << "ENTERE THE ID PLEASE!!" << endl;
	cout << "USER ID :" << endl;
	cin >> rid;
	cout << "ENTERE THE PASSWARD PLEASE" << endl;
	cout << "PASSWARD:" << endl;
	cin >> rpass;
	ofstream input;
	input.open("desease.txt", ios::out);
	input << rid << "\n" << rpass << "\n";
	system("cls");
	input.close();
	cout << " \t\t\t\THANK YOU " << endl;
	cout << "\t\t\t IF YOU WANT TO RETURN TO THE ABOVE MENU PRESS y \n";
	cin >> choice;
	if (choice == 'y')
	{
		cout << "PLEASE ENTERE ONE OF ABOVE OPTIONS" << endl;
		main();
	}
	else
	{
		cout << "ERORR!! ";
	}
};
void eixt()
{
	cout << "THANK YOU !!"<<endl;


}


