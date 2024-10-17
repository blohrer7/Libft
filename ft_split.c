/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blohrer <blohrer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 06:30:44 by blohrer           #+#    #+#             */
/*   Updated: 2024/10/17 08:26:56 by blohrer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void free_split(char **result, int words) 
{
    int i = 0;
    while (i < words) 
    {
        free(result[i]);
        i++;
    }
    free(result);
}


int count_words(const char *s, char c) 
{
    int count = 0;
    int in_word = 0;

    while (*s != '\0') 
    {
        if (*s == c) 
        {
            in_word = 0;
        } 
        else if (in_word == 0) 
        {
            in_word = 1;
            count++;
        }
        s++;
    }
    return count;
}

char *copy_word(const char *start, size_t len) 
{
    size_t i;

    i = 0;
    char *word = (char *)malloc(len + 1);
    if (word == NULL) 
    {
        return NULL;
    }

    while (i < len) 
    {
        word[i] = start[i];
        i++;
    }
    word[len] = '\0';
    return word;
}



char **ft_split(const char *s, char c) 
{
    int i;
    int words;
    const char *start = s;
    i = 0;
    if (s == NULL) 
    {
        return NULL;
    }

    words = count_words(s, c);
    char **result = (char **)malloc((words + 1) * sizeof(char *));
    if (result == NULL) 
    {
        return NULL;
    }

    while (*s != '\0' && i < words) 
    {
        if (*s != c) 
        {
            size_t len = 0;
            start = s;
            while (*s != '\0' && *s != c) 
            {
                s++;
                len++;
            }

            result[i] = copy_word(start, len);
            if (result[i] == NULL) 
            {
                free_split(result, i);
                return NULL;
            }
            i++;
        } 
        else 
        {
            s++;
        }
    }
    result[i] = NULL;
    return result;
}
