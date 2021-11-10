#include <stdio.h>
int main(){
	int n;
	int m;
	printf("nhap vao so n=");
	scanf("%d",&n);
	if(n==2){
		printf("n la so nguyen to va so nguyen to tiep theo la 3");
	}
		if(n==3){
		printf("n la so nguyen to va so nguyen to tiep theo la 5");
	}
	else if(n==1||n==0){
		printf("n khong la so nguyen to");
	}
	else {
		for(int i=3;i<n;i=i+2){
			if(n%i==0)
			{printf("n khong la so nguyen to");
			break;
			}
			else{m=
				printf("n la so nguyen to");
				break;
				
			}
		}
	}

}
