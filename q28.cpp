#include<iostream>
#include<conio.h>
using namespace std;
void reverse(int *ptr)
{
	int a=*ptr;
	int rev,sum=0;
	while(a>0)
	{
		rev=a%10;
		sum=(sum*10)+rev;
		a=a/10;
	}
	*ptr=sum;
}
int main()
{
	int a[100],n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	reverse(&a[i]);
	cout<<"After reversing: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	getch();
	return 0;
	
}
