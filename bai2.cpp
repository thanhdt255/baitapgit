#include <stdio.h>

main(){
	int n;
	float x;
	float S;
	printf("nhap vao so tien",n);
	scanf("%d",&n);
	
	S=1.08*1.08*1.08*1.08*n;
	x=S-n;


	printf(" tong so tien nhan duoc sau 4 nam la %f",S);
	printf("so tien lai thu duoc sau 4 nam la %f",x);
}
