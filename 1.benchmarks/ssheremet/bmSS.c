#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ITERATIONS 100000000
#define a 10.234567f
#define b 20.345678f

void benchmark_floating_point_sum() {

    for (int i = 0; i < NUM_ITERATIONS; i++) {
        float sum = a + b;
    }
}
void benchmark_floating_point_diff() {

    for (int i = 0; i < NUM_ITERATIONS; i++) {
        float difference = a - b;
    }
}
void benchmark_floating_point_mul() {

    for (int i = 0; i < NUM_ITERATIONS; i++) {
        float product = a * b;
    }
}
void benchmark_floating_point_quo() {

    for (int i = 0; i < NUM_ITERATIONS; i++) {
        float quotient = a / b;
    }

}

int main() {
    benchmark_floating_point_sum();
    // benchmark_floating_point_mul();
    // benchmark_floating_point_diff();
    // benchmark_floating_point_quo();
    return 0;
    
}
