pour a=3
b=a++ + 1
b= (3+1)+1 car ( a++ <=> a = a+1) donc je fais d'abord b= 3+1=4 et a=4
b=4
c=++a * 2
c=(1+4)*2 car (++a <=> 1+a=a) donc: c=10 et a=5
c=10
d=a-- -  --a
d= (5-1)- (5-1-1) car (--a <=> a-1=a) et (a-- <=> a=a-1) donc on aura : d= 2 et a=3
Donc a=4;b=4;c=10;d=2


#include<cstdio>
int main() {
    int a = 3;
int b = a++ + 1;
int c = ++a * 2;
int d = a-- - (--a);
printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
return 0;
}

c2-exo8_main.cpp:6:10: warning: multiple unsequenced modifications to 'a' [-Wunsequenced]
    6 | int d = a-- - (--a);
      |          ^     ~~
1 warning generated.
PS C:\Users\PAGE> ./pain.exe                      
a = 3, b = 4, c = 10, d = 2
PS C:\Users\PAGE> 
