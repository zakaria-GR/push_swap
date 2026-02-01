int	count_total_numbers(int ac, char **av)
{
	char	**split;
	int		i;
	int		j;
	int		count;

	i = 1;
	count = 0;
	while (i < ac)
	{
		split = ft_split(av[i], ' ');
		if (!split || !split[0])
			error_exit();
		j = 0;
		while (split[j])
		{
			count++;
			free(split[j++]);
		}
		free(split);
		i++;
	}
	return (count);
}
