int main(void){
   int arr_size;
    printf("Enter The Size Of The Array: ");
    scanf("%d", &arr_size);

    int arr[arr_size];
    printf("Enter %d Elements: ", arr_size);
    for(int i = 0; i< arr_size; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal Array: ");
    for(int i = 0; i < arr_size; i++){
        printf("%d ", arr[i]);  
    }
    int largest = arr[0];

      int second = -2147483648;

    for (int i = 1; i < arr_size; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    printf("\n\nLargest Element: %d", largest);
    printf("\nSecond Largest Element: %d\n", second);

    return 0;
}