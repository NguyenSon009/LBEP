#include <stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	if(n<0){
		printf("nhap lai");
	}else{
		int i;
		for(i=0 ; i<n ; i+=2){
			printf(" %d:",i);
		}
	}
}
