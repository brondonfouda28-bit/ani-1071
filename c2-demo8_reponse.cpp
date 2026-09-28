#include<cstdio>
int main (){
    int h=23;
    int m=59;
    int s=58;
    for(int i=0;i<3;i++){
        printf("%02d:%02d:%02d\n", h, m, s);
       s=(s+1)%60;
       m=(m+(s==0))%60;
       h=(h+(m==0 && s==0))%24;
    }
return 0;
}