#include<cstdio>
int main(){
int i;
for(i=1; i<=20; i++){
    if(i%3!=0){
        printf("%d\n", i);
    }

}
return 0;
     }


PS C:\Users\PAGE> clang++ c2-exo12_main.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                       
1
2
4
5
7
8
10
11
13
14
16
17
19
20
PS C:\Users\PAGE> 


#include<cstdio>
int main(){
    int n = 1;
encore:
    if (n % 3 == 0) goto suivant;
    printf("%d ", n);
suivant:
    n++;
    if (n <= 20) goto encore;
}
    PS C:\Users\PAGE> clang++ c2-exo12_main.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                      
1 2 4 5 7 8 10 11 13 14 16 17 19 20 

on remarque les deux algorithme on la meme sortie qui est d'afficher le tous les nombres compris entre 1 et 20 et qui ne sont pas divisible par 3
c'est la version avec la boucle for que je lirais sans effort dans un mois