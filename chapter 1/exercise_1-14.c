/*
author:sameeran joshi <joshisameeran17@gmail.com>
date:2-may-2018
exercise 1-14 
Q.write a program to print a histogram of frequencies of different characters in its input.

TO STOP THE PROGRAM ENTER 'Q'
*/

#include <stdio.h>
#define LIMIT 10
int main(){
int c=0,cnt=0;
int alpha[LIMIT];
for(int i=0;i<LIMIT;i++)
	alpha[i]=0;
while((c=getchar())!= 'Q'){
	if(c!=' '||c!='\n'||c!='\t'){
		cnt++;
		
	}
	if(c==' '){

	alpha[cnt-1]++;
	cnt=0;
		
	}

}
alpha[cnt-1]++;
for(int i=0;i<LIMIT;i++){
	int count=alpha[i];
	printf("%3d",i);
	for(int j=0;j<count;j++)
		printf("*");
	printf("\n");
}
}
