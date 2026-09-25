#include<cstdio>
int main() {
    int menu;
     printf("nouvelle partie\n");
    printf("charger\n");
    printf("option\n");
    printf("quitter\n");
    printf("Entrez un nombre allant de 1 à 4: ");
    scanf("%d", &menu);
    switch (menu) {
        case 1:
            printf("nouvelle partie\n");
            break;
        case 2:
            printf(" charger \n");
            break;
        case 3:
            printf(" options\n");
            break;
        case 4:
            printf(" quitter\n");
            break;
        default:
            printf("touche inexistante. Veuillez entrer un nombre entre 1 et 4.\n");
    }
    return 0 ;
}

PS C:\Users\PAGE> clang++ c2-exo7_main.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                      
nouvelle partie
charger
option
quitter
Entrez un nombre allant de 1 ├á 4: 1
nouvelle partie
PS C:\Users\PAGE> 


#include<cstdio>
int main() {
    int menu;
    printf("nouvelle partie\n");
    printf("charger\n");
    printf("option\n");
    printf("quitter\n");
    printf("Entrez un nombre allant de 1 à 4: ");
    scanf("%d", &menu);
    switch (menu) {
        case 1:
            printf("nouvelle partie\n");
            break;
        case 2:
            printf(" charger \n");
            break;
        case 3:
            printf(" options\n");
        case 4:
            printf(" quitter\n");
            break;
        default:
            printf("touche inexistante. Veuillez entrer un nombre entre 1 et 4.\n");
    }
    return 0;
}
PS C:\Users\PAGE> clang++ c2-exo7_main.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                      
nouvelle partie
charger
option
quitter
Entrez un nombre allant de 1 ├á 4: 3
 options
 quitter
PS C:\Users\PAGE> 
sans le break , le programme continue d'executer le cases qui suit aprés avoir trouver celui qui correspond
       


