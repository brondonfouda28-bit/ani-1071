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


 PS C:\Users\PAGE> ./pain.exe                      
ecrire votre nombre: 0
votre nombre est pair
votre nombre est null
PS C:\Users\PAGE> ./pain.exe                      
ecrire votre nombre: -9
votre nombre est impair
votre nombre est n├®gatif
votre nombre est divisible par trois
PS C:\Users\PAGE> ./pain.exe
ecrire votre nombre: 12
votre nombre est pair
votre nombre est positif
votre nombre est divisible par trois
PS C:\Users\PAGE> ./pain.exe                      
ecrire votre nombre: 7
votre nombre est impair
votre nombre est positif
votre nombre n'est pas divisible par trois
PS C:\Users\PAGE> 
