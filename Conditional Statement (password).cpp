#include <iostream>
using namespace std;
int main()
{
	string username="erica", password="borser";
	string USERNAME, PASSWORD;
	
	cout<<"USERNAME: ";
	cin>>USERNAME;
	cout<<"PASSWORD: ";
	cin>>PASSWORD;
	
	if(username==USERNAME and password==PASSWORD){
		cout<<"Login Successfully!";
	}
	
	else{
		cout<<"Login Unsuccessfully\n"<<"Kindly check your password and username";
	}
	return 0;
}
