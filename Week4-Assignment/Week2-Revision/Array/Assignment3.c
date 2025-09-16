#include <stdio.h>
int main() {
    int arr[]= {1,2,3,2,1}, n=5, flag=1;
    for (int i=0; i<n/2; i++)
        if (arr[i]!=arr[n-i-1])
            flag = 0;
    if (flag) printf("YES");
    else printf("NO");
}