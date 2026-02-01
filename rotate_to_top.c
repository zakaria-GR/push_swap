void	rotate_to_top(t_stack **a, int index)
{
	int	pos;
	int	size;

	pos = 0;
	size = stack_size(*a);
	while ((*a)->index != index)
	{
		if (pos <= size / 2)
			ra(a);
		else
			rra(a);
		pos++;
	}
}
