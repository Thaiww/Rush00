/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaudoux,mgomes-d,dergen                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:09:33 by tbaudoux          #+#    #+#             */
/*   Updated: 2022/09/11 18:34:11 by tbaudoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ligne_1(int x, int *lc, char *c);
void	ligne_2(int x, int *lc, char *c);
void	ligne_3(int x, int *lc, char *c);

void	rush_init(int x, int y, int *lc, char *c)
{
	if (x > 0)
	{
		while (lc[0] <= y)
		{
			while (lc[1] <= x)
			{
				if (lc[0] == 1)
				{
					ligne_1(x, lc, c);
				}
				else if (lc[0] < y)
				{
					ligne_2(x, lc, c);
				}
				else
				{
					ligne_3(x, lc, c);
				}
				lc[1]++;
			}
			ft_putchar(c[3]);
			lc[1] = 1;
			lc[0]++;
		}
	}
}

void	rush(int x, int y)
{
	char	c[5];
	int		lc[2];

	lc[0] = 1;
	lc[1] = 1;
	c[0] = 'A';
	c[1] = 'C';
	c[2] = 'B';
	c[3] = '\n';
	c[4] = ' ';
	rush_init(x, y, lc, c);
}

void	ligne_1(int x, int *lc, char *c)
{
	if (lc[1] == 1)
	{
		ft_putchar(c[0]);
	}
	else if (lc[1] == x)
	{
		ft_putchar(c[1]);
	}
	else
	{
		ft_putchar(c[2]);
	}
}

void	ligne_2(int x, int *lc, char *c)
{
	if (lc[1] == 1 || lc[1] == x)
	{
		ft_putchar(c[2]);
	}
	else
	{
		ft_putchar(c[4]);
	}
}

void	ligne_3(int x, int *lc, char *c)
{
	if (lc[1] == 1)
	{
		ft_putchar(c[0]);
	}
	else if (lc[1] == x)
	{
		ft_putchar(c[1]);
	}
	else
	{
		ft_putchar(c[2]);
	}
}
