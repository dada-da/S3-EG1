#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	
	printf("Nhap b=");
	scanf("%d",&b);
	
	if(a >= b){
		int c = a / b;
		printf("C = %d", c);
	}else{
		int c = a * b;
		printf("C = %d", c);
	}
}
