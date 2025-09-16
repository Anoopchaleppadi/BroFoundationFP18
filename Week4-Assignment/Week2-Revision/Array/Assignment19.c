#include <stdio.h>
int isPrime(int x){ if(x<2)return 0; for(int i=2;i<=x/2;i++) if(x%i==0) return 0; return 1;}
int main() {
    int arr[]={8,10,23,45,2,67}, n=6, lp=-1;
    for(int i=0;i<n;i++) if(isPrime(arr[i]) && arr[i]>lp) lp=arr[i];
    if(lp==-1) printf("No prime"); else printf("Largest prime=%d",lp);
}
