#include <unistd.h>

int ft_strlen(char *s)
{
        int i;

        i = 0;
        while(s[i])
                i++;
        return (i);
}

void rev_wsrt(char *str)
{
        int size;
        char *tmp;
        char *rev;
	
//	rev = NULL;
        tmp = str;
        size = ft_strlen(str) - 1;
        while (tmp[size])
        {
                if (tmp[size - 1] == ' ')
                {
                        rev = &tmp[size];
                        while (*rev != ' ' && *rev)
                        {
                                write(1, &*rev, 1);
                                rev++;
                        }
			write(1, " ", 1);
                }
                else if (size == 0)
                {
                        rev = &tmp[size];
                        while (*rev != ' ' && *rev)
                        {
                                write(1, &*rev, 1);
                                rev++;
			}
                }
                size--;
        }
}

int main(int ac, char **av)
{
        if (ac == 2)
                rev_wsrt(av[1]);
        write(1, "\n", 1);
        return (0);
}



