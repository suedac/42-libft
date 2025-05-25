#include "libft.h"

static char *str_start(char const *s1, char const *set)
{
    while (*s1 && ft_strchr((char *)set, *s1))
        s1++;
    return (char *)s1;
}

static char *str_end(char const *s1, char const *set)
{
    const char *end = s1 + ft_strlen((char *)s1);
    while (end > s1 && ft_strchr((char *)set, *(end - 1)))
        end--;
    return (char *)end;
}

char *ft_strtrim(char const *s1, char const *set)
{
    if (!s1 || !set)
        return 0;

    // Handle empty set
    if (*set == '\0')
        return ft_strdup(s1);

    char *start = str_start(s1, set);
    char *end = str_end(s1, set);

    size_t len = end - start;
    char *trimmed = malloc(len + 1);
    if (!trimmed)
        return 0;

    ft_strlcpy(trimmed, start, len + 1);
    return trimmed;
}
#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set);

int main()
{
    // Test 1: Normal case with leading and trailing characters to trim
    char *s1 = "   Hello, world!   ";
    char *set = " ";
    char *result = ft_strtrim(s1, set);
    printf("Test 1: Normal case\n");
    printf("Input: \"%s\", Set: \"%s\"\n", s1, set);
    printf("Output: \"%s\"\n\n", result);
    free(result);

    // Test 2: No characters to trim
      s1 = "Hello, world!";
    set = " ";
    result = ft_strtrim(s1, set);
    printf("Test 2: No characters to trim\n");
    printf("Input: \"%s\", Set: \"%s\"\n", s1, set);
    printf("Output: \"%s\"\n\n", result);
    free(result);

    // Test 3: Trim all characters
    s1 = "aaaaaaa";
    set = "a";
    result = ft_strtrim(s1, set);
    printf("Test 3: Trim all characters\n");
    printf("Input: \"%s\", Set: \"%s\"\n", s1, set);
    printf("Output: \"%s\"\n\n", result);
    free(result);

    // Test 4: Empty input string
  s1 = "";
    set = " ";
    result = ft_strtrim(s1, set);
    printf("Test 4: Empty input string\n");
    printf("Input: \"%s\", Set: \"%s\"\n", s1, set);
    printf("Output: \"%s\"\n\n", result);
    free(result);

    // Test 5: Empty set
    s1 = "Hello, world!";
    set = "";
    result = ft_strtrim(s1, set);
    printf("Test 5: Empty set\n");
    printf("Input: \"%s\", Set: \"%s\"\n", s1, set);
    printf("Output: \"%s\"\n\n", result);
    free(result);

    // Test 6: Input string and set are the same
    s1 = "Hello, world!";
    set = "Hello, world!";
    result = ft_strtrim(s1, set);
    printf("Test 6: Input string and set are the same\n");
    printf("Input: \"%s\", Set: \"%s\"\n", s1, set);
    printf("Output: \"%s\"\n\n", result);
    free(result);

    // Test 7: Set contains characters not in the input string
    s1 = "Hello, world!";
    set = "xyz";
    result = ft_strtrim(s1, set);
    printf("Test 7: Set contains characters not in the input string\n");
    printf("Input: \"%s\", Set: \"%s\"\n", s1, set);
    printf("Output: \"%s\"\n\n", result);
    free(result);

    // Test 8: Input string contains only characters in the set
    s1 = "aaa";
    set = "a";
    result = ft_strtrim(s1, set);
    printf("Test 8: Input string contains only characters in the set\n");
    printf("Input: \"%s\", Set: \"%s\"\n", s1, set);
    printf("Output: \"%s\"\n\n", result);
    free(result);

    // Test 9: Input string is NULL
   s1 = 0;
    set = " ";
    result = ft_strtrim(s1, set);
    printf("Test 9: Input string is NULL\n");
    printf("Input: (NULL), Set: \"%s\"\n", set);
    printf("Output: \"%s\"\n\n", result);
    free(result);

    // Test 10: Set is NULL
    s1 = "Hello, world!";
    set = 0;
    result = ft_strtrim(s1, set);
    printf("Test 10: Set is NULL\n");
    printf("Input: \"%s\", Set: (NULL)\n", s1);
    printf("Output: \"%s\"\n\n", result);
    free(result);
    return 0;
}