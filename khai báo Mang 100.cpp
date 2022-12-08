#include<stdio.h>
 int main(){
 	int arr[100];
 	int i; 
 	for(i=0; i< 100; i++) {
 		scanf("%d", &arr[i]);
 		printf("\nGia tri cua Mang la: %d", &arr); 
	 }
	 for(i=1; i< 100; i++){
	 	printf("%d", arr[i]); 
	 return 0; 	 } 
 }

