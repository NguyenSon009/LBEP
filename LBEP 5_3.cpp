#include <stdio.h>
int main(){
	int a,b;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	if(a<=0 && b<=0){
		printf("nhap lai");
	}
	if(a>0 && b>0){
		while(a!=b){
			if(a>b){
				a=a-b;
			}else{
				b=b-a;
			}
		}printf("UCLN la %d",a,b);
	}
}
