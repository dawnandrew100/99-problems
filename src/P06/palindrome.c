#include <stdio.h>

typedef enum{
    TRUE = 0,
    FALSE = 1
} bool;

int find_palindrome(void *input_array, int arr_len, size_t element_size);

int main(){
    char palindrome[] = {'x','a','m','a','x'};
    int length = sizeof(palindrome)/sizeof(palindrome[0]);
    size_t byte_size = sizeof(palindrome[0]);
    bool res = find_palindrome(palindrome, length, byte_size);
    printf("%d\n", res); // 0 aka True

    char not_a_palindrome[] = {'b', 'a', 'm', 'a', 'a'};
    int not_a_length = sizeof(not_a_palindrome)/sizeof(not_a_palindrome[0]);
    size_t not_a_byte_size = sizeof(not_a_palindrome[0]);
    bool not_a_res = find_palindrome(not_a_palindrome, not_a_length, not_a_byte_size);
    printf("%d\n", not_a_res); // 1 aka False

    int num_palindrome[] = {1, 3, 10, 3, 1};
    int num_length = sizeof(num_palindrome)/sizeof(num_palindrome[0]);
    size_t num_byte_size = sizeof(num_palindrome[0]);
    bool num_res = find_palindrome(num_palindrome, num_length, num_byte_size);
    printf("%d\n", num_res); // 0 aka True

    return 0;
}

int find_palindrome(void *input_array, int arr_len, size_t element_size){
    char* start = (char*)input_array; //pointer to start of array
    char* end = start + (arr_len - 1) * element_size; //pointer to end of array

    for(int i = 0; i < arr_len/2; i++){
        for (size_t j = 0; j < element_size; j++){
            // scan byte by byte to accomodate all data types
            if(start[j] != end[j]){
                return FALSE; // not a palindrome
            }
        }
        start += element_size;
        end -= element_size;
    }
    return TRUE; // is a palindrome
}
