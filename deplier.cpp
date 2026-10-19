#include<cstdio>
void deplier(int i, int largeur, int& x, int& y){
    x=i%largeur;
    y=i/largeur;
}
void minMax(const int t[], int n, int& min, int& max){
    if(n<=0){
        return ;
    }
    min=t[0];
    max=t[0];
    for(int i=1; i<n; i++){
        if(t[i]<min){
            min=t[i];
        }
        if(t[i]>max){
            max=t[i];
        }
    }
}
bool diviser(int a, int b, int& quotient, int& reste){
    if(b==0){
        return false;
    }
    quotient=a/b;
    reste=a%b;
    return true;
}
int main(){
    int x, y;
    int largeur=40;
    int nums[]={0,34,40,85};
    for (int i=0; i<4; i++){
        deplier(nums[i], largeur, x, y);
        printf("%d %d\n", x, y);
    }
   
    int t[5]={12,7, 19, 3,15};
    int min, max;
    minMax(t, 5, min, max);
    printf("%d %d\n", min, max);
    int quotient, reste;
    if(diviser(10, 3, quotient, reste)){
        printf("%d %d\n", quotient, reste);
        quotient=999;
        reste=999;
        bool ok =diviser(10, 0, quotient, reste);
            printf("%d %d\n", quotient, reste);
    }

    return 0;
}