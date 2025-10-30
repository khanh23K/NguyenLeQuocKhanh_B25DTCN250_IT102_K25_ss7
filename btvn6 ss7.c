#include <stdio.h>
int main(){
	long n;
	do{
	printf("nhap so nguyen can dao nguoc: ");
	scanf("%ld",&n);
	if (n<0){
		printf("vui long nhap lai!\n");
	}
	}while(n<1);
	
	long dao_nguoc=n;
	long m,h;
	while (n!=0){
		h = n%10;
		m =m*10+h;
		n =n / 10;
	}
	printf("so dao nguoc la: %ld",m);
	
	
	return 0;
}
