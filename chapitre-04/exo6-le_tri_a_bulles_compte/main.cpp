#include<cstdio>
long long trierParBulles(int t[], int n){
    long long nbEchanges=0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(t[j]>t[j+1]){
                long long temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
                nbEchanges++;
            }
        }
    }
    return nbEchanges;
}
int main(){
    int n;
    int t[1000];
    if(scanf("%d", &n)!=1 || n<0 || n>1000){
        printf("AUCUN\n");
        return 0;
    }
    for(int i=0; i<n; i++){
        if(scanf("%d", &t[i])!=1){
            printf("AUCUN\n");
            return 0;
        }
    }
    long long result=trierParBulles(t, n);
    for(int i=0; i<n; i++){
        printf("%d\n", t[i]);
    }
    printf("%lld\n", result);
    return 0;
}
