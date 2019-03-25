#include <stdio.h>

int count[100]={0};

int Fib(int n){
	count[n]++;
	if(n == 0 )return 0;
	else if(n == 1 ) return 1;
	else
		return Fib(n-2)+Fib(n-1);
}

int main(){
	Fib(5);
	for(int i=0;i<=5;i++)
		printf("[%d]:%d\n",i,count[i]);
}