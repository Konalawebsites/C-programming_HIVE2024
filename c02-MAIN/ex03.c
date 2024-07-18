int	main(void)
{
	char	str[] = "testboi";
	char	str2[] = "1324241";
	int		is_numeric;
	int		is_numeric2;

	is_numeric = ft_str_is_numeric(str);
	is_numeric2 = ft_str_is_numeric(str2);
	printf("this should be 0:" "%d\n", is_numeric);
	printf("this should be 1:" "%d\n", is_numeric2);
}
