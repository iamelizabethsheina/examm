#include <stdio.h>

void changeMin(int arr[], int n) {
    int min1 = arr[0];  // Значение первого минимального элемента
    int min2 = arr[0];  // Значение второго минимального элемента
    int index1 = 0;     // Индекс первого минимального элемента
    int index2 = 0;     // Индекс второго минимального элемента
    
    // Находим первый и второй минимальные элементы и их индексы
    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            index2 = index1;
            min1 = arr[i];
            index1 = i;
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
            index2 = i;
        }
    }
    
    // Переставляем значения местами
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int main() {
    int arr[] = {3, 2, 1, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    changeMin(arr, n);
    
    // Выводим измененный массив
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
