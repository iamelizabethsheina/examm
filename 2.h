#include <stdio.h>

float sumFoo(int n) {
    float sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (i * (i + 1));
    }
    
    return sum;
}

int main() {
    int n = 5;
    float result = sumFoo(n);
    
    printf("Сумма: %f\n", result);
    
    return 0;
}
