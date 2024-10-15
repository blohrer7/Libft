void *ft_memcpy(void *dest, const void *src, int n)
{
    unsigned char *d;
    const unsigned char *s;
    
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    
    int i = 0;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }

    return dest;
}
