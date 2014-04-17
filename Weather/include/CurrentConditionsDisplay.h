#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include <iostream>
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
class CurrentConditionsDisplay: public Observer , public DisplayElement
{
    public:
        CurrentConditionsDisplay(Subject* weatherData);
        virtual ~CurrentConditionsDisplay();
        float temperature;
        float humidity;
        Subject* weatherData;

	void update(float temperature, float humidity) {
		this->temperature = temperature;
		this->humidity = humidity;
		display();
	}

    void display() {
		std::cout<< "Current conditions: " << temperature << "F degrees and " << humidity << "% humidity" << std::endl;
	}
    protected:
    private:
};

#endif // CURRENTCONDITIONSDISPLAY_H
