#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        if(a*a==b*b+c*c){
            printf("zhijiao\n");
        }
        else if(a*a>b*b+c*c){
            printf("dunjiao\n");
        }
        else{
            printf("ruijiao\n");
        }
    }
    else if(b>a&&b>c){
        if(b*b==a*a+c*c){
            printf("zhijiao\n");
        }
        else if(b*b>=a*a+c*c){
            printf("dunjiao\n");
        }
        else{
            printf("ruijiao\n");
        }
    }
    else{
        if(c*c==a*a+b*b){
            printf("zhijiao\n");
        }
        else if(c*c==a*a+b*b){
            printf("dunjiao\n");
        }
        else{
            printf("ruijiao\n");
        }
    }
    return 0;
}
