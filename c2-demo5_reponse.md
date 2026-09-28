#include<cstdio>
int main(){
    const char caracteres[]=".:-=+*#%@";
for(int y=0; y<4; y++){
    for(int x=0; x<60;x++){
        printf("%c",caracteres[x*9/60]);
    }
    printf("\n");
}
return 0;
 }

 PS C:\Users\PAGE> clang++ c2-demo5_main.cpp -o pain   
PS C:\Users\PAGE> ./pain.exe                       
.......:::::::------=======+++++++******#######%%%%%%%@@@@@@
.......:::::::------=======+++++++******#######%%%%%%%@@@@@@
.......:::::::------=======+++++++******#######%%%%%%%@@@@@@
.......:::::::------=======+++++++******#######%%%%%%%@@@@@@
PS C:\Users\PAGE> 