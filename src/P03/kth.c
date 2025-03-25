#include <stdio.h>

typedef enum {
    INT_ARRAY,
    SHORT_ARRAY,
    LONG_ARRAY,
    LONG_LONG_ARRAY,
    CHAR_ARRAY,
    FLOAT_ARRAY,
    DOUBLE_ARRAY,
    LONG_DOUBLE_ARRAY
} ArrayType;

void* get_Nth_element(ArrayType type, void* input_array, int arr_length, int pos);
int print_Nth_element(ArrayType type, void* input_array, int arr_length, int pos);

int main() {
    int res;
    int array_length;

    // Example for INT_ARRAY
    int my_int_array[] = {4, 3, 2, 1, 3};
    array_length = sizeof(my_int_array) / sizeof(my_int_array[0]);
    res = print_Nth_element(INT_ARRAY, my_int_array, array_length, 2);
    if(res == 1){
        printf("Index out of range.\n");
    }

    // Example for SHORT_ARRAY
    short my_short_array[] = {10, 20, 30, 40, 50};
    array_length = sizeof(my_short_array) / sizeof(my_short_array[0]);
    res = print_Nth_element(SHORT_ARRAY, my_short_array, array_length, 4);
    if(res == 1){
        printf("Index out of range.\n");
    }

    // Example for LONG_ARRAY
    long my_long_array[] = {2147483648, 5000000000, 10000000000, 15000000000, 20000000000};
    array_length = sizeof(my_long_array) / sizeof(my_long_array[0]);
    res = print_Nth_element(LONG_ARRAY, my_long_array, array_length, 3);
    if(res == 1){
        printf("Index out of range.\n");
    }

    // Example for LONG_LONG_ARRAY
    long long my_long_long_array[] = {2147483648, 50000000000000, 10000000000, 9223372036854775806, 5000000000000000};
    array_length = sizeof(my_long_long_array) / sizeof(my_long_long_array[0]);
    res = print_Nth_element(LONG_LONG_ARRAY, my_long_long_array, array_length, 0);
    if(res == 1){
        printf("Index out of range.\n");
    }

    // Example for CHAR_ARRAY
    char my_char_array[] = {'a', 'C', 'a', 'B', 'B', 'L', 'm'};
    array_length = sizeof(my_char_array) / sizeof(my_char_array[0]);
    res = print_Nth_element(CHAR_ARRAY, my_char_array, array_length, 1);
    if(res == 1){
        printf("Index out of range.\n");
    }

    // Example for FLOAT_ARRAY
    float my_float_array[] = {3.14, 2.71, 1.61, 1.41, 1.73};
    array_length = sizeof(my_float_array) / sizeof(my_float_array[0]);
    res = print_Nth_element(FLOAT_ARRAY, my_float_array, array_length, 4);
    if(res == 1){
        printf("Index out of range.\n");
    }

    // Example for DOUBLE_ARRAY
    double my_double_array[] = {3.5e38, 1e40, 1.5e40, 1e100, 1.7e308};
    array_length = sizeof(my_double_array) / sizeof(my_double_array[0]);
    res = print_Nth_element(DOUBLE_ARRAY, my_double_array, array_length, 0);
    if(res == 1){
        printf("Index out of range.\n");
    }

    // Example for LONG_DOUBLE_ARRAY
    long double my_long_double_array[] = {1e800L, 1e1000L, 1e1500L, 3.7e4931L, 1e400L}; 
    array_length = sizeof(my_long_double_array) / sizeof(my_long_double_array[0]);
    res = print_Nth_element(LONG_DOUBLE_ARRAY, my_long_double_array, array_length, 3);
    if(res == 1){
        printf("Index out of range.\n");
    }

    // Example for out of bounds
    int my_int_array2[] = {4, 3, 2, 1, 3};
    array_length = sizeof(my_int_array2) / sizeof(my_int_array2[0]);
    res = print_Nth_element(INT_ARRAY, my_int_array, array_length, 5);
    if(res == 1){
        printf("Index out of range.\n");
    }
    return 0;
}

void* get_Nth_element(ArrayType type, void* input_array, int arr_length, int pos){
    if(pos >= arr_length){
        return NULL;
    } else if(pos < 0) {
        return NULL;
    }

    switch(type){
        case INT_ARRAY:
            ;
            int* int_array = (int*)input_array;
            return &int_array[pos];

        case SHORT_ARRAY:
            ;
            short* short_array = (short*)input_array;
            return &short_array[pos];

        case LONG_ARRAY:
            ;
            long* long_array = (long*)input_array;
            return &long_array[pos];

        case LONG_LONG_ARRAY:
            ;
            long long* long_long_array = (long long*)input_array;
            return &long_long_array[pos];

        case CHAR_ARRAY:
            ;
            char* char_array = (char*)input_array;
            return &char_array[pos];

        case FLOAT_ARRAY:
            ;
            float* float_array = (float*)input_array;
            return &float_array[pos];

        case DOUBLE_ARRAY:
            ;
            double* double_array = (double*)input_array;
            return &double_array[pos];

        case LONG_DOUBLE_ARRAY:
            ;
            long double* long_double_array = (long double*)input_array;
            return &long_double_array[pos];
        }
    return NULL; // Return NULL if an invalid type is passed
}

int print_Nth_element(ArrayType type, void* input_array, int arr_length, int pos){
    if(pos >= arr_length){
        return 1;
    } else if(pos < 0) {
        return 1;
    }

    switch(type){
        case INT_ARRAY:
            ;
            int* res_int = (int*)get_Nth_element(type, input_array, arr_length, pos);
            printf("%d\n", *res_int);
            break;

        case SHORT_ARRAY:
            ;
            short* res_short = (short*)get_Nth_element(type, input_array, arr_length, pos);
            printf("%d\n", *res_short);
            break;

        case LONG_ARRAY:
            ;
            long* res_long = (long*)get_Nth_element(type, input_array, arr_length, pos);
            printf("%ld\n", *res_long);
            break;

        case LONG_LONG_ARRAY:
            ;
            long long* res_long_long = (long long*)get_Nth_element(type, input_array, arr_length, pos);
            printf("%lld\n", *res_long_long);
            break;

        case CHAR_ARRAY:
            ;
            char* res_char = (char*)get_Nth_element(type, input_array, arr_length, pos);
            printf("%c\n", *res_char);
            break;

        case FLOAT_ARRAY:
            ;
            float* res_float = (float*)get_Nth_element(type, input_array, arr_length, pos);
            printf("%f\n", *res_float);
            break;

        case DOUBLE_ARRAY:
            ;
            double* res_double = (double*)get_Nth_element(type, input_array, arr_length, pos);
            printf("%.5g\n", *res_double);
            break;

        case LONG_DOUBLE_ARRAY:
            ;
            long double* res_long_double = (long double*)get_Nth_element(type, input_array, arr_length, pos);
            printf("%.5Lg\n", *res_long_double);
            break;

        default:
            printf("Entered array type is unsupported\n");
    }
    return 0;
}
