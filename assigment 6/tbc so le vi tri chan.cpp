#include <stdio.h>
int main(){
	
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int sum=0;
	int sumsole=0;
	int count=0;
	float tbc;
	int arr[n];
  for(int i=0;i<n;i++){
	printf("nhap phan tu thu %d la",i);
	scanf("%d",&arr[i]);
   };
   for(int i=0;i<n;i+=2){
   	if(arr[i]%2!=0)
	   {
   		sum=sum+arr[i];
   		if(i%2==0){
   			sumsole=sumsole+arr[i];
   		
		   }
	   }
	   	count++;
   }
   tbc=sumsole/count;
   printf("tong n so le o vi tri chan la %d",sumsole);
   printf("trung binh cong cac so nay la %f",tbc);
}
