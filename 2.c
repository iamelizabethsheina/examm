#include <stdio.h>

float computeAverage() {
    int num;
    int count = 0;
    int sum = 0;
    
    while (1) {
        scanf("%d", &num);
        
        if (num == 0) {
            break;
        }
        
        if (num % 10 == 3) {
            sum += num;
            count++;
        }
    }
    
    if (count == 0) {
        return 0.0;
    } else {
        return (float) sum / count;
    }
}

int main() {
    float average = computeAverage();
    
    printf("%.1f\n", average);
    
    return 0;
}

