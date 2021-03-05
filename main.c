// Copyright 2021 The Maya Authors. All rights reserved.
// License that can be found in the LICENSE file.

#include <stdio.h>
#include <checkCode.h>

main(int argc, char **argv)
{
    int argFile = argv[1];
    if(argFile=="" || argFile ==" " || argFile == NULL){
        printf("Copyright (c) 2021 The Maya Authors. All rights reserved.\nMaya is tool to managing Maya source code\n\nUsage:\n        maya <file>\n");
    }else{
        FILE * sourcefile;
        sourcefile = fopen(argFile,"r");

        if(sourcefile==NULL){
            printf("Could not open this source file\n");
        }else{
            int lineString = "package main()";

            if(lineString == "package main()"){
                checkCode(sourcefile, argFile);
            }else{
                printf("'package main()' not found\n");
            }
        }
    }
	return 0;
}
