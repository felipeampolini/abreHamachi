#include <stdio.h>
#include <stdlib.h>

int main(){
    system("net stop hamachi2svc");
    system("net start hamachi2svc");
}
