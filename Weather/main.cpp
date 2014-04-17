#include <iostream>
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
using namespace std;

int main()
{
        WeatherData* weatherData = new WeatherData();

		CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(weatherData);

		weatherData->setMeasurements(80, 65);
		weatherData->setMeasurements(82, 70);
		weatherData->setMeasurements(78, 90);
}
