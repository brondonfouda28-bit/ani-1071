#include<cstdio>
void initialiser(bool premier[], int n){
    for(int i=0; i<n; i++){
        premier[i]=true;
    }
    premier[0]=false;
    premier[1]=false;
   }
   void cribler(bool premier[], int n){
    for(int i=2; i<n; i++){
        if(premier[i]){
            for(int j=i*i; j<n; j+=i){
                premier[j]=false;
            }
        }
    }
}
void afficher(bool premier[], int n){
    for(int i=0; i<n; i++){
        if(premier[i]){
            printf("%d\n", i);
        }
    }
}
int main(){
    int n;
    if(scanf("%d", &n)!=1 || n<2){
        printf("AUCUN\n");
        return 0;
    }
    bool premier[n];
    initialiser(premier, n);
    cribler(premier, n);
    afficher(premier, n);
    return 0;
}
