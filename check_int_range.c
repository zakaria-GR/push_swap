int	check_int_range(long n)
{
	if (n < -2147483648 || n > 2147483647)
		return (0);
	return (1);
}
