#include<cstdio>
int longueur(char s[]){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}
bool estPalindrome(char s[]){
    int n=longueur(s);
    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-1-i]){
            char a=s[i];
            char b=s[n-1-i];
            if (a>='A' && a<='Z'){
                a=a+('a'-'A');
            }
            if (b>='A' && b<='Z'){
                b=b+('a'-'A');
            }
            if(a!=b){
                return false;
            }
        }
    }
    return true;
}
void renverserTexte(char s[]){
    int n=longueur(s);
    for(int i=0; i<n/2; i++){
        char temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
}
int main(){
    char s[201];
    if(scanf("%s", s)!=1){
        printf("AUCUN\n");
        return 0;
    }
    if(estPalindrome(s)){
        printf("oui\n");
    }else{
        printf("non\n");
    }
    renverserTexte(s);
    printf("%s\n", s);
    return 0;
}
