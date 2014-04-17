#ifndef OBSERVER_H
#define OBSERVER_H


class Observer
{
    public:
        Observer();
        virtual ~Observer();
        virtual void update(float temp, float humidity)=0;
    protected:
    private:
};

#endif // OBSERVER_H
