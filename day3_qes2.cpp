int missingNum(int *arr, int size) {
    int sum = 0;
    int sum1 = 0;

    // Expected sum of numbers from 1 to size+1
    sum = (size + 1) * (size + 2) / 2;

    // Actual sum of array elements
    for(int i = 0; i < size; i++){
        sum1 += arr[i];
    }

    return sum - sum1;  // missing number
}
