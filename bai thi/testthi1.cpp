#include <stdio.h>
int main(){

int n;
	printf("nhap n=");
	scanf("%d",&n);
	int sum;
	int count=0;
	float tbc;
	
	int arr[n];
	
	int x;
  for(int i=0;i<n;i++){
	printf("nhap phan tu thu %d la",i);
	scanf("%d",&arr[i]);
   };
 
	for(int i=0;i<n;i++){
		if(arr[i]%2==0)
		x=arr[i];
		
	}
	if(x==0)printf("khong co so chan nao trong day");
	else printf("so chan cuoi cung trong day la:%d",x);
 
}
