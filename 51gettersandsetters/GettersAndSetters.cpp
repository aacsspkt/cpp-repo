#include <iostream>

class Stove
{
private:
    int temperature = 0;

public:
    int getTemperature()
    {
        return temperature;
    }

    void setTemperature(int temperature)
    {
        if (temperature < 0)
        {
            this->temperature = 0;
        }
        else if (temperature >= 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};

int main()
{
    Stove stove;

    // stove.temperature = 10000000;

    stove.setTemperature(-3);
    std::cout << stove.getTemperature() << "\n";

    stove.setTemperature(100);
    std::cout << stove.getTemperature() << "\n";

    stove.setTemperature(5);
    std::cout << stove.getTemperature() << "\n";
}