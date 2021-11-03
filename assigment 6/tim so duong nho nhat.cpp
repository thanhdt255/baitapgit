#include <stdio.h>
int main(){

int n;
	printf("nhap n=");
	scanf("%d",&n);
	
	int arr[n];

	
  for(int i=0;i<n;i++){
	printf("nhap phan tu thu %d la",i);
	scanf("%d",&arr[i]);
   };
   int min=arr[0];
   for(int i=0;i<n;i++){
  if(arr[i]<=arr[0]&& arr[i]>0){
  	min=arr[i];
  	
  };

	
}
   
   printf("so nguyen nho nhat duong  trong mang la %d",min);
}
