#include <stdio.h>
#include <math.h>
int main(){
	int a, b, n, i;
	int found = 0;
	
	do{
		printf("\nNhap vao so nguyen a (a < b): ");
		scanf("%d", &a);
		printf("Nhap vao so nguyen b (b < a): ");
		scanf("%d", &b);
		
		if(a >= b){
			printf("Loi: a phai be hon b, vui long nhap lai\n");
		}	
	}	
	while (a >= b);
	
	printf("\nCac so nguyen to trong khoang tu %d den %d la: ", a, b);
	found = 0;
	
	for(n = a; n <= b; n++){
		if(n < 2){
			continue;
		}
		
		int soNguyenTo = 1;	
	
		for(i = 2; i * i <= n; i++){
			if(n % i == 0){
				soNguyenTo = 0;
				break;
			}	
		}
		if(soNguyenTo){
			printf("%d ", n);
			found = 1;
		}	
	}
	if(!found){
		printf("Khong co");
	}
	printf("\n");
	
	return 0;	
	
}

