#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *cities[100];
    int n;

    printf("Enter number of cities: ");
    scanf("%d", &n);
    getchar(); 

    for (int i = 0; i < n; i++) {
        cities[i] = malloc(100 * sizeof(char));

        printf("Enter city name: ");
        fgets(cities[i], 100, stdin);

        cities[i][strcspn(cities[i], "\n")] = '\0'; 
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(cities[j], cities[j + 1]) > 0) {
                char *temp = cities[j];
                cities[j] = cities[j + 1];
                cities[j + 1] = temp;
            }
        }
    }

    printf("\nSorted cities:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", cities[i]);
        free(cities[i]);
    }

    return 0;
}