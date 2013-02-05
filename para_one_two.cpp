#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;
void strrev(char *p)
{
for(int i=strlen(p)-1;i>=0;i--)
	printf("\%c",p[i]);

}

void replace(char *p)
{
	int count=0,k=0,j=0,i=0;//char *q;

	char *q=(char*)malloc(sizeof(char)*strlen(p));	
	k=strlen(p)-1;
	printf("\n");
	while(i<=k)
	{
		
		if(p[i]!=' ')
		{	
			printf("%c",p[i]);i++;
		}
		else
		{
			printf(" ");
			while(p[k]!=' ')
			{

				q[j]=p[k];
				k--;j++;
			}
			q[j]='\0';
			strrev(q);
			j=0;
			printf(" ");i++;k--;
		}
	}

printf("\n");
	
}


int main()
{
	char a[]="The arrangement of words has to be changed";
	printf("\n%s",a);
	replace(a);

	return 0;
}
