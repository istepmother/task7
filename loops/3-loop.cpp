#include <stdio.h>


int addition(int numbers[], int length){
    int total_sum = 0;
    for (int idx = 0; idx < length; idx++){
        total_sum += numbers[idx];  
    }
    return total_sum;
}

int main()
{
    int array[] = {2, 3};
    int array_length = sizeof(array) / sizeof(array[0]);
    int sum = addition(array, array_length);
    printf("%d\n", sum);
}
