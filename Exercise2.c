/*
2. Remove duplicate elements from an array and return the new length.
Do not create any temporary array
Ex:
 _________________________________________
| Input: [ab, ac, ab, bc]                 |
| Output: 3                               |
|_________________________________________|
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void ex2(char *str[],int n){
	int i,j,count;
    	int newlen;
    	for(i=0;i<n;i++)
    	{
    		for(j=i+1;j<n;j++)
    		{
            		int current=strcmp(str[i],str[j]);
            		if(current==0)
            		{
            			str[j]="\0";
			}
		}
 	}
	for(i=0;i<n;i++)
    	{
     		if(str[i]=="\0")
     		{
		  count++;
	    	}
     	
    	}
	newlen=n-count;
	printf("%d",newlen);
}

int main(int argc, char *argv[]) {
	
	char *str[]={"ab","abcd","ab","abdr"};
    ex2(str,4);
		
	return 0;
}
