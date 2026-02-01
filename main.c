int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		*arr;
	int		size;

	if (ac < 2)
		return (0);
	arr = parse_args(ac, av, &size);
	a = stack_from_array(arr, size);
	b = NULL;
	free(arr);
	if (is_sorted(a))
	{
		free_stack(a);
		return (0);
	}
	if (size == 2)
		sort_2(&a);
	else if (size == 3)
		sort_3(&a);
	else if (size <= 5)
		sort_5(&a, &b);
	else
		sort_big(&a, &b);
	free_stack(a);
	return (0);
}
