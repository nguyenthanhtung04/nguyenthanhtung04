#include <stdio.h>
int main(){
    int n;
    printf("nhap n=");
    scanf("%d",&n);
    
    int x;
    x = 0;
    while(n!=0){
    	if(x<n%10);
    	x = n%10;
    	printf("Tong cua n la: %d",x);
    	n =n/10;
    }
}

