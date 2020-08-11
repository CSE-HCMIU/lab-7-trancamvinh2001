/*
4. Input 2 binary number using string then return the sum of those two.
Result should use string.
Ex:
 __________________________________________________________
| Input: 111  11                                           |
| Output: 1010                                             |
|__________________________________________________________|
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void ex4(char s1[], char s2[]){
	int n,i,j,k,a[10];
	int sum=0;
	i=strlen(s1)-1;
	j=strlen(s2)-1;
	while(i>=0||j>=0||sum!=0)
	{
		if(i>=0)
		{
			sum=sum+(s1[i]-48);
		}
		if(j>=0)
		{
			sum=sum+(s2[j]-48);
		}
		n=sum%2;
		a[k]=n;
		sum=sum/2;
		i--;j--;
		k++;
	}
	for(i=k-1;i>=0;i--){
		printf("%d",a[i]);
	}
}

int main(int argc, char *argv[]) {
	char n1[] = "111";
    char n2[] = "1111";
    ex4(n1,n2);
		
	return 0;
}
