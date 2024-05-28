#include <iostream>
using namespace std;
int main()
{
	string username="erica", password="borser";
	string USERNAME, PASSWORD;
	int num;
	
	cout<<"USERNAME: ";
	cin>>USERNAME;
	cout<<"PASSWORD: ";
	cin>>PASSWORD;
	
	if(username==USERNAME and password==PASSWORD){
		cout<<"LOGIN SUCCESSFULLY!\n";
		
		cout<<"Type a number: ";
    	cin>>num;
	
    	if(num==0){
    		cout<<"ZERO";
    	}
    	else if(num>0){
    		cout<<"POSTIVE";
    	}
    	else{
    		cout<<"NEGATIVE";
    	}
    	
	}
	else{
		cout<<"Login Unsuccessfully\n"<<"Kindly check your password and username";
	}
		

	

	return 0;
}
