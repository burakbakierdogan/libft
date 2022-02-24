#include  <stdio.h>

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int ft_isspace(int c)
{
    if (c == ' ' || c == '\f' || c == '\n'
        || c == '\r' || c == '\t' || c == '\v')
        return (1);
    return (0);
}

int ft_atoi(const char *str)
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;
    while (ft_isspace(str[i]) == 1)
        i++;
    if (str[i] != '-' && str[i] != '+' && ft_isdigit(str[i]) == 0)
        return (0);
    if (str[i] == '-')
        sign = -1;
    if (ft_isdigit(str[i]) == 0)
        i++;
    while (ft_isdigit(str[i]) == 1)
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

int main(void)
{
    printf("Real atoi: %d\n", ft_atoi("-999999999999999"));
    printf("My atoi: %d\n", ft_atoi("-999999999999999"));
    return 0;
}
