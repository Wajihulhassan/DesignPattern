#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include <vector>
#include "Observer.h"
#include "Subject.h"
class WeatherData: public Subject
{
    public:
        WeatherData();
        virtual ~WeatherData();
        std::vector<Observer*> observers;
        float temperature;
        float humidity;



	void registerObserver(Observer* o) {
		observers.push_back(o);
	}

	void removeObserver(Observer* o) {
        //
	}

	void notifyObservers() {
		for (int i = 0; i < observers.size(); i++) {
			Observer* observer = observers.at(i);
			observer->update(temperature, humidity);
		}
	}

	void measurementsChanged() {
		notifyObservers();
	}

	void setMeasurements(float temperature, float humidity) {
		this->temperature = temperature;
		this->humidity = humidity;
		measurementsChanged();
	}

    protected:
    private:
};

#endif // WEATHERDATA_H
