void ft_putchar(char c);

void	rush(int x, int y)
{	
	long ligne = 1;
	long collone = 1;
	char A = 'A';
	char B = 'B';
	char C = 'C';
	char RET = '\n';
	char SPA = ' ';
	
	if (x > 0 && y > 0)
	{
		while (ligne <= y)
		{	 
			while (collone <= x)
			{	
				//ecriture debut de ligne
			
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

				//ecriture ligne entre

				else if (ligne < y && collone == 1)
				{
					ft_putchar(B);
				}
				else if (ligne < y && collone == x)
				{
					ft_putchar(B);
				}
				else if (ligne < y && (1 < collone < x))
				{
					ft_putchar(SPA);
				}
			
				//ecriture fin de ligne

				else if (ligne == y && collone == 1)
            	{
                	ft_putchar(C);
            	}
            	else if (ligne == y && collone == x)
            	{
                	ft_putchar(A);
				}
				else if (ligne == y && collone < x)
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
