void	sort_5(t_stack **a, t_stack **b)
{
	int	min;

	while (stack_size(*a) > 3)
	{
		min = find_min_index(*a);
		rotate_to_top(a, min);
		pb(a, b);
	}
	sort_3(a);
	pa(a, b);
	pa(a, b);
}
