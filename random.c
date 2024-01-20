#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char randchar();
char randchar(){
    char rchar = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[random () % 26];

    return rchar;
}

