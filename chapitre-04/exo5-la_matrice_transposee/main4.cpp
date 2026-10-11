#include<cstdio>
void transposer(const int src[], int dst[], int l, int c){
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            dst[j*l+i]=src[i*c+j];
        }
    }
}
int main(){
    int l, c;
    int src[10000];
    int dst[10000];
    if(scanf("%d %d", &l, &c)!=2 || l<0 || c<0){
        printf("AUCUN\n");
        return 0;
    }
    for(int i=0; i<l*c; i++){
        if(scanf("%d", &src[i])!=1){
            printf("AUCUN\n");
            return 0;
        }
    }
    transposer(src, dst, l, c);
    for(int i=0; i<c*l; i++){
        printf("%d", dst[i]);
        if(i<c*l-1){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
