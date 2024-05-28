#include <iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	float num1, num2, answer;
	cout<<"Type a number: ";
	cin>>num1;
	cout<<"Type the exponent: ";
	cin>>num2;
	
    answer= pow(num1,num2);
	cout<<num1<<" raised to the "<<num2<<" power is "<<answer;
	
	return 0;
}
