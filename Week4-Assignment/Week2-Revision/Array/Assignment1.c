#include <stdio.h>
int main() {
    int a[] = {1,2,3}, b[] = {7,8,9}, c[10];
    int n1=3, n2 = 3, pos = 2, i,j,k=0;

    for (i=0 ; i<pos; i++)
        c[k++] = a[i];
    for (i=0 ; i<n2 ; i++)
        c[k++] = b[i];

    for (i=pos; i<n1; i++)
        c[k++] = a[i];

    for (i=0; i<k; i++)
        printf("%d ",c[i]);
}
