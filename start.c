// Copyright 2021 The Maya Authors. All rights reserved.
// License that can be found in the LICENSE file.

#include<stdio.h>

main(int argc, char **argv)
{
    int argFile = argv[1];
    if(argFile=="" || argFile ==" " || argFile == NULL){
        printf("Bad argument\nUsing: maya main.maya\n");
    }else{
        FILE * sourcefile;
        sourcefile = fopen(argFile,"r");

        if(sourcefile==NULL){
            printf("Could not open this source file\n");
        }else{
            int package = "meine";
            if(package == "main"){
                int c;
                while((c = getc(sourcefile)) != EOF)
                putchar(c);
                fclose(sourcefile);
            }else{
                printf("Package must be 'main'\n");
            }
    }
    }





	return 0;
}
