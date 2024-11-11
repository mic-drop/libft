#include <unistd.h>

void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
    size_t i;
    char *ptr_src;
    char *ptr_dest;

    i = 0;
    ptr_src = (char *)src_str;
    ptr_dest = (char *)dest_str;
    if(numBytes == 0 || ptr_dest == ptr_src)
        return dest_str;

    if(ptr_dest < ptr_src)
    {
        while(i < numBytes)
        {
            ptr_dest[i] = ptr_src[i];
            i++;
        }
 
    } else {
        while (numBytes > 0)
        {
            ptr_dest[numBytes - 1] = ptr_src[numBytes - 1];
            numBytes--;
        }

    }    
    return (ptr_dest);
}