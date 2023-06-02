#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    
    while (num > 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    }
    
    if (originalNum == reversedNum) {
        return 1;  // Число является палиндромом
    } else {
        return 0;  // Число не является палиндромом
    }
}

int main() {
    int number = 12321;
    int result = isPalindrome(number);
    
    printf("%d\n", result);  // Вывод: 1
    
    number = 12345;
    result = isPalindrome(number);
    
    printf("%d\n", result);  // Вывод: 0
    
    return 0;
}

