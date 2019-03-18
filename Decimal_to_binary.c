#include <stdio.h>

/*
	Q1:d 
	Q2:d
	Q3:d
	Q4:c
	Q5:d
	Q6:a
	Q7:c


*/


int main(){
	/* This variable store the user input */
	unsigned int x;
	while(1){
		/* This array store value of decimal convert to binary */
		unsigned int binary[10000];
		/* This variable store the vaild bit of binary array*/
		unsigned int index=0;
		printf("Input:");
		scanf("%u",&x);
		printf("Output:");
		/* Use Logic shift and record how many valid bit of x */
		for(int i=x;i;i>>=1)
			binary[index++]= (i&1)? 1 : 0;
		/* Print from last bit */
		for(int i = index-1;i>=0;i--)
			printf("%u",binary[i]);
		printf("\n");
	}
}