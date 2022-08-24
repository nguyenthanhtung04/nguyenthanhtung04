#include <stdio.h>
int main(){
    int ary[100];
    int n;
    printf("Nhap vao mang");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("So dao nguoc la %d: ",i);
        scanf("%d", &ary[i]);
	    }
    int B[100];
    for(int i=n-1; i>=0; i--){
        for(int j=0; j < n; j++){
            B[j] = ary[i];
        }
    }
    for(int i=0; i<n; i++){
        printf("%d", B[i]);
    }
}
