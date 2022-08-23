#include<stdio.h>
int main(){
    int a, b, kq, step;
    printf("nhap a:");
    scanf("%d",&a);
    
    printf("nhap b:");
    scanf("%d",&b);
    
    if(a>b){
        step = a;
    }else{
        step = b;
    }
    
    for(int i = step; i <= a*b; i+= step){
        if(i % a == 0 && i % b == 0){
            kq = i;
            break;
        }
    }
    printf("Boi chung nho nhat cua 2 so la:(%d, %d) = %d", a, b, kq);
}
