//command line
#include<iostream>
#include<cstring>
using namespace std;
int main(int argc,char *argv[])
{
	char *ch=argv[1];
	char s;
	int l=strlen(ch);
	for(int i=0;i<l;i++)
	{
		int count=1;
		s=ch[i];
		for(int j=i+1;j<l;j++)
		{
			if(ch[j]==s)
			{
				count++;
				ch[j]='\0';
			}
		}
		if(ch[i]!='\0')
		cout<<s<<" has appeared= "<<count<<" times."<<endl;
	}
	cin.ignore();
	return 0;
}
