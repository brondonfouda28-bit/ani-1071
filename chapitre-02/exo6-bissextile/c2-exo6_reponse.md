#include<cstdio>
int main(){
    int b;
    scanf("%d", &b);
    if(b%4==0 && b%100!=0 || b%400==0){
        printf("oui");
    }else{
        printf("non");
    }
    return 0;
}

PS C:\Users\PAGE> ./pain.exe
1900
non
PS C:\Users\PAGE> ./pain.exe
2000
oui
PS C:\Users\PAGE> ./pain.exe
2024
oui
PS C:\Users\PAGE> ./pain.exe
2100
non
PS C:\Users\PAGE> 
