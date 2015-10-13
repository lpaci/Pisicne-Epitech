/*
** do-op.c for do-op in /home/paci_l/Piscine/Piscine_C_J10/do-op
**
** Made by Louis Paci
** Login   <paci_l@epitech.net>
**
** Started on  ven. oct. 09 16:47:00 2015 Louis Paci
** Last update Fri Oct  9 17:06:02 2015 paci louis
*/

int	my_doop(int val1, char *operator, int val2)
{
	int result;

	result = 0;
	if (*operator == '*')
		result = val1 * val2;
	if (*operator == '-')
		result = val1 - val2;
	if (*operator == '%')
		result = val1 % val2;
	if (*operator == '/')
		result = val1 / val2;
	if (*operator == '+')
		result = val1 + val2;
	my_put_nbr(result);
}

int	main(int argc, char **argv)
{
	int	value1;
	char	*operator;
	int	value2;

	operator = argv[2];
	value1 = my_getnbr(argv[1]);
	value2 = my_getnbr(argv[3]);
	if (value2 == 0 && *operator == '%')
		{
			my_putstr(" Stop : modulo by zero");
			my_putchar('\n');
			return (0);
		}
	else if (value2 == 0 && *operator == '/')
		{
			my_putstr(" Stop : division by zero");
			my_putchar('\n');
			return (0);
		}
	my_doop(value1, operator, value2);
	my_putchar('\n');
	return (0);
}
