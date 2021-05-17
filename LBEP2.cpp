#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	printf("nhap a=");
	scanf("%f",&a);
	printf("nhap b=");
	scanf("%f",&b);
	printf("nhap c=");
	scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("\nphuong trinh vo so nghiem\n");
			}else{
				printf("\nphuong trinh vo nghiem\n");
			}
		}else{
			float x=-b/c;
			printf("\nphuong trinh co nghiem %f=x",x);
		}
	}else{
		float d=b*b-4*a*c;
		if(d<0){
			printf("\nphuong trinh vo nghiem\n");
		}else{
			if(d==0){
				float x=-b/(2*a);
				printf("\nphuong trinh co nghiem %f=x",x);
			}else{
				float x1=-b+sqrt(d)/(2*a);
				float x2=-b-sqrt(d)/(2*a);
				printf("\nphuong trinh co nghiem %f=x1",x1);
				printf("\nphuong trinh co nghiem %f=x2",x2);
			}
		}
	}
}



