#include<cstdio>
#include<cstring>
int somme (const int* t, int n){
    int s=0;
    const int* fin=t+n;
    for(const int* p=t; p<fin; p++){
        s+=*p;
    }
    return s;
    }
    int maximum (const int* t, int n){
        if(n<=0){
            return 0;
        }
        int m = *t;
        const int* fin=t+n;
        for(const int* p=t+1; p<fin; p++){
            if(*p>m){
                m=*p;
            }
        }
        return m;
    }
    void inverser(int* t, int n){
        int* debut=t;
        int* fin=t+n-1;
        while(debut<fin){
            int temp=*debut;
            *debut=*fin;
            *fin=temp;
            debut++;
            fin--;
        }
    }
    int longueur(const char* s){
        const char* p=s;
        while(*p!='\0'){
            p++;
        }
        return static_cast<int>(p-s);
    }
    int main(){
        int a[]={12, 7, 19, 3, 15};
        printf("%d\n", somme(a, 5));
        printf("%d\n", maximum(a, 5));
        int b[]={1, 2, 3, 4, 5};
        inverser(b, 5);
        for(int i=0; i<5; i++){
            printf("%d ", *(b+i));
        }
        printf("\n");
        const char* s="bonjour";
        const char* t="Yaoundé";
        printf("%d %zu\n", longueur(s), strlen(s));
        printf("%d %zu\n", longueur(t), strlen(t));
        return 0;
    }

