#include <stdio.h>
int main(){
	int n,m,i,j;
	printf("nhap chieu dai: ");
	scanf("%d",&n);
	printf("nhap chieu rong: ");
	scanf("%d",&m);
	
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("*\t");
		}
		printf("\n");
	}
}
