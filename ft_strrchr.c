char *ft_strrchr(const char *str, int c)
{
    const char *last_occurrence = NULL;

    while (*str != '\0')
    {
        if (*str == (char)c)
        {
            last_occurrence = str;
        }
        str++;
    }

    if (c == '\0')
    {
        return (char *)str;
    }
    return (char *)last_occurrence;

}