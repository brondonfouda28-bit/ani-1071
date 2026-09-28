#include<cstdio>
int main (){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int cmp=0;
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
        cmp++;
    }
    printf("le pgdc est %d\n", a);
    printf("le nombre d'essais est %d\n", cmp);
    return 0;
}
