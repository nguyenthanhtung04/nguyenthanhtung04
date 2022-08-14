#include <stdio.h>
int giaithua(int n){
    if (n == 1)
        return 1;
    return n * giaithua(n - 1);
    }
int main(){
    int n;
    scanf("%d", &n);
    printf("Giai thua %d la: %d", n, giaithua(n));
    return 0;
}
