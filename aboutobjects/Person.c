//
//  Person.c
//  aboutobjects
//
//  Created by Wu,Lu on 10/21/13.
//  Copyright (c) 2013 Wu,Lu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "Person.h"
#include "Utilities.h"

static const char *NotAvailable = "N/A";
static const char *Separator = ", ";
static const char *AgeLabel = "Age: ";

Person *AllocPerson(void)
{
    Person *newPerson = calloc(1, sizeof(Person));
    (*newPerson).firstName = NULL;
    (*newPerson).lastName = NULL;
    (*newPerson).age = 0;
    
    return newPerson;
}

Person *InitPerson(Person *self, const char *firstName, const char *lastName, int age)
{
    (*self).firstName = CopyString(firstName);
    (*self).lastName = CopyString(lastName);
    (*self).age = age;
    
    return self;
}

const char *FirstNameFromPerson(Person *self)
{
    if (self)
    {
        return (*self).firstName;
    }
    
    return NotAvailable;
}

const char *LastNameFromPerson(Person *self)
{
    if (self) {
        return (*self).lastName;
    }
    return NotAvailable;
}

size_t DescriptionLength(Person *self)
{
    char ageString[4];
    sprintf(ageString, "%d", self->age);
    
    size_t length = 0;
    length += strlen(FirstNameFromPerson(self));
    length += strlen(Separator);
    length += strlen(LastNameFromPerson(self));
    length += strlen(Separator);
    length += strlen(AgeLabel);
    length += strlen(ageString);
    
    return length;
}

char *CreateDescriptionOfPerson(Person *self)
{
    char *description = malloc( sizeof(char) * (DescriptionLength(self)+1) );
    strcat(description, FirstNameFromPerson(self));
    strcat(description, Separator);
    strcat(description, LastNameFromPerson(self));
    strcat(description, Separator);
    strcat(description, AgeLabel);
    char ageString[4];
    sprintf(ageString, "%d", self->age);
    strcat(description, ageString);
    
    return description;
}

void PrintPerson(Person *self)
{
    printf("%s\n\n", CreateDescriptionOfPerson(self));
}
