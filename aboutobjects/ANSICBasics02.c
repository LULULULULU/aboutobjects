//
//  ANSICBasics02.c
//  aboutobjects
//
//  Created by Wu,Lu on 10/21/13.
//  Copyright (c) 2013 Wu,Lu. All rights reserved.
//

#include <stdio.h>
#include "ANSICBasics.h"

void RunANSICBasics02(void)
{
    printf("RunANSICBasics02\n");
    ShowConversion(-17.8, CelsiusToFahrenheit);
    ShowConversion(0.0, CelsiusToFahrenheit);
}

float ConvertTemperature(float temperature, enum ConversionType type)
{
    if (type == CelsiusToFahrenheit) {
       return ConvertToFahrenheit(temperature);
    }
    else if (type == FahrenheitToCelsius) {
        return ConvertToCelsius(temperature);
    }
    
    return 0;
}

void ShowConversion(float temperature, enum ConversionType type)
{
    if (type == CelsiusToFahrenheit) {
        printf("Celsius temperature:%f\n fahrenheit temperature:%f\n\n",
               temperature,
               ConvertTemperature(temperature, type));
    }
    else if (type == FahrenheitToCelsius)
    {
        printf("Fahrenheit temperature:%f\n celsius temperature:%f\n\n",
               temperature,
               ConvertTemperature(temperature, type));
    }
}

float ConvertToCelsius(float fahrenheitTemperature)
{
    return (fahrenheitTemperature - F_FREEZING_POINT) * (C_SCALE / F_SCALE);
}