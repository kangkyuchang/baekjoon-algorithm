#include <stdio.h>

int main()
{
    const int chess[6] = {1, 1, 2, 2, 2, 8};
    int input[6];
    scanf("%d %d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5]);
    int length = sizeof(input) / sizeof(input[0]);
    for (int i = 0; i < length; i++) {
        int amount = chess[i] - input[i];
        input[i] = amount;
    }
    printf("%d %d %d %d %d %d", input[0], input[1], input[2], input[3], input[4], input[5]);
    return 0;
}