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
   printf("le nombre de chiffre est %d\n",: b);
   return 0;
}

PS C:\Users\PAGE> ./pain.exe
Entrez un nombre: 7
le nombre de chiffre est: 1
PS C:\Users\PAGE> ./pain.exe
Entrez un nombre: 42
le nombre de chiffre est: 2
PS C:\Users\PAGE> ./pain.exe
Entrez un nombre: 1000
le nombre de chiffre est: 4
PS C:\Users\PAGE> ./pain.exe
Entrez un nombre: 2147483647
le nombre de chiffre est: 10
PS C:\Users\PAGE> 
Avec 0 on obtient ceci:
PS C:\Users\PAGE> ./pain.exe
Entrez un nombre: 0
le nombre de chiffre est: 0
PS C:\Users\PAGE> 
