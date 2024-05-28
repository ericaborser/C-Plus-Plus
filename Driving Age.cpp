#include <iostream>
using namespace std;
int main()
{
	string username="admin3", password="12345";
	string NAME, USERNAME, PASSWORD;
	int age, RESULT;
	
	cout<<"TYPE YOUR NAME: ";
	cin>>NAME;
	cout<<"USERNAME: ";
	cin>>USERNAME;
	cout<<"PASSWORD: ";
	cin>>PASSWORD;
	
	if(USERNAME==username && PASSWORD==password){
		cout<<"LOGIN SUCCESSFULLY!\n\n";
		
		cout<<"TYPE YOUR AGE "<<NAME<<": ";
		cin>>age;
		
		if(age>=18){
			cout<<"CONGRATULATIONS "<<NAME<<", YOU CAN NOW DRIVE YOUR CAR LEGALLY.";
		}
		
		else{
			RESULT=18-age;
			cout<<"SORRY "<<NAME<<", YOU NEED TO WAIT "<<RESULT<<" YEAR/S BEFORE YOU CAN DRIVE LEGALLY.";
		}
	}
	else{
		cout<<"INVALID LOGIN, PLEASE TRY AGAIN.";
	}
	
	return 0;
}
