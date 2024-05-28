#include <iostream>
using namespace std;
int main()
{
	int num;
	
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
	

	return 0;
}
