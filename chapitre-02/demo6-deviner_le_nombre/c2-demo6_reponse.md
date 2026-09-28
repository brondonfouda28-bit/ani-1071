#include<cstdio>
#include<cstdlib>
int main(){
int nombre = rand()%100+1;
int p;
int cmp=0;
do{
    scanf("%d", &p);
    if(p<nombre){
        printf("plus\n");
    }else if(p>nombre) {
        printf("moins\n");
    }else{
        printf("trouve\n");
    }cmp++;
 }while(p != nombre);
 printf("le nombre d'essai est :%d\n", cmp);
 return 0;
}


PS C:\Users\PAGE> clang++ c2-demo6_reponse.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                          
8
plus
25
plus
45
moins
41
plus
42
trouve
le nombre d'essai est :5
PS C:\Users\PAGE> le nombre minimal d'essis est de 7 car en utilisant la recherche dichotomique on divise a chaque fois par 2 et au bout de 7 essais on reussi a obtenir la partie ou on a de forte chance de trouver la valeur rechercher
PS C:\Users\PAGE> ./pain.exe
100
moins
50
moins
25
plus
30
plus
40
plus
43
moins
42
trouve
le nombre d'essai est :7
PS C:\Users\PAGE>  
