#include<cstdio>
void echanger(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void echanger(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
void echanger(double* a, double* b){
    double temp = *a;
    *a = *b;
    *b = temp;
}
void echange(double& a, double& b){
    double temp = a;
    a = b;
    b = temp;
}
void echanger(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
void echange(char& a, char& b){
    char temp = a;
    a = b;
    b = temp;
}
int main(){
    
    int x = 1, y = 2;
    printf("%d %d\n", x, y);
    echanger(&x, &y);
    printf("%d %d\n", x, y);
    echanger(x, y);
    printf("%d %d\n", x, y);
    double c = 1.5, d = 2.5;
    printf("%f %f\n", c, d);
    echanger(&c, &d);
    printf("%f %f\n", c, d);
    echange(c, d);
    printf("%f %f\n", c, d);
    char e = 'x', f = 'y';
    printf("%c %c\n", e, f);
    echanger(&e, &f);
    printf("%c %c\n", e, f);
    echange(e, f);
    printf("%c %c\n", e, f);
    return 0;
}