#include <stdio.h>
#include <math.h>
int main(){
	long n;
	
	printf("nhap so nguyen: ");
	scanf("%ld",&n);
	
	int sochuso = 0;
	int khoang = n;
	while(khoang > 0){
		sochuso++;
		khoang = khoang / 10;
	}
	
	long m=0;
	khoang =n;
	int u;
	while(khoang > 0){
		u = khoang % 10;
		m += pow(u,sochuso);
		khoang = khoang / 10;	
	}
	
	if(m == n){
		printf("so %ld la so Armstrong.\n",n);
	}else{
		printf("so %ld ko phai la so Armstrong.\n",n);
	}
	
}

