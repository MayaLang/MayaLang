#ifndef CHECKCODE_H
#define CHECKCODE_H
#include <stdio.h>

void checkCode(FILE * code, int file){
    char c;
    code = fopen(file, "r");
    while((c=fgetc(code))!=EOF){
        printf("%c",c);
    }
    fclose(code);
    return 0;
}

#endif // CHECKCODE_H
