#include<stdio.h>
int main(){
	int i,j,n,temp;
	int a[100];
	printf("\nSo phan tu cua mang la: ",n);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Phan tu thu a[0]: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++){
		if(a[j]>a[j+1]);
		int temp=a[j];
		a[j]=a[j+1];
		a[j+1]= temp;
	}
	printf("\nso lon nhat la: \n", a[n-1]);
	printf("\nso nho nhat la: \n",a[0]);
	scanf("%d", a[i]); 
	return 0;
}
