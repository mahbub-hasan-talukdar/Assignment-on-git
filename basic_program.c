#include<stdio.h>
int getFactorial(int n){
    int answer = 1;
    for(int i=1;i<=n;i++)ans*=i;
    return ans;
}
int main(){
    printf("%d",getFactorial(10));
}