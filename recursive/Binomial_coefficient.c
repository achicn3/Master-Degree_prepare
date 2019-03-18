#include <stdio.h>

int bin(int n,int m){
	if(n==m || m==0 )return 1;
	else{
		return bin(n-1,m) + bin(n-1,m-1);
	}
}

int main(){
	int k=bin(90,5);
	printf("output:%d\n",k);

}