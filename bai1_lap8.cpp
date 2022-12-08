#include<stdio.h>
int main(){
	int a, b;
	printf("\nNhap a: ");
	scanf("%d", &a);
	printf("\nNhap b:");
	scanf("%d", &b);
     	int temp = a;//Luu gia tri cho a
	   a = b;
	  b = temp;// lay gia tri cua a cho temp b;
	  printf("a = %d, b = %d", a, b);
	  int arr[a]; 
	  printf("/nDia chi cua a: %d", &arr);
	  int dch[b]; 
	  printf("\nDia chi cua b: %d", &dch);
	return 0;
} 
 
  
