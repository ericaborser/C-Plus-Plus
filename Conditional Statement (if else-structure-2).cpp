#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	
	cout<<"Type a number: ";
	cin>>num1;
	cout<<"Type another number: ";
	cin>>num2;
	
	if(num1>num2){
		cout<<"The number "<<num1<<" is greater than the number of "<<num2<<".\n";
	}
	
	else{
		cout<<"The number "<<num2<<" is greater than the number of "<<num1<<".\n";
	}
	
	cout<<"End of the Program";

	
	return 0;
}
