le nombre de ligne en utilisant la methode utilser au chapitre 1 on a 7 lignes mais en utilisant celle du chap2 on a 3 lignes 
PS C:\Users\PAGE> clang++ c2-exo2_main.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                      
####################
#                  #
#                  #
#                  #
#                  #
#                  #
####################

#include<cstdio>
int main() {
  int i, j;
 int ligne=12;
  int colonne=40;
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



            PS C:\Users\PAGE> clang++ c2-exo1_main.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                      
########################################
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
########################################
PS C:\Users\PAGE> 