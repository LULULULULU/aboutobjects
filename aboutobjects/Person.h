//
//  Person.h
//  aboutobjects
//
//  Created by Wu,Lu on 10/21/13.
//  Copyright (c) 2013 Wu,Lu. All rights reserved.
//

#ifndef aboutobjects_Person_h
#define aboutobjects_Person_h

#include <stdlib.h>

typedef struct Person {
    char *firstName;
    char *lastName;
    int age;
} Person;

Person *AllocPerson(void);

Person *InitPerson(Person *self, const char *firstName, const char *lastName, int age);

const char *FirstNameFromPerson(Person *self);

const char *LastNameFromPerson(Person *self);

size_t DescriptionLength(Person *self);

char *CreateDescriptionOfPerson(Person *self);

void PrintPerson(Person *self);

#endif
