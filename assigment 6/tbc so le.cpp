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

	for(int i=0;i<n;i++){
	if(arr[i]%2!=0){
		sum=sum+arr[i];
		count++;
		
	}
	}
	 
	printf("tong cac so le la %d",sum);
	 tbc=sum/count;
	printf("trung binh cong cac so le la %f",tbc);
		
		

	
}
 
