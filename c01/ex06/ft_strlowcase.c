#include <unistd.h>

void ft_strlen(char *str)
{
    int i
    i = 0
    while (*str != '\0')
    {
        str++;
        i++ 
    }
    write(1, i, 2);
    
    
}

int main()
{
    char txt[] = "hola soy yowi";

    ft_strlen(txt);
    return(0);
}