#include <stdio.h>

/** @@Parameter : 
 **		str[]: string we want reverse
 **		n : start index
 **		size : stirng's size
 ** @@How it wrok :
 ** 	Swap the string from last elemnt to first elemnt , last-1 element to first+1 elemnt ,and so on 
 ** 	using recursive to swap(last-n-1, first+n) for n <size/2 
 ** 	Also , this funciton can seen as reverse n to size-n function 
 ** 	For example,if we set n = 3 , a string size = 7 ,then we will reverse 3-4 element in string 
 **/
void reverse(char str[],int n,int size){
	/* Terminate condition */
	if(n == size/2 +1 ){
		for(int i=0;i<size;i++)
			printf("%c",str[i]);
		printf("\n");
		return;
	}
	else{
		/* swap(last-n-1, first+n) */
		char temp = str[size-n-1];
		str[size-n-1] = str[n];
		str[n] = temp; 
		reverse(str,n+1,size);
	}
}


int main(){
	char k[] = "First";
	reverse(k,0,5);
}