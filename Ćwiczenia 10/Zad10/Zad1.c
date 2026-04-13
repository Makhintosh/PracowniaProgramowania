void findMaxValue(int numbers[], unsigned int size){
    int max = numbers[0];
    for (int i = 1; i < size; i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    printf("Najwieksza: %d\n", max);
}
