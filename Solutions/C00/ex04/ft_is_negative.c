#include <unistd.h>

void ft_is_negative(int n)
{
    if (n < 0) 
        write(1, "N\n", 2);
    else if (n >= 0) 
        write(1, "P\n", 2);  
}

/*
int main()
{
    int n1 = -1;
    int n2 = -42;
    int n3 = 0;
    int n4 = 17;
    int n5 = 1993;
    ft_is_negative(n1);
    ft_is_negative(n2);
    ft_is_negative(n3);
    ft_is_negative(n4);
    ft_is_negative(n5);
    return (0);
}/*