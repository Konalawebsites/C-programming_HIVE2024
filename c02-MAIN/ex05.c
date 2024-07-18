int	main(void)
{
	int		test1;
	int		test2;
	int		test3;
	int		test4;

	char	strtest1[] = "whattafak";
	char	strtest2[] = "SSSSSSS";
	char	strtest3[] = "&&^%#%#$";
	char	strtest4[] = "$$$$$$";
	
	test1 = ft_str_is_uppercase(strtest1);
	test2 = ft_str_is_uppercase(strtest2);
	test3 = ft_str_is_uppercase(strtest3);
        test4 = ft_str_is_uppercase(strtest4);

	printf("this should be 0:" "%d\n", test1);
	printf("this should be 1:" "%d\n", test2);
	printf("this should be 0:" "%d\n", test3);
	printf("this should be 0:" "%d\n", test4);
}
