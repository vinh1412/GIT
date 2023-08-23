#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap a: "); scanf("%d",&a);
	printf("Nhap b: "); scanf("%d",&b);
	printf("a = %d, b = %d", a, b);
}
void timSoLonNhat(int a, int b){
	if(a>b){
		printf("%d lon hon %d", a, b);
	}
