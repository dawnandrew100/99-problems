#include <stdio.h>


int main() {
    int array_length;

    // Example for INT_ARRAY
    int my_int_array[] = {4, 3, 2, 1, 3, 5, 4, 56};
    array_length = sizeof(my_int_array) / sizeof(my_int_array[0]);
    printf("Length: %d\n", array_length);

    // Example for SHORT_ARRAY
    short my_short_array[] = {10, 40, 50, 4, 5, 6, 1, 65, 34, 53};
    array_length = sizeof(my_short_array) / sizeof(my_short_array[0]);
    printf("Length: %d\n", array_length);

    // Example for LONG_ARRAY
    long my_long_array[] = {5000000000, 10000000000, 15000000000, 20000000000};
    array_length = sizeof(my_long_array) / sizeof(my_long_array[0]);
    printf("Length: %d\n", array_length);

    // Example for LONG_LONG_ARRAY
    long long my_long_long_array[] = {2147483648, 50000000000000, 10000000000};
    array_length = sizeof(my_long_long_array) / sizeof(my_long_long_array[0]);
    printf("Length: %d\n", array_length);

    // Example for CHAR_ARRAY
    char my_char_array[] = {'a', 'C', 'a', 'B', 'B', 'L', 'm', 't', 'r'};
    array_length = sizeof(my_char_array) / sizeof(my_char_array[0]);
    printf("Length: %d\n", array_length);

    // Example for FLOAT_ARRAY
    float my_float_array[] = {3.14, 2.71, 1.61, 1.41, 1.73};
    array_length = sizeof(my_float_array) / sizeof(my_float_array[0]);
    printf("Length: %d\n", array_length);

    // Example for DOUBLE_ARRAY
    double my_double_array[] = {1e100, 1.7e308};
    array_length = sizeof(my_double_array) / sizeof(my_double_array[0]);
    printf("Length: %d\n", array_length);

    // Example for LONG_DOUBLE_ARRAY
    long double my_long_double_array[] = {1e800L, 1e1000L, 1e1500L, 3.7e4931L, 1e400L}; 
    array_length = sizeof(my_long_double_array) / sizeof(my_long_double_array[0]);
    printf("Length: %d\n", array_length);

    return 0;
}
