#include <stdio.h>
#include <conio.h>
int main(){
    int n;
    printf ("Nhap so nguyen : ");
    scanf ("%d",&n);
    for (int i=1;i<n;i++){
            if (n%i==0)
            printf ("uoc cua n la : %d",i);
    }
} 
