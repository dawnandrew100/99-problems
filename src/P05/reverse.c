# include <stdio.h>

void reverse_array(void* input_list, int list_len, size_t element_size);

int main(){
    // Example for Char Array
    char my_char_list[] = {'a', 'b', 'c', 'd'};
    int char_length = sizeof(my_char_list)/sizeof(my_char_list[0]);
    size_t char_byte_size = sizeof(my_char_list[0]);
    printf("Original: \n");
    for(int i = 0; i < char_length; i++){
        printf("%c ", my_char_list[i]);
    }
    printf("\n");
    reverse_array(my_char_list, char_length, char_byte_size);
    printf("Reversed: \n");
    for(int i = 0; i < char_length; i++){
        printf("%c ", my_char_list[i]);
    }
    printf("\n\n");
    // Example for Short Array
    short my_short_list[] = {1, 4, 9, 10};
    int short_length = sizeof(my_short_list)/sizeof(my_short_list[0]);
    size_t short_byte_size = sizeof(my_short_list[0]);
    printf("Original: \n");
    for(int i = 0; i < short_length; i++){
        printf("%d ", my_short_list[i]);
    }
    printf("\n");
    reverse_array(my_short_list, short_length, short_byte_size);
    printf("Reversed: \n");
    for(int i = 0; i < short_length; i++){
        printf("%d ", my_short_list[i]);
    }
    printf("\n\n");
    // Example for Long Double Array
    long double my_long_double_array[] = {1e800L, 1e1000L, 1e1500L, 3.7e4931L, 1e400L};
    int long_double_length = sizeof(my_long_double_array)/sizeof(my_long_double_array[0]);
    size_t long_double_byte_size = sizeof(my_long_double_array[0]);
    printf("Original: \n");
    for(int i = 0; i < long_double_length; i++){
        printf("%.5Lg ", my_long_double_array[i]);
    }
    printf("\n");
    reverse_array(my_long_double_array, long_double_length, long_double_byte_size);
    printf("Reversed: \n");
    for(int i = 0; i < long_double_length; i++){
        printf("%.5Lg ", my_long_double_array[i]);
    }
    printf("\n\n");
    return 0;
}

void reverse_array(void* input_list, int list_len, size_t element_size) {
    char* start = (char*)input_list; //pointer to start of array
    char* end = start + (list_len - 1) * element_size; //pointer to end of array

    for (int i = 0; i < list_len/2; i++) {
        // Swap the elements
        for (size_t j = 0; j < element_size; j++) {
            // Swap byte-by-byte for safety
            char temp = start[j];
            start[j] = end[j];
            end[j] = temp;
        }
    start += element_size;
    end -= element_size;
    }
}
