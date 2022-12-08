#include<stdio.h>
int main(){
	int a[5] ={6,7,8,9,1};

	int i,j,temp;
	for(i=0;i<5;i++)
	for(j=0;j<5-i-1;j++){
		if(a[j]>a[j+1]){
			int temp = a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	printf("\nMang duoc sap xep la: ");
	for(i=0;i<5;i++)
	printf("%d", a[i]);
	return 0;
}
