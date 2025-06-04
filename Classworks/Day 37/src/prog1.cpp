#include <iostream>
#include <array>


int main() {
    std::array<std::array<float, 5>, 3> sensor_readings = {
    std::array<float, 5>{20.0, 21.0, 22.0, 20.5, 19.8},  // Sensor 1
    std::array<float, 5>{30.0, 30.2, 29.8, 30.1, 30.3},  // Sensor 2
    std::array<float, 5>{25.0, 26.0, 24.0, 25.5, 26.2}   // Sensor 3
    };
    float average;
    std::array<float, 3> calibrate;
    for (int i = 0;i < 3;i++) {
        float sum = 0;
        for (int j = 0;j < 5;j++) {
            switch (i)
            {
            case 0:
                sum += sensor_readings[i][j];
                average = sum / 5;
                break;
            case 1:
                sum += sensor_readings[i][j];
                average = sum / 5;
                break;
            case 2:
                sum += sensor_readings[i][j];
                average = sum / 5;
                break;
            default:
                break;
            }
        }
        calibrate[i] = average;
    }
    for (int i = 0;i < 3;i++){
        std::cout << "Average of Sensor " << i + 1  << ": " <<  calibrate[i] << std::endl;
    }

}



