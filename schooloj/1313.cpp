#include <iostream>
using namespace std;
int judge(int n)
{
    for(int i=2;i<n/2+1;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
int main()
{
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            if(judge(4*100+i*10+j)&&judge(4*10+i)){
                printf("%d\n",4*100+i*10+j);
            }
        }
    }
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            if(judge(6*100+i*10+j)&&judge(6*10+i)){
                printf("%d\n",6*100+i*10+j);
            }
        }
    }
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            if(judge(8*100+i*10+j)&&judge(8*10+i)){
                printf("%d\n",8*100+i*10+j);
            }
        }
    }
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            if(judge(9*100+i*10+j)&&judge(9*10+i)){
                printf("%d\n",9*100+i*10+j);
            }
        }
    }
    return 0;
}
