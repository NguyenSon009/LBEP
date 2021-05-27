#include <stdio.h>
//tim so duong nho nhat.
int main(){
	int n=8;
	int a[n]= {1,2,3,4,-1,-2,33,22};
	int min=a[0];
	for(int i=0; i<n; i++){
		if(a[i]<min && a[i]>0){
			min = a[i];
		}
	}printf("so duong nho nhat %d:",min);
}
	
