#include <unistd.h>

char *ft_strchr(const char *str, int search_str)
{
    char *ptr;

    ptr = NULL;
   while(*str)
   {
    if(*str == search_str){
        ptr =(char *) str;
        return ptr;
    }
   str++;
   }
   return ptr; 
}