#include "syscall.h"
#include "copyright.h"

#define maxlen 32
int 
main(){
    int len;
    char filename[maxlen+1];
    if(Create("text.txt")==-1){
        //printf("Error when create file");
    }else{
        //printf("Create file succesfull");
    }
    Halt();
}