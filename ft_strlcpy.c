unsigned int ft_strlcpy(char *dst, const char *src, unsigned int size)
{
    unsigned int i = 0;  
    unsigned int src_len = 0;


    while (src[src_len] != '\0')
    {
        src_len++;
    }

    
    if (size > 0)
    {
        while (src[i] != '\0' && i < (size - 1))
        {
            dst[i] = src[i];  
            i++;
        }
        dst[i] = '\0';
    }
    
    return src_len;
}
