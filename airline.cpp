#include<iostream>
#include<fstream>
#include<string.h>
#include<graphics.h>
//*****************************************************************************************************************************************************
using namespace std;
void loginadmin();
void login();
void registration();
void registrationadmin();

int main()
{
	int choice;
	cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 WELCOME TO VNJET AIRLINE RESERVATION SYSTEM \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\n\n\n");
	cout<<"\t\t\t------------Welcome to VNJET Airline------------\n\n\n"<<endl;
	cout<<"To Futher Proceed, Please enter a value.\n"<<endl;
	cout<<"****Default Username && Password is root-root **** Using Default Credentials will restrict you to just view the list a Passenger...\n\n\n"<<endl;
	cout<<"\t________________________________________"<<endl;
	cout<<"\t|(a) Press 0 to Exit                   |"<<endl;
	cout<<"\t|(b) Press 1 to Login as admin         |"<<endl;
	cout<<"\t|(c) Press 2 to Register as admin      |"<<endl;
	cout<<"\t|(d) Press 3 to Login as Passenger     |"<<endl;
	cout<<"\t|(e) Press 4 to Register as Passenger  |"<<endl;
	cout<<"\t|(f) Press 5 to Display the User Manual|"<<endl;
	cout<<"\t|______________________________________|"<<endl;
	cout<<"\n\t Enter the desired option: ";
	cin>>choice;
	cout<<endl;
	
	switch(choice)
	{
		case 0:
			cout<<"Thanks for using this program.\nThis program is created by 2 newbie\n";
			Sleep(3000);
			exit(1);
			break;
		case 1:
			loginadmin();
			break;
		case 2:
			registrationadmin();
			break;
		case 4:
			registration();
			break;
		case 3:
			login();
			break;
		default:
			system("cls");
			cout<<"\t\t\t Please select from the options given above \n"<<endl;
			main ();
	}
}
//**************************************************************************************************************************************************
void loginadmin()
{
		int count;
		string userIdadmin, password, idadmin, pass;
		system("cls");
	cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 ADMIN LOGIN \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\n\n\n");
		cout<<"Enter the  Username to login to the Management System: "<<endl;
		cin>>userIdadmin;
		cout<<"Enter the Password to login to the Management System: ";
		cin>>password;
		
		ifstream input("admin.txt");
		
		while(input>>idadmin>>pass)
		{
			if(idadmin==userIdadmin && pass==password)
			{
				count=1;
				system("cls");
			}
		}
		input.close();
		
		if(count==1)
		{
			int choice;
		cout<<userIdadmin<<"\n Your LOGIN is successfully as (admin)... For further Proceedings, enter a value from below...\n"<<endl;
			cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 MANAGEMENT SYSTEM \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\n\n\n");
        	cout<<"\t_______________________________________________________________________________________"<<endl;
			cout<<"\t|(a) Press 1 to Add new Passenger...                                                  |"<<endl;
			cout<<"\t|(b) Press 2 to Search a Passenger...                                                 |"<<endl;
			cout<<"\t|(c) Press 3 to Update the Data of the Passenger...                                   |"<<endl;
			cout<<"\t|(d) Press 4 to Delete a Passenger...                                                 |"<<endl;
			cout<<"\t|(e) Press 5 to Display all Passengers...                                             |"<<endl;
			cout<<"\t|(f) Press 6 to Display all flights registered by a Passenger...                      |"<<endl;
			cout<<"\t|(g) Press 7 to Display all registered Passengers is a flight...                      |"<<endl;
			cout<<"\t|(h) Press 8 to Delete a flight...                                                    |"<<endl;
			cout<<"\t|(i) Press 0 to Go to back to the Main Menu/Logout...                                 |"<<endl;
			cout<<"\t|_____________________________________________________________________________________|"<<endl;
			cout<<"\n\t Enter the desired option: ";
			cin>>choice;
			cout<<endl;
			main();
			
		}
		else{
			cout<<"\n LOGGIN ERROR!!! \n Please check your UserAdmin name and password\n"<<endl;
			main();
		}	
}
//**********************************************************************************************************************************************************
void registrationadmin ()
	{
		string ruserIdadmin,remail,rpassword,rpass;
		system("cls"); //cai nay de mo qua tab moi.
	cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 ADMIN SINGUP \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\n\n\n");
		cout<<"\t\t\t-----Welcome to the Administrator Registration Portal---------\n\n\n"<<endl;
		cout<<"Enter your UserName to Register: ";
		cin>>ruserIdadmin;
		cout<<"Enter your Password to the Register: ";
		cin>>rpassword;
		ofstream f1("admin.txt", ios::app);
		f1<<ruserIdadmin<<' '<<rpassword<<' '<<endl;
		system("cls");
		cout<<"\n\t\t\t Registration is successfull! \n";
		main();
		
	}
