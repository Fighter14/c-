#include<iostream.h>
#include<conio.h>
using namespace std;
void main()
{
	int a,rev=0,c,i;
	cout<<"enter the value of a:-";
	cin>>a;
	while(a!=0)
	{
		c=a%10;
		rev=(rev*10)+c;
		a=a/10;
	}
	cout<<"reverse number is:-"<<rev;
	getch()
}			
