int	main(void)
{
	char	strtest[] = "DOGE";
	char	strtest2[] = "CattoBatto440)(((($2@$%#%^(@!!";

	printf("%s\n", strtest);
	printf("%s\n", strtest2);
	ft_strlowcase(strtest);
	ft_strlowcase(strtest2);
	printf("%s\n", strtest);
	printf("%s\n", strtest2);
}