//********************************************************************************************************************************************************
	void login()
	{
		int count;
		string userId, password, id, pass;
		system("cls");
	cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 CUSTOMER LOGIN \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\n\n\n");
		cout<<"Please enter the username and password!!!\n"<<endl;
		cout<<"Enter the Email to login: ";
		cin>>userId;
		cout<<"Enter the password: ";
		cin>>password;
		
		ifstream input("records.txt");
		
		while(input>>id>>pass)
		{
			if(id==userId && pass==password)
			{
				count=3;
				system("cls");
			}
		}
		input.close();
		
		if(count==3)
		{
			int choice;
			cout<<userId<<"\n Your LOGIN is successfully!!!... For further Proceedings, enter a value from below...\n"<<endl;
		cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 BOOKING AIRLINE \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\n\n\n");
        	cout<<"\t___________________________________________________________________________"<<endl;
			cout<<"\t|(a) Press 1 to Book a Flight...                                          |"<<endl;
			cout<<"\t|(b) Press 2 to Update your Data...                                       |"<<endl;
			cout<<"\t|(c) Press 3 to Delete your account...                                    |"<<endl;
			cout<<"\t|(d) Press 4 to Display Flight Schedule...                                |"<<endl;
			cout<<"\t|(e) Press 5 to Cancel a Flight...                                        |"<<endl;
			cout<<"\t|(f) Press 6 to Display to all Flight registered by...                    |"<<endl;
			cout<<"\t|_________________________________________________________________________|"<<endl;
			cout<<"\n\t Enter the desired option: ";
			cin>>choice;
			cout<<endl;
			main();
			
		}
		else{
			cout<<"\n LOGGIN ERROR!!! \n Please check your user name and password\n"<<endl;
			main();
		}
	}
	
//****************************************************************************************************************************************************	
	void registration ()
	{
		string ruserId,remail,rpassword,rphonenumber,raddress,rage,rid,rmail,rphone,raddr,ra,rpass;
		//system("cls"); //cai nay de mo qua tab moi.
	cout<<("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 CUSTOMER SINGUP \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\n\n\n");
		cout<<"\t\t\t-----Welcome to the Customer Registration Portal---------\n\n\n"<<endl;
		cout<<"Enter your Email address: ";
		cin>>ruserId;
		cout<<"Enter your Password: ";
		cin>>remail;
		cout<<"Enter your Username: ";
		cin>>rpassword;
		cout<<"Enter your Phone number: ";
		cin>>rphonenumber;
		cout<<"Enter your address: ";
		cin>>raddress;
		cout<<"Enter your age: ";
		cin>>rage;
		ofstream f1("records.txt", ios::app);
		f1<<ruserId<<' '<<remail<<' '<<rpassword<<' '<<rphonenumber<<' '<<raddress<<' '<<rage<<endl;
		system("cls");
		cout<<"\n\t\t\t Registration is successfull! \n";
		main();
		
	}
