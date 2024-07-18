int	main(void)
{
	int		test1;
	int		test2;
	int		test3;
	int		test4;
	int		test5;
	int		test6;

	char	strtest1[] = "whattafak";
	char	strtest2[] = "SSSSSSS";
	char	strtest3[] = "fffff\0";
	char	strtest4[] = " ";
	char    strtest5[] = "\x7F";
	char    strtest6[] = "";


	test1 = ft_str_is_printable(strtest1);
	test2 = ft_str_is_printable(strtest2);
	test3 = ft_str_is_printable(strtest3);
        test4 = ft_str_is_printable(strtest4);
	test5 = ft_str_is_printable(strtest5);
	test6 = ft_str_is_printable(strtest6);

	printf("this should be 1:" "%d\n", test1);
	printf("this should be 1:" "%d\n", test2);
	printf("this should be 1:" "%d\n", test3);
	printf("this should be 0:" "%d\n", test4);
	printf("this should be 0:" "%d\n", test5);
	printf("this should be 1:" "%d\n", test6);
}
