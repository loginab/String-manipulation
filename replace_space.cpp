#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

char* replace(char *p)
{
	int count=0,k=0;//char *q;
	for(int i=0;i<strlen(p);i++)
	{
		if (p[i]==' ')
			count++;
	}

	char *q=(char*)malloc(sizeof(char)*25);
//	q[strlen(p)-1+count*3]='\0';
//	k=strlen(p);
	k=0;	
	for(int i=0;i<strlen(p);i++)
	{	
//		printf("%c",p[k]);
		if(p[i]==' ')
		{
			q[k]='2';
		
			q[++k]='0';q[++k]='%';
		}
		else
		{	
			q[k]=p[i];
		}

		k++;
	//	if(k<0)
	//	{	break;}
	}
	q[k]='\0';

return q;
	

}


int  main()
{
	char a[]="This string has to be changed";

	printf("\n%s \n",replace(a));

return 0;
}
