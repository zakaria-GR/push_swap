void	push_back(t_stack **a, t_stack **b)
{
	int	max;

	while (*b)
	{
		max = find_max_index(*b);
		rotate_b_to_top(b, max);
		pa(a, b);
	}
}
