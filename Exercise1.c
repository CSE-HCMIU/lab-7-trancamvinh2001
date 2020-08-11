/*
1. Given an array of string, find the longest common prefix of all element.
 ________________________________________________
| Input: abc abd abf                             |
| Output: ab                                     |
|________________________________________________|
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void ex1(char *str[],int n){
	char lcp[10];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(str[i]);j++)
		{
			int current=strncmp(lcp,str[i],j);
			if(current!=0)
			{
				lcp[j-1]='\0';
			}
		}
	}
	if(lcp!=0)
	{
		printf("%s",lcp);
	}
}

int main(int argc, char *argv[]) {
	
	char *str[]={"abc","abcd","abe","abdr"};
	ex1(str,4);
			
	return 0;
}
