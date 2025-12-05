#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;
    int size;

    printf("Enter max string size: ");
    scanf("%d", &size);
    getchar(); 

    str = (char*)malloc(size * sizeof(char));

    if (!str) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, size, stdin);

    printf("Reversed string: ");
    for (int i = size - 1; i >= 0; i--) {
        if (str[i] != '\0' && str[i] != '\n')
            printf("%c", str[i]);
    }

    free(str);
    return 0;
}
