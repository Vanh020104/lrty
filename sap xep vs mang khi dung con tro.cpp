#include<stdio.h>
#include<stdlib.h>//thu vien cho cap phat bo nho dong 
int main (){
	int *ptr,n,i,j,temp;
	printf("\nBan muon sv bao nhieu pt Mang: ");
	scanf("%d",&n);
	ptr =(int*)malloc(n*sizeof(int)); //Mang n phan tu => Mang cpb
	if(ptr == NULL){
		printf("\nKhong du bo nho cap phat!");
		exit(0);
	}
	printf("\nNhap gt cho cac pt Mang: ");
	for(i=0; i <= n; i++){
		scanf("%d",(ptr+i));//scanf("%d",&ptr[i])
		
	}
	for(i = 0; i < n; i++) {
		for(j = 0; j <= i; j++) {
			if(*(ptr+i)>*(ptr+j))//if(ptr[j]<ptr[j])
		{
			temp= *(ptr+i);//temp = ptr[i])
		*(ptr+i)=*(ptr + j);
		*(ptr+j)=temp;
		}
	}
	}
	printf("\nMang sau khi duoc sap xep: ");
	for(i=0;i<n;i++)
	printf("\n%d",*(ptr+i));
	return 0;
} 
