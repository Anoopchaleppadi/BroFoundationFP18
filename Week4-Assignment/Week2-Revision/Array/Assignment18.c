#include <stdio.h>
int isPrime(int x){ if(x<2)return 0; for(int i=2;i<=x/2;i++) if(x%i==0) return 0; return 1;}
int main() {
    int arr[]={8,9,11,4,15,18}, n=6, sp=-1;
    for(int i=0;i<n;i++) if(isPrime(arr[i]) && (sp==-1 || arr[i]<sp)) sp=arr[i];
    if(sp==-1) printf("No prime"); else printf("Smallest prime=%d",sp);
}
