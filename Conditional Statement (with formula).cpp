#include <iostream>
using namespace std;
int main()
{
	float cm, answer;
	
	cout<<"Type the length in centimeters: ";
	cin>>cm;
	
	if(cm<0){
		cout<<"Entry is invalid.";
	}
	else{
		answer=cm/2.54;
		cout<<"There are "<<answer<<" inches in "<<cm<<" centimeters.";
	}

	return 0;
}
