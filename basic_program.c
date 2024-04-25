#include<stdio.h>
int getFactorial(int n){
    int answer = 1;
    for(int i=1;i<=n;i++)ans*=i;
    return ans;
}
int getFibonacci(int n){
    if(n<=1){
        return (n<=0)? 0 : 1;
    }
    return getFibonacci(n-1) + getFibonacci(n-2);
}
int main(){
    printf("%d",getFactorial(10));
    printf("%d",getFibonacci(10));
}
//first comment
//program extended
//first comment for cherry pick
//cherry-pic done
