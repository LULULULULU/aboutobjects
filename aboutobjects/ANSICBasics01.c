//
//  ANSICBasics01.c
//  aboutobjects
//
//  Created by Wu,Lu on 10/21/13.
//  Copyright (c) 2013 Wu,Lu. All rights reserved.
//

#include <stdio.h>
#include "ANSICBasics.h"

float ConvertToFahrenheit(float celsiusTemperature)
{
    return celsiusTemperature * (F_SCALE/C_SCALE) + F_FREEZING_POINT;
}

void ShowFahrenheit(float celsiusTemperature)
{
    printf("Celsius temperature: %f\nfahrenheit temperature: %f\n\n",
           celsiusTemperature,
           ConvertToFahrenheit(celsiusTemperature));
}

void RunANSICBasics01(void)
{
    printf("RunANSICBasics01\n");
    ShowFahrenheit(-17.8);
    ShowFahrenheit(0.0);
    ShowFahrenheit(100.0);
    ShowFahrenheit(30);
}