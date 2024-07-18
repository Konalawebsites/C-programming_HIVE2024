int     main(void)
{
        char    src[] = "blaablaasource";
        char    dest[20];
        int             n = 5;

        printf("dest: %s\n", dest);
        ft_strncpy(dest, src, n);
        printf("dest: %s\n", dest);
}

