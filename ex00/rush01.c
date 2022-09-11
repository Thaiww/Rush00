/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaudoux,mgomes-d,dergen                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:09:33 by tbaudoux          #+#    #+#             */
/*   Updated: 2022/09/11 16:44:17 by tbaudoux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    rush(int x, int y)
{
    long    ligne = 1;
    long    collone = 1;
    char    A = 47;
    char    B = '*';
    char    C = 92;
    char    RET = '\n';
    char    SPA = ' ';

    if (x > 0)
    {
        while (ligne <= y)
        {
            while (collone <= x)
            {
                if (ligne == 1 && collone == 1)
                {
                    ft_putchar(A);
                }
                else if (ligne == 1 && collone == x)
                {
                    ft_putchar(C);
                }
                else if (ligne == 1 && collone < x)
                {
                    ft_putchar(B);
                }
                else if (ligne < y && collone == 1)
                {
                    ft_putchar(B);
                }
                else if (ligne < y && collone == x)
                {
                    ft_putchar(B);
                }
                else if (ligne < y && collone < x)
                {
                    ft_putchar(SPA);
                }
                else if (collone == 1)
                {
                    ft_putchar(C);
                }
                else if (collone == x)
                {
                    ft_putchar(A);
                }
                else
                {
                    ft_putchar(B);
                }
                collone++;
            }
            ft_putchar(RET);
            collone = 1;
            ligne++;
        }
    }
}
