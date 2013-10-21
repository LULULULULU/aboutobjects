//
//  ANSICBasics.h
//  aboutobjects
//
//  Created by Wu,Lu on 10/21/13.
//  Copyright (c) 2013 Wu,Lu. All rights reserved.
//

#ifndef aboutobjects_ANSICBasics_h
#define aboutobjects_ANSICBasics_h

#include <stdio.h>

#define F_FREEZING_POINT 32.0
#define F_BOILING_POINT 212.0
#define C_SCALE 100.0
#define F_SCALE (F_BOILING_POINT - F_FREEZING_POINT)

enum ConversionType {
    CelsiusToFahrenheit = 0,
    FahrenheitToCelsius = 1
};

void RunANSICBasics01(void);
void RunANSICBasics02(void);
float ConvertToFahrenheit(float celsiusTemperature);
float ConvertToCelsius(float fahrenheitTemperature);
float ConvertTemperature(float temperature, enum ConversionType type);
void ShowFahrenheit(float celsiusTemperature);
void ShowConversion(float temperature, enum ConversionType type);

#endif
