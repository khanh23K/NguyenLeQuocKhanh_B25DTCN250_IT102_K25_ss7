#include <stdio.h>
#include <math.h>
int main(){
	long n;
	int a,b;
	printf("Nhap so nguyen duong n: ");
	scanf("%ld",&n);
	
	printf("Cac truong hop co the: \n");
	for( a=1;a<=cbrt(n);a++){
		for( b=1;b<=cbrt(n);b++){
			if((pow(a,3)+pow(b,3))==n){
				printf("%d^3 + %d^3 = %ld \n",a,b,n);
			}
		}
	}
}


