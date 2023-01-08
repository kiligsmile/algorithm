#include <iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i-=2){
        for(int j=n-i;j>0;j-=2){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=3;i<=n;i+=2){
        for(int j=n-i;j>0;j-=2){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
