#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int len=0;
    int play1,play2;
    char ch[25*2500+5];
    while(cin>>ch[len]&&ch[len]!='E'){
        len++;
    }
    play1=play2=0;
    for(int i=0;i<len;i++){
        if(ch[i]=='W'){
            play1++;
        }
        else if(ch[i]=='L'){
            play2++;
        }
        if((play1>=11||play2>=11)&&abs(play1-play2)>=2){
            printf("%d:%d\n",play1,play2);
            play1=play2=0;
        }
    }
    printf("%d:%d\n",play1,play2);
    printf("\n");
    play1=play2=0;
    for(int i=0;i<len;i++){
        if(ch[i]=='W'){
            play1++;
        }
        else if(ch[i]=='L'){
            play2++;
        }
        if((play1>=21||play2>=21)&&abs(play1-play2)>=2){
            printf("%d:%d\n",play1,play2);
            play1=play2=0;
        }
    }
    printf("%d:%d\n",play1,play2);
    return 0;
}

