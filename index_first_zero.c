#include <stdio.h>
#include "index_first_zero.h"

int index_first_zero(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == 0) {
            return i;
        }
    }
    return -1;
}