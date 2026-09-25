#include<cstdio>
int main(){
    int a; 
    int b;
    printf("Entrez un nombre: ");
    scanf("%d", &a);
    b=0;
    while(a>0){
        a= a/10;
        b++;
        
    }
    printf("le nombre de chiffre est: %d\n", b);
    return 0;
}
