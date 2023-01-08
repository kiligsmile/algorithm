#include <iostream>
using namespace std;
int main()
{
    for(int i=5;i<999;i++){
        if(i<100){
            if(i%3==0&&(i%10==5||i/10==5)){
                printf("%d\n",i);
            }
        }
        else{
            if(i%3==0&&(i%10==5||(i/10)%10==5||i/100==5)){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
