//
//  Utilities.c
//  aboutobjects
//
//  Created by Wu,Lu on 10/21/13.
//  Copyright (c) 2013 Wu,Lu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *CopyString(const char *string)
{
    size_t size = strlen(string);
    char *newString = malloc(sizeof(char)*(size+1));
    strcpy(newString, string);
    
    return newString;
}