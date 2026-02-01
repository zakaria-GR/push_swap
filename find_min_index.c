int	find_min_index(t_stack *a)
{
	int	min;

	min = a->index;
	while (a)
	{
		if (a->index < min)
			min = a->index;
		a = a->next;
	}
	return (min);
}
