#include <stdio.h>

int main() {
    char text[100];
    int sum = 0;
    int i = 0;

    printf("Enter input: ");
    scanf("%[^\n]", text);

    while (text[i] != '\0') {
        if (text[i] >= '0' && text[i] <= '9') {
            sum += (text[i] - '0');
        }
        i++;
    }

    printf("Sum of digit char: %d\n", sum);

    return 0;
}
