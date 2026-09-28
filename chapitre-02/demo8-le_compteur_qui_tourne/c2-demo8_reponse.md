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

PS C:\Users\PAGE> clang++ c2-demo8_reponse.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                          
23:59:58
23:59:59
00:00:00
PS C:\Users\PAGE> 
