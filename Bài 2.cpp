#include <stdio.h>
int main(){
	int n,i,max;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	if (n<6){
	            printf("khong co so nao");
				return 0;
	printf("so nho hon N chia het cho ca 2 va 3 la : ");
	
	for (i=1;i<n;i++){
	    //printf("\t%d",i);
	    if (i % 6==0)
	    printf("t%d",i);
            } 
}
