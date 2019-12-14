#include<iostream>
#include<conio.h>
using namespace std;
void asc_sort(int a,int *ptr)
{
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a-i;j++)
		{
			if(*(ptr+j)>*(ptr+j+1))
			{
				int temp=*(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1)=temp;
			}
		}
	}
}
void dsc_sort(int a,int *ptr)
{
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a-1;j++)
		{
			if(*(ptr+j)<*(ptr+j+1))
			{
				int temp=*(ptr+j);
				*(ptr+j)=*(ptr+j+1);
				*(ptr+j+1)=temp;
			}
		}
	}
}
int main()
{
	int a[100],n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int choice;
	cout<<"Enter your choice:\n1.Descending\n2.Ascending\n";
	cin>>choice;
	switch(choice)
	{
		case 1: dsc_sort(n,a);
		break;
		case 2: asc_sort(n,a);
		break;
		default: cout<<"Invalid!!";
		break;
	}
	cout<<"After sorting: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	getch();
	return 0;
}
