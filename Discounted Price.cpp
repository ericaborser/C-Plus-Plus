#include<iostream>
using namespace std;
int main()
{
	float num1, num2, net;
	
	cout<<"Type the Amount: ";
	cin>>num1;
	
	if(num1<1000){
		num2=num1*.05;
		cout<<"Discounted Amount: "<<num2<<" \n";
		net=num1-num2;
		cout<<"Net Payable: "<<net;
	}
	else if(num1>=1000 and num1<=4999){
		num2=num1*.10;
		cout<<"Discounted Amount: "<<num2<<" \n";
		net=num1-num2;
		cout<<"Net Payable: "<<net;
	}
	else{
		num2=num1*.15;
		cout<<"Discounted Amount: "<<num2<<" \n";
		net=num1-num2;
		cout<<"Net Payable: "<<net;
	}
	
	return 0;
}
