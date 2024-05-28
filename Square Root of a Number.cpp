#include <iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int num;
	float answer;
	cout<<"Type a whole number: ";
	cin>>num;
	
    answer= sqrt(num);
	cout<<"The square root of the number "<<num<<" is "<<answer<<".";
	
	return 0;
}
