#include<stdio.h>
// khai bao cho bt co ham ntn se duoc su dung
void displayMessage(); 
float tinhDienTich(float l, float w );
//Trien khai ham 
void displayMessage(){

	printf("\nDay la ham displayMessage()");
	//ko dung return vi la ham void
}
float tinhDienTich(float l, float w ){
	float result = 1*w;
	return result;
}
int main(){
	displayMessage();//Goi ham => ket qua cua ham se duoc thuc thi o day
	float s = tinhDienTich(1.5, 5.4);
	printf("Dien tich hinh chu nhat la: %d, s");
} 
//cyen 1 MANG VAO HAM CHI CHUYEN DIA CHI

 
