int     main(void)
{
        int     a;
        int     b;
        int     div;
        int     mod;

        a = 9;
        b = 2;
        div = 0;
        mod = 0;
        ft_div_mod(a, b, &div, &mod);
        printf("%d\n%d\n", div, mod);
}
