#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[1000];
    char s1[1000];
    char s2[1000];
    scanf("%s",s);
    int j=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]!=','){
            s1[i]=s[i];
        }
        else{
            j=i+1;
            break;
        }
        
    }
    int k=0;
    for(int i=j;i<strlen(s);i++){
        s2[k]=s[i];
        k++;
    }
    printf("%s,%s\n",s2,s1);
    return 0;
}
