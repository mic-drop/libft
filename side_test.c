#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination1[20];
    char destination2[20];

    printf("Original source: %s\n\n", source);

    // Using memcpy for non-overlapping regions
    memcpy(destination1, source, strlen(source) + 1);  // +1 to include null terminator
    printf("After memcpy (non-overlapping):\n");
    printf("Destination1: %s\n", destination1);

    // Using memmove for overlapping regions
    char overlapping_source[] = "Hello, World!";
    memmove(overlapping_source + 7, overlapping_source, 6);  // Overlap example
    overlapping_source[13] = '\0';  // Ensure null-termination
    printf("\nAfter memmove (overlapping):\n");
    printf("Overlapping Source: %s\n", overlapping_source);

    // Using memcpy for overlapping regions (unsafe behavior)
    char overlapping_source2[] = "Hello, World!";
    memcpy(overlapping_source2 + 7, overlapping_source2, 6);  // Overlap example
    overlapping_source2[13] = '\0';  // Ensure null-termination
    printf("\nAfter memcpy (overlapping, potential issues):\n");
    printf("Overlapping Source2: %s\n", overlapping_source2);

    return 0;
}
