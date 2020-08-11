/*
3. Input 2 complex numbers using string then return a string
that represent the product of those two. Result should use string.
Complex number has the form of a+bi (i2 = -1, b can be negative or positive)
Ex:
 __________________________________________________________
| Input: 3+2i 3+2i                                         |
| Output: 5+12i                                            |
|__________________________________________________________|
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void ex3(char s1[], char s2[]){
	int n;
	printf("%d",(s1[0]-48)*(s2[0]-48)-(s1[2]-48)*(s2[2]-48));
	n=(s1[0]-48)*(s2[2]-48)+(s1[2]-48)*(s2[0]-48);
	if(n>0)
	{
		printf("%c",'+');
		printf("%d",n);
		printf("%c",'i');
	}
	else
	{
		printf("%c",'-');
		printf("%d",n);
		printf("%c",'i');
	}
}

int main(int argc, char *argv[]) {
	char n1[] = "1+9i";
    char n2[] = "8+7i";
    ex3(n1,n2);
		
	return 0;
}
