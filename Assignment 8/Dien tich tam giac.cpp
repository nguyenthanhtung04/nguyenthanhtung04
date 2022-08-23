#include <stdio.h>
#include <math.h>
    int tinhChuVi(int a, int b, int c){
    return a+b+c;
}
 
int main(){
    int a, b, c;
    printf("Nhap lan luot 3 canh cua tam giac: ");
    scanf("%d %d %d", &a, &b, &c);
      
    int P = tinhChuVi(a, b, c); 
    float p = P/2.0; 
     
    float S = sqrt(p * (p-a) * (p-b) *(p-c));
    printf("Dien tich hinh tam giac la: %.2f", S);
}
