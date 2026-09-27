#include<cstdio>
int main(){
    printf("int : %zu octets\n", sizeof(int));
    printf("bool :%zu octets\n", sizeof(bool));
    printf("float :%zu octets\n", sizeof (float));
    printf(" char : %zu octets\n", sizeof(char));
    printf("long : %zu octets\n", sizeof(long));
    printf("double : %zu octets\n", sizeof(double));
    printf("unsigned char :%zu octets\n", sizeof(unsigned char));
    printf("long long : %zu octets\n", sizeof(long long));
    printf("long double: %zu octets\n", sizeof(long double));
    printf("short : %zu octets\n", sizeof(short));
    printf("unsigned int : %zu octets\n", sizeof(unsigned int));
    printf("void :%zu ooctets\n", sizeof(void));
    return 0;
}

PS C:\Users\PAGE> clang++ c2-demo3_reponse.cpp -o pain
c2-demo3_reponse.cpp:14:35: error: invalid application of 'sizeof' to an incomplete type 'void'
   14 |     printf("void :%zu ooctets\n", sizeof(void));
      |                                   ^     ~~~~~~
1 error generated.
PS C:\Users\PAGE> 
Avec void on ,n'arrive pas a compiler et on a une erreur car sizeof donne la taille qu'un type occupe dans la mémoire et etant donne que void signife aucune valeur , celui ci n'a donc aucune taille defini dans la mémoire. ce type nous apprend qu'il represente l'absence de valeur


#include<cstdio>
int main(){
    printf("int : %zu octets\n", sizeof(int));
    printf("bool :%zu octets\n", sizeof(bool));
    printf("float :%zu octets\n", sizeof (float));
    printf(" char : %zu octets\n", sizeof(char));
    printf("long : %zu octets\n", sizeof(long));
    printf("double : %zu octets\n", sizeof(double));
    printf("unsigned char :%zu octets\n", sizeof(unsigned char));
    printf("long long : %zu octets\n", sizeof(long long));
    printf("long double: %zu octets\n", sizeof(long double));
    printf("short : %zu octets\n", sizeof(short));
    printf("unsigned int : %zu octets\n", sizeof(unsigned int));
    return 0;
}

PS C:\Users\PAGE> clang++ c2-demo3_reponse.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                          
int : 4 octets
bool :1 octets
float :4 octets
 char : 1 octets
long : 4 octets
double : 8 octets
unsigned char :1 octets
long long : 8 octets
long double: 16 octets
short : 2 octets
unsigned int : 4 octets
PS C:\Users\PAGE> 

le type le plus reputer pour occuper différente  taille en fonction du systeme est long  . un programme qui compte sur la taille de son peut avoir des problèmes  du a la difference qu'a la taille de se type selon le systeme ou il se trouve car il peuut prouvoquer un déficite de la mémoire pour un programme  qui a besoin d'espace 


las valeurs distintes qu'un type peut avoir est de 2^8n car 8 bits correspond a 1 octets et chaque bit ne peut avoir que deux valeur (0 ou 1) d'où la formule 2^8n avec n octets . par exemple pour char qui ne vaut que 1 octet le nombre de valeur possible sera de : 2^8(1)=256 valeurs
