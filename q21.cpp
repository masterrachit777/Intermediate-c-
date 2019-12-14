#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
template<class u,class v>
void add(u a[][100],v b[][100],u r1,u c1)
{
	v c[100][100];
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"Addition result is: "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<setw(3)<<c[i][j];
		}
		cout<<endl;
	}
}
template<class f,class g>
void subtract(f a[][100],g b[][100],f r1,f c1)
{
	g c[100][100];
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	cout<<"Substraction result is: "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cout<<setw(3)<<c[i][j];
		}
		cout<<endl;
	}
}
template<class h,class o>
void multiply(h a[][100],o b[][100],h r1,h c1,h r2,h c2)
{
	o c[100][100];
	cout<<"Multiplication result is: "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			for(int k=0;k<r1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
			cout<<setw(4)<<c[i][j];
		}
		cout<<endl;
	}
	
}
template<class p,class q>
void trans2(q b[][100],p r2,p c2)
{
	q e[100][100];
	for(int i=0;i<c2;i++)
	{
		for(int j=0;j<r2;j++)
		{
			e[i][j]=b[j][i];
		    cout<<setw(3)<<e[i][j];
		}
		cout<<endl;
	}
}
template<class m>
void trans1(m a[][100],m r1,m c1)
{
	m d[100][100];
	for(int i=0;i<c1;i++)
	{
		for(int j=0;j<r1;j++)
		{
			d[i][j]=a[j][i];
		    cout<<setw(3)<<d[i][j];
		}
		cout<<endl;
	}
}
int main()
{
	int a[100][100],r1,r2,c1,c2,i,j;
	float b[100][100];
	int choice;
	char ch;
	cout<<"Enter row and column for matrix1: ";
	cin>>r1>>c1;
	cout<<"Enter row and column for matrix2: ";
	cin>>r2>>c2;
	cout<<"Enter elements for matrix1: ";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		cin>>a[i][j];
	}
	cout<<"Matrix1 is: "<<endl;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}
	cout<<"Enter elements for matrix2: ";
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		cin>>b[i][j];
	}
	cout<<"Matrix2 is: "<<endl;
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout<<setw(3)<<b[i][j];
		}
		cout<<endl;
	}
	do
	{
		cout<<"Enter your choice: "
		      "\n1.Addition"
		      "\n2.Substraction"
		      "\n3.Multiplication"
		      "\n4.Trnaspose\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					if(r1!=r2 && c1!=c2)
					cout<<"Addition not possible"<<endl;
					else
					add(a,b,r1,c1);
				}
				break;
			case 2:
				{
					if(r1!=r2&&c1!=c2)
					cout<<"Substraction not possible"<<endl;
					else
					subtract(a,b,r1,r2);
				}
				break;
			case 3:
				{
					if(c1!=r2)
					cout<<"Multiplication not possible"<<endl;
					else
					multiply(a,b,r1,r2,c1,c2);
				}
				break;
			case 4:
				{
					int t;
					cout<<"Enter you choice of transpose: "
					      "\n1.matrix1"
					      "\n2.matrix2\n";
					cin>>t;
					if(t==1)
					trans1(a,r1,c1);
					else
					trans2(b,r2,c2);
				}
				break;
			default: cout<<"Invalid choice!!"<<endl;
			break;
		}
		cout<<"Do you want to continue? (y/n) ";
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	getch();
	return 0;
}
