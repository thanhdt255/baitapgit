#include <stdio.h>
int main(){
		int a;
	printf("nhap vao canh a=",a);
	scanf("%d",&a);
		int b;
	printf("nhap vao canh b=",b);
	scanf("%d",&b);
		int c;
	printf("nhap vao canh c=",c);
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a){
		int C=a+b+c;
		printf("chu vi tam giac la %d ",C);}

	else{printf("khong phai tam giac,nhap lai");
	}
}
