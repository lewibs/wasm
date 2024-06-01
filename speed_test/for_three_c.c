#include <emscripten.h> // note we added the emscripten header

int EMSCRIPTEN_KEEPALIVE for_three_c(int n) {
    int val = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                val++;
            }
        }
    }
    return val;
}