#include <stdio.h>


 int main(){
    int x,y, *a,*b, temp;

    printf("Enter x and y\n");
    scanf("%d %d",&x,&y);

    a=&x;
    b=&y;

    temp = *b;
    *b=*a;
    *a=temp;

    printf("Swapping value \n x= %d, \n y=%d\n",x,y);

    return 0;
}