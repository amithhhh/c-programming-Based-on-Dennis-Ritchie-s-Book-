#include <stdio.h>
#include <stdlib.h>  // for malloc and free
#include <string.h>  // for strlen

void my_strcpy(char *s, char *t);
void my_strcat(char *s, char *t);

int main() {
    char *string1 = "Hello World", *string2 = " Hello sun";
    
    // Allocate enough memory to hold both string1 and string2
    char *t = (char *)malloc(strlen(string1) + 1);  // +1 for null terminator
    
    if (t == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Copy string1 to t
    my_strcpy(string1, t);
    printf("%s\n", t);  // Output copied string

    // Reallocate memory for t to accommodate the concatenated string
    t = (char *)realloc(t, strlen(string1) + strlen(string2) + 1); // +1 for null terminator
    if (t == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Concatenate string2 to t
    my_strcat(t, string2);
    printf("%s\n", t);  // Output concatenated string

    // Free dynamically allocated memory
    free(t);

    return 0;
}

void my_strcpy(char *s, char *t) {
    while ((*t++ = *s++) != '\0') {
        // Copy characters from s to t until the null terminator is reached
    }
}

void my_strcat(char *s, char *t) {
    // Move s to the end of the string
    while (*s != '\0') {
        s++;
    }

    // Concatenate t to the end of s
    while ((*s++ = *t++) != '\0') {
        // Copy characters from t to s
    }
}
