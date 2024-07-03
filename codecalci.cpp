#include<iostream>
using namespace std;

int main()
{
	int a,b,c,s;
	cout<<"Enter the value of first number(A): ";
	cin>>a;
	cout<<"\nEnter the value of second number(B): ";
	cin>>b;
	
	cout<<"\nEnter 1 for sum, 2 for difference, 3 for product or 4 for ratio of A and B";
	cin>>s;

	switch(s){
		case 1:
			c=a+b;
		cout<<"The sum of A and B is "<<c;
			break;
			
		case 2:
			c=a-b;;
		cout<<"The difference between A and B is "<<c;
			break;
			
		case 3:
			c=a*b;;
		cout<<"The product of A and B is "<<c;
			break;
		
		case 4:
			c=a/b;;
		cout<<"The ratio of A to B is "<<c;
			break;
			
		default:
			break;
	
	}
	cout<<endl;
	
	return 0 ; 
}
