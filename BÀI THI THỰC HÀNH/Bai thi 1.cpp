#include <stdio.h>
int main(){
  int n;
  float S;
  S = 0;
  do{
    printf("\n Nhap vao n: ");
    scanf("%d", &n);
    if(n < 1){
      printf("\n So n phai lon hon 1, vui long nhap lai !");
    }
  }while(n < 1);
         for(int i = 1; i <= n; i++){
    S = S + 1.0 / i;
        }
   printf("\n Tong S = 1 + 1/2 + ... + 1/%d la: %.2f",n, S);
}
