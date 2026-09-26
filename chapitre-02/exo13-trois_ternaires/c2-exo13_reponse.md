#include<cstdio>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    a<b ? printf("plus petit") : printf("plus grand");
    a%2 == 0? printf("  pairs\n") : printf("  impair\n");
    return 0;
}

PS C:\Users\PAGE> clang++ c2-exo13_reponse.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                          
2
4
plus petit  pairs
PS C:\Users\PAGE> ./pain.exe
9
6
plus grand  impair
PS C:\Users\PAGE> 



#include<cstdio>
int main(){
    int n;
    scanf("%d", &n);
    n==1? printf("le nombre d'objets est 1\n"): printf("le nombre d'objets est %d\n", n);
    return 0;
}

PS C:\Users\PAGE> clang++ c2-exo13_reponse.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                          
1
le nombre d'objets est 1
PS C:\Users\PAGE> ./pain.exe
8
le nombre d'objets est 8
PS C:\Users\PAGE> 
