#include<stdio.h>
int main (){
	int a[5]={4,7,5,2,9};
	int i,j,temp;
	 
	for(i=0;i<5;i++)
	for(j=0;j<5-i-1;j++){
		if(a[j]>a[j+1]){
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp; 
		} 
	} 
	printf("\nMAng duoc sap xep la: \n");
	for(i=0;i<5;i++)
	printf
	("%d", a[i]);
	return 0;
	 
} 
