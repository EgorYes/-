#include "calc.h"

int calc(int N) {
    if (N == 0) {
        return 0;
    }

    int result = 1;
    for (int i = 1; i < N; ++i) {
        result = result * 5 + 1 - result / 10;
    }

    return result;
}
