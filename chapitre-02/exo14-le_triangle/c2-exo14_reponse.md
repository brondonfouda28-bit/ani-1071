#include<cstdio>
int main(){
    int h;
    scanf("%d", &h);
    int k;
    for(int k=1; k<=h; k++){
        for(int j=1; j<=h-k; j++){
            printf(" ");
        }
        for(int j=1; j<=2*k-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

PS C:\Users\PAGE> clang++ c2-exo15_main.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                       
1
*
PS C:\Users\PAGE> ./pain.exe
2
 *
***
PS C:\Users\PAGE> ./pain.exe
4
   *
  ***
 *****
*******
PS C:\Users\PAGE> ./pain.exe
0
PS C:\Users\PAGE> 
pour h=0, le programme ne produit aucune sortie, ce qui est attendu puisque la boucle for ne s'exécute pas lorsque h est égal à 0.



#include<cstdio>
int main(){
    int h=4;
    int k;
    for(int k=1; k<=h; k++){
        for(int j=1; j<=h-k; j++){
            printf(" ");
        }
        for(int j=1; j<=2*k-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

PS C:\Users\PAGE> clang++ c2-exo14_main.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                       
   *
  ***
 *****
*******
PS C:\Users\PAGE> 
