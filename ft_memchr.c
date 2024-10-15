void *ft_memchr(const void *ptr, int value, size_t num) 
{
    const unsigned char *p = (const unsigned char *)ptr;
    size_t i = 0;

    while (i < num)
    {
        if (p[i] == (unsigned char)value)
        {
            return (void *)(p + i);
        }
        i++;
    }
    return (NULL);
}
