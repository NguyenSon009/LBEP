#include <stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	if(n<0){
		printf("nhap lai");
	}
	if(n>=0){
		int i=1;
		int giaithua=1;
		while(i<=n){
			giaithua*=i;
		    i++;
		}
		printf("n! = %d",giaithua);
	}
}
