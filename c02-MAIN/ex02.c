int	main(void)
{
	char	str[] = "aaaab";
	char	str2[] = "ss$$$aa////b";
	int		is_alpha;
	int		is_alpha2;

	is_alpha = ft_str_is_alpha(str);
	printf("%d\n", is_alpha);
	is_alpha2 = ft_str_is_alpha(str2);
	printf("%d\n", is_alpha2);
}
