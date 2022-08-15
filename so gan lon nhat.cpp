#include <stdio.h>
int main(){
	int ary[10];
	printf("Nhap 10 so nguyen");
	for(int i=0; i<10; i++){
		scanf("%d",&ary[i]);
	}
	
	int high = ary[0];
	
	for(int i=1; i<10; i++){
		if(ary[i] > high){
			high = ary[i];
		}
	}
	
	printf("Highest: %d",high);
	
	int high2 = ary[0];
	for(int i=0; i<10; i++){
		if(ary[i] > high){
			high2 = ary[i];
			break;
		}
	}
	if(high2 == high){
		printf("Mang toan so giong nhau\n");
	}else{
		for(int i=0; i<10; i++){
			if(ary[1] > high2 && ary[i] < high){
				high2 = ary[i];
			}
		}
		
		printf("Highest 2: %d\n",high2);
	}
}
