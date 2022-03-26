#include <libft.h>


int				main(void)
{
	char	**tab;
		unsigned int	i;

	i = 0;
	tab = ft_split("      split       this for   me  !", ' ');
	if (!tab[0])
		ft_putendl_fd("ok\n", 1);
	while (tab[i] != NULL)
	{
		ft_putendl_fd(tab[i], 1);
		i++;
	}
}

