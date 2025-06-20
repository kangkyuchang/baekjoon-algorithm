#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	scanf("%s", str);
	int length = strlen(str);
    int lastIndex = length - 1;
    
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[lastIndex - i]) {
            printf("%d\n", 0);
            return 0;
        }
    }
    printf("%d\n", 1); 
    return 0;
}