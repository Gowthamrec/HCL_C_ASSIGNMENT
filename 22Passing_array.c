#include<stdio.h>
#include<string.h>

int main(){
    char paragraph[1000];
    fgets(paragraph, sizeof(paragraph), stdin);
    char words[100][50];
    int counts[100] = {0};
    int unique_count = 0;
    char *token = strtok(paragraph, " \n");
    while (token != NULL) {
        char lower_token[50] = token;
        for(int i = 0; lower_token[i]; i++) {
            if (lower_token[i] >= 'A' && lower_token[i] <= 'Z') {
                lower_token[i] = lower_token[i] + 32;
            }
        }
        int found = 0;
        for (int i = 0; i < unique_count; i++) {
            if (strcmp(words[i], lower_token) == 0) {
                counts[i]++;
                found = 1;
                break;
            }
        }
        if (!found && unique_count < 100) {
            strcpy(words[unique_count], lower_token);
            counts[unique_count] = 1;
            unique_count++;
        }
        token = strtok(NULL, " \n");
    }
    for (int i = 0; i < unique_count; i++) {
        printf("%s: %d\n", words[i], counts[i]);
    }