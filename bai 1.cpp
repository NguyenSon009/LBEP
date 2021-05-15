#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap a=");
	scanf("%d,&a");
	printf("nhap b=");
	scanf("%d,&b");
	printf("nhap c=");
	scanf("%d,&c");
	
	if(a< b){
		if(a< c){
			printf("so be nhat: %d",a);
		}else{
			printf("so be nhat: %d",b);
		}
	}else{
		if(b< c){
			printf("so be nhat: %d",b);
		}else{
			printf("so be nhat: %d",c);
		}
	}
}

