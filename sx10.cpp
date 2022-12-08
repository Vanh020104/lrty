#include<stdio.h>
int main(){
	int i,j,n,temp;
	int a[1000];
	printf("\nSo phan tu cua Mang: ",n);
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("\nPhan tu thu: ", i+1);
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++){
		if(a[j]>a[j+1]){
			temp = a[j];
			a[j]= a[j+1];
			a[j+1]= temp;
		}
	}
	printf("\nMang duoc sap xep la: ");
	for(i=0;i<n;i++)
	printf("%d", a[i]);
	return 0;
}
