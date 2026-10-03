#include<cstdio>
int nombreDeChiffres(int n){
    int cpt=0;
    while(n>0){
        n/=10;
        cpt++;
    }
    return cpt;
}
int main(){
    int n;
    while(scanf("%d", &n) == 1){
        printf("le nombre de chiffre est : %d\n", nombreDeChiffres(n));
    }
    return 0;
}
