#include<cstdio>
int main() {
  int i, j;
 int ligne=7;
  int colonne=20;
  for(i=0;i<ligne;i++){
    for(j=0;j<colonne;j++){
      if( i==0 || i==ligne - 1 || j==0 || j==colonne -1){
        printf("#");
          }else{
        printf(" ");}}
        printf("\n");
      }
          
           return 0;
            }