//
//  Pointers.c
//  aboutobjects
//
//  Created by Wu,Lu on 10/21/13.
//  Copyright (c) 2013 Wu,Lu. All rights reserved.
//

#include <stdio.h>
#include "Utilities.h"
#include "Person.h"

void RunPointers01()
{
    PRINT_FUNCTION_NAME;
    Person *p1 = AllocPerson();
    
    printf("p1.firstName:%s\np1.lastName:%s\np1.age:%d\n\n",
           (*p1).firstName,
           (*p1).lastName,
           (*p1).age
           );
    
    InitPerson(p1, "Sue", "Wilson", 29);
    
    printf("p1.firstName:%s\np1.lastName:%s\np1.age:%d\n",
           (*p1).firstName,
           (*p1).lastName,
           (*p1).age
           );
    
    char *description = CreateDescriptionOfPerson(p1);
    
    printf("%s\n\n", description);
    
    Person *p2 = InitPerson(AllocPerson(), "Fred", "Smith", 32);
    
    printf("p2.firstName:%s\np2.lastName:%s\np2.age:%d\n",
           (*p2).firstName,
           (*p2).lastName,
           (*p2).age
           );
    
    free((*p1).firstName);
    free((*p1).lastName);
    free(p1);
    free((*p2).firstName);
    free((*p2).lastName);
    free(p2);
    free(description);
    printf("\n");
}

void RunPointers02()
{
    PRINT_FUNCTION_NAME;
    
    Person *p2 = InitPerson(AllocPerson(), "Fred", "Smith", 32);
    
    printf("p2.firstName:%s\np2.lastName:%s\np2.age:%d\n",
           (*p2).firstName,
           (*p2).lastName,
           (*p2).age
           );
    
    char *description = CreateDescriptionOfPerson(p2);
    printf("%s\n\n", description);
    free((*p2).firstName);
    free((*p2).lastName);
    free(p2);
    free(description);
    printf("\n");
}

void RunPointers03()
{
    PRINT_FUNCTION_NAME;
    Person *p3 = InitPerson(AllocPerson(), "Jason", "", 32);
    PrintPerson(p3);
}

void RunPointers04()
{
    PRINT_FUNCTION_NAME;
}

void RunPointers05()
{
    PRINT_FUNCTION_NAME;
}