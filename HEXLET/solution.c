#include <stdio.h>
#include <assert.h>

// BEGIN (write your solution here)
main() {

    float km, miles;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    km = lower;

    while (km <= upper) {

    miles = km * 0.621;
    printf("%2.2f : %2.2f\n", km, miles);
    km = km + step;
    }
}
// END

