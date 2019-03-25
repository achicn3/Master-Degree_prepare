#include <stdio.h>

void hanoi(int n,char a,char b,char c){
	if(n==1){
		printf("move disk1 from %c to %c.\n",a,c);
	}
	else{
		hanoi(n-1,a,c,b);
		printf("move disk%d from %c to %c.\n",n,a,c);
		hanoi(n-1,b,a,c);
	}
}

int main(){
	hanoi(4,'a','b','c');
}