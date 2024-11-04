#include <unistd.h>
#include <stdio.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    const unsigned char *ptr_s1; // Unsigned char is used to escape negative char values
    const unsigned char *ptr_s2; //This makes it deal with RAW bytes. instead of typed abstractions
    int i;
    int result;

    ptr_s1 = (const unsigned char *)str1;
    ptr_s2 = (const unsigned char *)str2;
    i = 0;

    while( i < n)
    {
        if(!(ptr_s1[i] == ptr_s2[i])){
            result = ptr_s1[i] - ptr_s2[i];
            return (result);

        }
        i++;
    }
    return (0);

}