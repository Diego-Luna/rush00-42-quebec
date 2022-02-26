#include <unistd.h>

void    ft_putchar(char c)
    {
    write(1, &c, 1);
}
int ft_choose_char(int lengh, int height)
{
    char o;
    char l;
    char t;
    char s;

    l = 124;
    o = 111;
    t = 45;
    s = 32;
    ft_putchar(o);
}
void    ft_print_table(int len, int hei)
{
    int i;
    int ii;

    ii = 0;
    while (ii < hei)
    {
        i = 0;
        while (i < len)
        {
            ft_choose_char(i, ii);
            i++;
        }
        ft_putchar(10);
        ii++;
    }
}
int	main(void)
{
    int largeur;
    int hauteur;

    largeur = 20;
    hauteur = 10;
    ft_print_table(largeur, hauteur);
}
