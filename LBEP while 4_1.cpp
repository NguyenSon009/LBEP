#include <stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int i=1;
	int y=100000;
	int tong=0;
	while(i<=y){
		tong=tong + i;
		i=i+1;
	}
	printf("tong S=1+2+3+......+1000000= %d",tong);
}
