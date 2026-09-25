#include<cstdio>
int main(){
    int b;
    printf("ecrire votre nombre: ");
    scanf("%d", &b);
    if (b % 2 == 0){
        printf("votre nombre est pair\n");
    }else{
        printf("votre nombre est impair\n");
    }
    if(b<0){
        printf("votre nombre est négatif\n");
    } else if(b>0){
         printf ("votre nombre est positif\n");
    }else{
        printf("votre nombre est null\n");
    }
    if( b<0){
         if( b%3==0){
        printf("votre nombre est divisible par trois\n");
    }else{
        printf("votre nombre n'est pas divisible par trois\n");
    }
     }
    if(b>0){
        if(b%3==0){
            printf("votre nombre est divisible par trois\n");
        }else{
            printf("votre nombre n'est pas divisible par trois\n");
        }
    }
   
return 0;
 }