#include <stdio.h>
void main() {
    int i,j,n;
    printf("Enter limit : ");
    scanf("%d" , &n);
    for(i=1;i<=n;i++)
    {
    for(j=n;j>=i;j--)
    {
       printf("%c  ",j+64);
    }
    printf("\n");
}
}