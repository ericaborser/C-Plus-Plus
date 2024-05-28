#include <iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	float X1, X2, Y1, Y2, DISTANCE;
	cout<<"THIS PROGRAM CAN CALCULATE THE DISTANCE. KINDLY PROVIDE THE VALUE OF X1, X2, Y1, AND Y2.\n";
	cout<<"TYPE THE X1: ";
	cin>>X1;
	cout<<"TYPE THE X2: ";
	cin>>X2;
	cout<<"TYPE THE Y1: ";
	cin>>Y1;
	cout<<"TYPE THE Y2: ";
	cin>>Y2;
	
    DISTANCE=sqrt(pow((X1-X2),2)+pow((Y1-Y2),2));

	cout<<"THE DISTANCE IS "<<DISTANCE;
	
	return 0;
}

