#include<cstdio>
#include<cstdlib>
long long pgcd(long long a, long long b){
a=llabs(a);
b=llabs(b);
if(a==0) return b;
if(b==0) return a;
while(b!=0){
    long long r=a%b;
    a=b;
    b=r;
}
return a;
}
long long ppcm(long long a, long long b){
a=llabs(a);
b=llabs(b);
if(a==0 || b==0) return 0;
return (a/pgcd(a,b))*b;
}
int main(){
    long long a,b;
    bool ok;
    do{
        ok=true;
        if(scanf("%lld %lld", &a, &b)!=2){
            ok=false;
            while(getchar()!='\n');
        }
    }while(!ok);
    printf("%lld\n",pgcd(a,b));
    printf("%lld\n",ppcm(a,b));
    return 0;
}   
