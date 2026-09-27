#include<cstdio>
int main(){
    int n,a,b;
    scanf("%d%d%d", &a, &b, &n);
    a>b? printf("a est plus grand que b\n"): printf("b est plus grand que a\n");
    a%2==0? printf("a est pair\n"): printf("a est impair\n");
    n==1? printf("le nombre d'objets est 1\n"): printf("le nombre d'objets est %d\n", n);
    return 0;
}


PS C:\Users\PAGE> clang++ c2-exo13_reponse.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                          
10
8
25
a est plus grand que b
a est pair
le nombre d'objets est 25
PS C:\Users\PAGE> 
