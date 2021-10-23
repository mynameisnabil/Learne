#include <stdio.h>
int main()
{
    int a, b, c; 
    float x;
    scanf ("%d %d %d", &a, &b, &c);
    printf ("Assignment score : %d ",a);getchar();
    printf ("Mid exam score   : %d ",b);getchar();
    printf ("Final exam score : %d ",c);getchar();
    x = (a*1/5) + (b*3/10) + (c*1/2);
    printf ("Final Score      : %.2f \n",x);
    return 0;
}