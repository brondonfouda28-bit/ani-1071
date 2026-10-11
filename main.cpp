#include<cstdio>
void renvercer(int tab[], int n){
    for(int i=1;i<n/2;i++){
        int temp=tab[i];
        tab[i]=tab[n-i-1];
        tab[n-i-1]=temp;
    }
   
} void afficher( int tab[],int n){
    for(int i=0;i<n;i++){
        printf("%d", tab[i]);
    }
}
int main(){
    int n=0;
    int tab[1000];
    int x;
    while(n<1000 && scanf("%d", &x)==1){
        if(x==0){
            break;
        }
        tab[n]=x;
        n++;
    }
    if (n==0){
    printf("AUCUN\n");
    }else{
        renvercer(tab, n);
        afficher(tab, n);
    }
    return 0;
}