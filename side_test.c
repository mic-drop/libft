#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello, World!";
    char str2[] = "Hello, World!";

    // Test memmove: should work correctly with overlapping
    memmove(str + 6, str, 12);
    printf("After memmove: %s\n", str);  // Expected: "HelloHello, World!"
    
    // Test memcpy: should result in undefined behavior (corrupt data)
    memcpy(str2 + 6, str2, 12);
    printf("After memcpy: %s\n", str2);  // May show corruption: "HelloHelHello World!"

    return 0;
}