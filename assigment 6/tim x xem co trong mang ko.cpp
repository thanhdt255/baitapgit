#include <stdio.h>
int main(){

int n;
	printf("nhap n=");
	scanf("%d",&n);
	int sum;
	int count=0;
	float tbc;
	int arr[n];
  for(int i=0;i<n;i++){
	printf("nhap phan tu thu %d la",i);
	scanf("%d",&arr[i]);
   };
   int x;
   printf("nhap vao so x = ",x);
   scanf("%d",&x);
   for(int i=0;i<n;i++){
   	if(arr[i]==x){
   		printf(" trong mang co x");
   		break;
	   }
	   else{
	   	
	   	printf("trong mang khong co x");
	   	break;
	   }
   }
}
