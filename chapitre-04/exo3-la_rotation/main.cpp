#include<cstdio>
void tourner(int t[], int n,int k){
    if(n<=0){
        return;
    }
k=k%n;
if (k<0){
    k+=n;
}
int temp[1000];
for(int i=0; i<n; i++){
    temp[i]=t[(i+k)%n];
}
for(int i=0; i<n; i++){
    t[i]=temp[i];
}
}
int main(){
    int n, k;
    int t[1000];
    if(scanf("%d %d", &n, &k)!=2 || n<0 || n>1000){
        printf("AUCUN\n");
        return 0;
    }
for(int i=0; i<n; i++){
    if(scanf("%d", &t[i])!=1){
        printf("AUCUN\n");
        return 0;
    }
}
    tourner(t, n, k);
    for(int i=0; i<n; i++){
        printf("%d\n", t[i]);
        if(i<n-1){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
