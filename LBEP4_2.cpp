#include <stdio.h>
#include <math.h>
int main(){
	float n;
	printf("nhap n:");
	scanf("%f",&n);
	float i=1;
    float y=1000;
	float tong =0;
	while(i<=y){
		tong=tong + 1/(float)i;
		i=i+1;
	}
	printf("tong S=1+1/2+1/3+1/4+.....1/1000 = %f:",tong);
}
