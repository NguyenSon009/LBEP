//tim tong lon nhat trong chuoi so duong
#include <stdio.h>
int main(){
	int n=8;
	int a[n]={1,2,3,4,-1,-2,33,22};
	int max=a[0];
	int max2=a[0];
	int sum=0;
	for(int i=0; i<n; i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	for(int i=0; i<n; i++){
		if(a[i]>max2 && a[i] !=max){
			max2=a[i];
		}
	}
	sum=max + max2;
	printf("max %d\n",max);
	printf("max2 %d\n",max2);
	printf("tong so duong lon nhat %d\n",sum);
}
