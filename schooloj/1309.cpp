#include <iostream>
using namespace std;
int judge(int n)
{
    for(int i=2;i<n/2+1;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    for(int i=1;i<=2;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                if(judge(k*10+2)&&judge(j*100+k*10+2)&&judge(i*1000+j*100+k*10+2)){
                    printf("%d\n",i*1000+j*100+k*10+2);
                }
                else if(judge(k*10+3)&&judge(j*100+k*10+3)&&judge(i*1000+j*100+k*10+3)){
                    printf("%d\n",i*1000+j*100+k*10+3);
                }
                else if(judge(k*10+5)&&judge(j*100+k*10+5)&&judge(i*1000+j*100+k*10+5)){
                    printf("%d\n",i*1000+j*100+k*10+5);
                }
                else if(judge(k*10+7)&&judge(j*100+k*10+7)&&judge(i*1000+j*100+k*10+7)){
                    printf("%d\n",i*1000+j*100+k*10+7);
                }
            }
        }
    }
    return 0;
}
