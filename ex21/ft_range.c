int		*ft_range(int min, int max)
{
	int		i;
	int		*range;

	i = 0;
	if (min <= max)
		return (0);
	else
	{
		range = malloc(sizeof(int) * (max - min));
		while (i < max - min)
		{
			range[i] = min + i;
			i++;
		}
		return (range);
	}
}
