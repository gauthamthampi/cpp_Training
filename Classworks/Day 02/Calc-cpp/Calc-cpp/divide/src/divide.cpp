#include "divide.h"

float divide(int a, int b) {
    if (b == 0) return 0;
    return static_cast<float>(a) / b;
}
