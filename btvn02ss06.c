#include<stdio.h>
int main(){
	int so1,sochan=0,sole=0,i;
	for(i=1;i<=5;i++){
		printf("moi ban nhap vao so nguyen thu %d\n",i);
		scanf("%d",&so1);
		if(so1%2==0){
			sochan++;
		}else{
			sole++;
		}
		
	}
	printf("so luong so chan la %d\n",sochan);
	printf("so luong so le la %d\n",sole);
	return 0;
}
