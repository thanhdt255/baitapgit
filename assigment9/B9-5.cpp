#include <stdio.h>
int main(){
	int a; int b;
	printf("nhap so a=");
	scanf("%d",&a);
		printf("nhap so b=");
	scanf("%d",&b);
	
    int UCLN;
    if (a == 0 || b == 0){
        return UCLN=a + b;
        printf("uoc chung lon nhat la %d",UCLN);
    }
    
    while (a*b != 0){
        if (a > b){
            a %= b; 
        }else{
            b %= a;
        }
    }
    return UCLN=a + b; 
    printf("uoc chung lon nhat la %d",UCLN);
}
