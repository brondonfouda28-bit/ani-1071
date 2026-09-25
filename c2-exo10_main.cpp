#include<cstdio>
int main(){
    long long n;
    int e;
    printf("Entrez un nombre: ");
    scanf("%lld", &n);
    e=0;
    do{
if (n>1 && n%2==0){
    printf("%lld\n", n);
    n= n/2;
    }else{
    n= 3*n+1;
     printf("%lld\n", n);
}
e++;
}while(n!=1);
printf("le nombre d'etape est: %d\n", e);
return 0;   
}