#include<cstdio>
int main(){
    int a, b;
    printf("entrer deux nombres:");
    scanf("%d%d", &a,&b);
    int cmp=0;
    while(b!=0){
        int r= a%b;
        a=b;
        b=r;
        cmp++;
    }
    printf("le pgcd est %d\n", a);
    printf("le nombre de tours est %d\n", cmp);
    return 0;
}

PS C:\Users\PAGE> clang++ c2-exo18_main.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                       
entrer deux nombres:1071 462
le pgcd est 21
le nombre de tours est 3
PS C:\Users\PAGE> ./pain.exe
entrer deux nombres:1000000 1
le pgcd est 1
le nombre de tours est 1
PS C:\Users\PAGE> 


#include<cstdio>
int main (){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int cmp=0;
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
        cmp++;
    }
    printf("le pgdc est %d\n", a);
    printf("le nombre d'essais est %d\n", cmp);
    return 0;
}


PS C:\Users\PAGE> clang++ c2-exo18_main.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                       
1071
462
le pgdc est 21
le nombre d'essais est 11
PS C:\Users\PAGE> ./pain.exe
1000000
1
le pgdc est 1
le nombre d'essais est 999999
PS C:\Users\PAGE> 
On constate qu'avec la methode d'Euclide on obtient le pgcd avec moi d'essais qu'en utilisant la methode des soustractions successives par conséquent  c'est la méthode d'Euclide qui est la plus rapide pour détermminer le pgcd 
