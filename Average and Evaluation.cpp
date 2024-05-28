#include<iostream>
using namespace std;
int main()
{
	float English, Filipino, Mathematics, Science, History, Average;
	
	cout<<"Type your grade in English: ";
	cin>>English;
	cout<<"Type your grade in Filipino: ";
	cin>>Filipino;
	cout<<"Type your grade in Mathematics: ";
	cin>>Mathematics;
	cout<<"Type your grade in Science: ";
	cin>>Science;
	cout<<"Type your grade in History: ";
	cin>>History;
	
	Average=(English+Filipino+Mathematics+Science+History)/5;
	
	cout<<"Average: "<<Average<<" \n";
	
	if(Average<=73){
		cout<<"FAILED";
	}
	else if(Average==74){
		cout<<"CONDITIONAL";
	}
		else if(Average>=75 and Average<=79){
		cout<<"PASSING";
	}
		else if(Average>=80 and Average<=84){
		cout<<"FAIR";
	}
	else if(Average>=85 and Average<=90){
		cout<<"GOOD!";
	}
	else if(Average>=91 and Average<=96){
		cout<<"VERY GOOD!";
	}
	else{
		cout<<"EXCELLENT!";
	}
	
	return 0;
}
