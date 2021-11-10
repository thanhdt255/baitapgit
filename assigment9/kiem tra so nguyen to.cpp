
#include <stdio.h>
int main(){
int n;
printf("nhap vao so n:",n);
scanf("%d",&n); 
if(n==1||n==0||(n%2==0&&n!=2)){
	printf("n khong phai la so nguyen to %d",n);
}
	else if(n==2||n==3){
			printf("n la so nguyen to %d",n);
					}
				
else{
	
	int i=3;
	for(i=3;i<n-1;i+=2){
		if(n%i==0){
			printf("n khong la so nguyen to %d",n);
		break;	
		}
	
		else { printf("n la so nguyen to %d",n);
		break;
	
		}
		
	};
}
}

