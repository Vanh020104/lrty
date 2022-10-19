#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int n, i;
	printf("\nNhap so pt Mang muon luu");
	scanf("%d", &n); 
	// cap phat bo nho cho mang 
	//(int*): Mot vung du lieu kieu int duoc dang ki
	//n:SL cac phan tu Mang muon luu
	//sizeof():Do kich thuoc phan tu mang
	//ptr = vung nho => Con tro ptr dang tro vao mang
	 
	ptr = (int*)malloc(n * sizeof(int)) ;//Ve phai la mot vung kieu int
	//Luon phai ktra dieu kien du bo nho khong?
	if(ptr==NULL){
		printf("\nSorry,khong du bo nho de cap phat!!!");
		exit(0); 
	} 
		printf("\nCap phat bo nho thanh cong!"); 
		for(i = 0; i < n; i++){
			printf("\nNhap gia tri cho mang: ");
			scanf("%d", &ptr[i]);//scanf("%d",ptr + i); 
		} 
		//Tim phan tu lon nhat cua Mang
		//(*ptr + i)gia tri cua pt Mang thu i
		for(i = 1; i < n; i++){
			if(ptr[0] < (*ptr + i)) {
		 	*ptr = *(ptr+i);	
			}
		} 
		printf("\nGia tri lon nhat cua Mang la: %d", ptr[0]);
		
	} 
