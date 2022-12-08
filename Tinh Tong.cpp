#include<stdio.h>
int a, b;

int sumOfTwoNumber(){
	int sum; 
	a=5; 
	b=10;
	sum = a+b; 
    return sum;
} 
int main (){
	int result = sumOfTwoNumber();
	printf("Tong hai so la: %d", result);
	return 0;
} 
