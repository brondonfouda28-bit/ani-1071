#include<cstdio>
void renverser(int t[], int n){
    for(int i=0; i<n/2; i++){
        int temp=t[i];
        t[i]=t[n-1-i];
        t[n-1-i]=temp;
    }
}
int main(){
    int n;
    if(scanf("%d", &n)!=1 || n<0 || n>1000){
        printf("AUCUN\n");
        return 0;
    }
    int t[n];
    for(int i=0; i<n; i++){
        if(scanf("%d", &t[i])!=1){
            printf("AUCUN\n");
            return 0;
        }
    }
    renverser(t, n);
    for(int i=0; i<n; i++){
        printf("%d\n", t[i]);
        }
        printf("\n");
     return 0;

    }
  