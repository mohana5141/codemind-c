#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int temp = n;
    int even = 0;
    int odd = 0;
    int cnt = 0;

    while (temp != 0) {
        int digit = temp % 10;
        cnt++;
        temp /= 10; 
    }

    temp = n;  

    while (temp != 0) {
        int d = temp % 10;
        if (d % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        temp /= 10;  
    }

    if (even == cnt) {
        printf("Even");
    } else if (odd == cnt) {
        printf("Odd");
    } else {
        printf("Mixed");
    }

    return 0;
}
