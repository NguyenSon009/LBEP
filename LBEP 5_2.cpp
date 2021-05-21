#include <stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	if(n<=0){
		printf("nhap lai");
	}
	if(n>0){
		int i;
		int s=0;
		for(i=1; i<=n ; i++){
			// uoc la so chia het cho 1 so va chinh no ( i la bien uoc,s la tong bien uoc)
			if(n%i==0){
			printf("uoc la %d\n",i);
			s=s+i;	
			
			}
		}	 printf("tong cac uoc la %d\n",s);
	}

	
	
}
