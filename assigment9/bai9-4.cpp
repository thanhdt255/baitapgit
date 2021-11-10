#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("nhap vao canh a",a);
	scanf("%d",&a);
		int b;
	printf("nhap vao canh b",b);
	scanf("%d",&b);
		int c;
	printf("nhap vao canh c",c);
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a){
		int C=a+b+c;
	
	float p=C/2.0;
		float S=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("dien tich tam giac la %f ",S);
	}
	else{printf("khong phai tam giac,nhap lai");
	}
} 
