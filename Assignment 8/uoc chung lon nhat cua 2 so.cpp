#include <conio.h>
#include <stdio.h>
int main(){
    int a, b,c;
    printf("a = ");
    scanf("%d",&a);
  
    printf("b = ");
    scanf("%d",&b);  
 
    while((c = (a%b)) != 0){
        a = b;
            b = c;
    }
 
    printf("UCLN = %d",b);
    getch();
    return 0;
}
