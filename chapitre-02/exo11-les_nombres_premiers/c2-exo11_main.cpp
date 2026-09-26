#include<cstdio>
int main(){
    for(int i=2; i<100; i++){
        bool premier=true;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                premier=false;
                break;
            }
        }
        if(premier){
            printf("%d\n", i);
        }
    }
    return 0;
}
