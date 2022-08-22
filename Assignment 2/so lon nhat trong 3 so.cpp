#include <stdio.h>
int main(){
    int a, b, c;
    printf("nhap vao 3 so :");
    scanf("%d%d%d", &a, &b, &c);
    int max = a;
    if(max < b){
        max = b;
    }
    if(max < c){
        max = c;
    }
    printf("So lon nhat trong ba so la %d\n", max);
    return 0;
}
