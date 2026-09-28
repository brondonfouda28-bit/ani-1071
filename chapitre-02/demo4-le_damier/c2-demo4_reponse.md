#include<cstdio>
int main(){
    for(int x=1;x<=8;x++){
        for(int y=1;y<=8;y++){
            printf("%c",(x+y)%2==0? '#':' ');
        }
         printf("\n");
    }
   
    return 0;
}

PS C:\Users\PAGE> clang++ c2-demo4_reponse.cpp -o pain
PS C:\Users\PAGE> ./pain.exe                          
# # # # 
 # # # #
# # # # 
 # # # #
# # # # 
 # # # #
# # # # 
 # # # #
PS C:\Users\PAGE> 
