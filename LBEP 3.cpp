#include <stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("nhap a=");
	scanf("%f",&a);
	printf("nhap b=");
	scanf("%f",&b);
	printf("nhap c=");
	scanf("%f",&c);
	if(a+b>c && a+c>b && b+c>a){
		float p,chuvi,dientich;
		p=(a+b+c)/2;
		chuvi= a+b+c;
		dientich= sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\na,b,c la ba canh cua tam giac\n");
		printf("\nchu vi tam giac = %f\n ",chuvi);
		printf("\ndien tich tam giac = %f \n",dientich);
	}else {
		printf("\na,b,c khong la ba canh tam giac\n");
	}
}
