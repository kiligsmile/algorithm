#include <iostream>
using namespace std;
int ifprime(int n)
{
    for(int i=2;i<n/2+1;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int ifjudge(int n)
{
    if(n>99){
        if(n%10==n/100){
            return 1;
        }
    }
    else{
        if(n%10==n/10){
            return 1;
        }
    }
    return 0;
}
int main()
{
    for(int i=11;i<1000;i++){
        if(ifprime(i)&&ifjudge(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}
