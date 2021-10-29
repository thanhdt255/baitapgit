#include <stdio.h>
int main(){
	int n;
	printf("nhap vao so ",n);
	scanf("%d",&n);
	int i;
 float S=0;  
	for(i=1;i<=n;i++){
		S+=1.0/i;
	};

	printf("tong S la %f",S);
}			
