void	push_chunks(t_stack **a, t_stack **b, int size)
{
	int	chunk;
	int	limit;
	int	i;

	chunk = get_chunk_size(size);
	limit = chunk;
	i = 0;
	while (*a)
	{
		if ((*a)->index < limit)
		{
			pb(a, b);
			if ((*b)->index < limit - (chunk / 2))
				rb(b);
			i++;
			if (i == limit)
				limit += chunk;
		}
		else
			ra(a);
	}
}
