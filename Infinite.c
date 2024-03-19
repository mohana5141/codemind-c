 #include <stdio.h>

int main() {
    int i;

    while (1) {
        scanf("%d", &i);
        
        if (i == -1) {
            break;
        }

        printf("%d
", i * i);
    }

    return 0;
}
