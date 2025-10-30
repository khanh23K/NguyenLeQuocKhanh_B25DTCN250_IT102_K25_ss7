#include <stdio.h>
int main(){
	long n;
	
	do{
		printf("nhap so nguyen duong cua ban: ");
		scanf("%ld",&n);
		if(n<1){
			printf("nhap lai so nguyen!\n");
		}	
		
	}while(n<1);
	
	int m,khoang=n,h;
	while(khoang>0){
		h = khoang%10;
		m = m*10+h;
		khoang /=10; 
	}
	
	if(n==m){
		printf("%ld la dao nguoc",n);
	}else{
		printf("%ld ko phai so dao nguoc",n);
	}
	return 0;
}

