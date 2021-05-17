#include <stdio.h>
int main(){
	float vongoc,laisuat,soky,nam,thuhoi;
	printf("nhap vongoc=");
	scanf("%f",&vongoc);
	printf("nhap laisuat=");
	scanf("%f",&laisuat);
	printf("nhap soky=");
	scanf("%f",&soky);
	thuhoi=vongoc*((1+laisuat)*soky);
	printf("so tien thu hoi %f",thuhoi);
}
