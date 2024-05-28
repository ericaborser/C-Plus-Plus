#include <iostream>
using namespace std;
int main()
{
	string name;
	float avescore;
	
	cout<<"Type your name: ";
	cin>>name;
	cout<<"Type your average score: ";
	cin>>avescore;
	
	if(avescore<75){
		cout<<"POOR";
	}
	else if(avescore>=75 and avescore<88){
		cout<<"GOOD";
	}
	else{
		cout<<"VERY GOOD!";
	}

	return 0;
}
