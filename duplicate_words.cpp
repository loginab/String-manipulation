#include<map>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int duplicate (const char *p)
{
	char *tok;
	map<string,int>dup;
	pair<map<string,int>::iterator,bool> ret;
	char b[50];
	strcpy(b,p);		
	tok=strtok(b," ");
	while(tok !=NULL)
	{

		if (dup.count(tok)==0)
			ret=dup.insert(make_pair(tok,1));
		else
			return 1;
		tok=strtok(NULL," ");
	}
return 0;
}


int main()
{
	if (duplicate("This is the")==1)
		printf("\nString contains duplicate words \n");
	else
		printf("\nNo duplicate words \n");
	
return 0;

}
