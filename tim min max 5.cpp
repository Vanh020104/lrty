#include<stdio.h>
int main(){
	int a[100];
	int i,j,n,temp;
	printf("\nSo phan tu cua Mang: ",n);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nPhan tu thu: ",i+1);
		scanf("%d",&a[i]); 
	} 
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++){
		if(a[j]>a[j+1]){
			temp = a[j];
			a[j]=a[j+1];
			a[j+1] = temp; 
		} 
	} 
	printf("\nSo lon nhat la: %d", a[n-1]);
	printf("\nSo nho nhat la: %d", a[0]);
	scanf("%d", a[i]);
	return 0; 
} 
