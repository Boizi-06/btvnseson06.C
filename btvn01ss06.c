#include<stdio.h>
int main(){
	int so1,so2=0,i;
	printf("moi ban nhap vao 5 so nguyen\n");
	for(i=1;i<=5;i++){
		printf("nhap so thu %d : ",i);
		scanf("%d",&so1);
		if(so1%2!=0){
			so2=so2+so1;
		}
		
	}
	printf("tong cua cac so le la %d\n",so2);
	return 0;
}
