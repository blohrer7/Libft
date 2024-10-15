void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    size_t i = 0;

    if (d > s && d < s + n)
    {
        i = n;
        while (i > 0)
        {
            i--;
            d[i] = s[i]; 
        }
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }

    return dest;
}
