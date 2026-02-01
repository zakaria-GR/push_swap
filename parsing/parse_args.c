int	*parse_args(int ac, char **av, int *size)
{
	int	*arr;

	*size = count_total_numbers(ac, av);
	arr = malloc(sizeof(int) * (*size));
	if (!arr)
		error_exit();
	fill_numbers(arr, ac, av);
	if (has_duplicates(arr, *size))
		error_exit();
	return (arr);
}
