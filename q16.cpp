#include<iostream>
#include<conio.h>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	char a[100],b[100];
	cout<<"Enter the first string: ";
	cin.getline(a,sizeof(a));
	cout<<"Enter the second string: ";
	cin.getline(b,sizeof(b));
	string s1=a;
	string s2=b;
	char f[100];
	int g=0;
	while(a[g]!='\0')
	{
		f[g]=a[g];
		g++;
	}
	char ch;
	do
	{
	int choice;
	cout<<"Enter your choice:"
	      "\n1.Address of each character"
	      "\n2.concatinate without strcat"
	      "\n3.concatinate with strcat"
	      "\n4.comparing both strings"
	      "\n5.length of string using pointers"
	      "\n6.lowercase to uppercase"
	      "\n7.uppercase to lowercase"
	      "\n8.number of vowels"
	      "\n9.reverse the string\n";
	      cin>>choice;
	switch(choice)
	{
		case 1:
			{
				int i=0;
				while(s1[i]!='\0')
				{
					cout<<"Address of "<<s1[i]<<" is: "<<&s1+i<<endl;
					i++;
				}
			}
			break;
		case 2:
			{
				string s3;
				s3=s1+s2;
				cout<<"The concatenated string is: "<<s3<<endl;
			}
			break;
		case 3:
			{
				cout<<"The concatenated string is: "<<strcat(a,b)<<endl;
			}
			break;
		case 4:
			{
				int x=s1.compare(s2);
			    cout<<x<<endl;
			}
			break;
		case 5:
			{
				char *ptr=f;
				int c=0;
				int j=0;
				while(*(ptr+j)!='\0')
				{
					c++;
					j++;
				}
				cout<<"Length of string s1 is: "<<c<<endl;
				c=0;
				j=0;
				char *pt=b;
				while(*(pt+j)!='\0')
				{
					c++;
					j++;
				}
				cout<<"Length of string s2 is: "<<c<<endl;
			}
			break;
		case 6:
			{
				string s4;
				cout<<"Enter a word: ";
				cin>>s4;
				int k=0;
				while(s4[k]!='\0')
				{
					if(s4[k]>=97 && s4[k]<=122)
					{
						s4[k]-=32;
						k++;
					}
				}
				cout<<s4<<endl;
			}
			break;
		case 7:
			{
				string s5;
				cout<<"Enter a word: ";
				cin>>s5;
				int p=0;
				while(s5[p]!='\0')
				{
					if(s5[p]>=65 && s5[p]<=90)
					{
						s5[p]+=32;
						p++;
					}
				}
				cout<<s5<<endl;
			}
			break;
		case 8:
			{
				int c;
				cout<<"Enter 1 for s1 and 2 for s2: ";
				cin>>c;
				if(c==1)
				{
				    int count=0;
				    int q=0;
				    while(s1[q]!='\0')
				    {
					    if(s1[q]=='a' || s1[q]=='e' || s1[q]=='i' || s1[q]=='o' || s1[q]=='u' || s1[q]=='A' || s1[q]=='E' || s1[q]=='I' || s1[q]=='O' || s1[q]=='U')
					    {
					        count++;
					        q++;
				        }
				        else
				        q++;
				    }
				    cout<<"Number of vowels in s1 are: "<<count<<endl;
			    }
			    else
			    {
			        int count1=0;
				    int q=0;
				    while(s2[q]!='\0')
				    {
					    if(s2[q]=='a' || s2[q]=='e' || s2[q]=='i' || s2[q]=='o' || s2[q]=='u' || s2[q]=='A' || s2[q]=='E' || s2[q]=='I' || s2[q]=='O' || s2[q]=='U')
					    {
					        count1++;
					        q++;
				        }  
				        else
				        q++;
				    }
				    cout<<"Number of vowels in s2 are: "<<count1<<endl;
				}
			}
			break;
		case 9:
			{
				char s6[100];
				cout<<"Enter a string: ";
				cin>>s6;
				int m=0;
				int n=strlen(s6)-1;
				while(m<n)
				{
					char temp=s6[m];
					s6[m]=s6[n];
					s6[n]=temp;
					n--;
					m++;
				}
				cout<<"Reversed string is: "<<s6<<endl;
			}
			break;
		default: {
		cout<<"Invalid choice!!";}
		break;
	}
	cout<<"Do you want to continue? (y/n) ";
	cin>>ch;
    }
    while(ch=='y' || ch=='Y');
    getch();
    return 0;
}
