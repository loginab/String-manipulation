#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

char* replace(char *p)
{
	int count=0,k=0;//char *q;

	char *q=(char*)malloc(sizeof(char)*strlen(p));
	char *r=(char *)malloc(sizeof(char)*15);

	k=0;	
	for(int i=strlen(p)-1;i>=0;i--)
	{	q[k]=p[i];
		k++;
	}
	
	q[strlen(p)]='\0';
k=0;	

	for(int i=strlen(p)-1;i>=0;i--)
	{
		if(q[i]!=' ')
		{
			r[k]=q[i];
			k++;
		}
		else
		{	r[k]='\0';
			memcpy(q+i+1,r,k);
			k=0;
		}
		
	}
r[k]='\0';
memcpy(q,r,k);
return q;
	
}


int main()
{
	char a[]="The arrangement of words has to be changed";
	printf("\n%s",a);
	printf("\n%s\n",replace(a));

	return 0;
}
