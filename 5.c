#include <stdio.h>

struct Car {
    char brand[20];
    char model[20];
    int year;
    float price;
};

int sumCarPrice(struct Car cars[], int n) {
    float sum = 0.0;
    
    for (int i = 0; i < n; i++) {
        sum += cars[i].price;
    }
    
    return sum;
}

int main() {
    struct Car cars[] = {
        {"Toyota", "Corolla", 2021, 25000.0},
        {"Honda", "Civic", 2022, 28000.0},
        {"Ford", "Mustang", 2020, 45000.0}
    };
    int n = sizeof(cars) / sizeof(cars[0]);
    
    float totalPrice = sumCarPrice(cars, n);
    
    printf("Суммарная стоимость: %.2f\n", totalPrice);
    
    return 0;
}

