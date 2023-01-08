#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[1000];
    gets(s);
    int count=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]!=' '&&(s[i+1]==' '||((i+1)==strlen(s)))){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
