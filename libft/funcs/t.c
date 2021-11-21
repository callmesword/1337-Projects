#include <stdio.h>
#include <stdlib.h>

size_t	hseb(const char *s, char c)
{
	size_t	i;
	size_t	ch7al;

	i = 0;
	ch7al = 0;
	while (s[i] != 0)
	{
		if (s[i] != 0 && s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			ch7al++;
			continue;
		}
		i++;
	}
	return ch7al + 1;

}

char	*ft_dupi(const char *s, int n)
{
	int i;
	char *m;
	
	i = 0;
	m = (char *)malloc(sizeof(char) * n);
	while (s[i])
	{
		m[i] = s[i];
		i++;
	}
	m[i] = '\0';
	return m;
}
char    **ft_split(char const *s, char c)
{
    char        **p;
    int            i;
    int            j;
    int            l;

    i = -1;
    l = 0;
    if (!s)
        return (NULL);
    **p = (char **)malloc(sizeof(char *) * hseb(s, c));
    if (!p)
        return (NULL);
    while (s[++i])
    {
        if (s[i] != c)
        {
            j = i;
            while (s[j] && s[j] != c)
                j++;
            p[l++] = ft_dupi(&s[i], j - i);
            i = j - 1;
        }
    }
    p[l] = 0;
    return (p);
}
int main()
{
  char s[] = "hello.world";
  char **p = ft_split(s, '.');
  printf("%s %s", p[0],p[1]);
}
