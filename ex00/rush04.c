#include <unistd.h>

void	rush04(int x, int y)
{	
	long ligne = 1;
	long collone = 1;
	char A = 'A';
	char B = 'B';
	char C = 'C';
	char RET = '\n';
	char SPA = ' ';

	while (ligne <= y)
	{ 
		while (collone <= x)
		{	
			//ecriture debut de ligne
			
			if (ligne == 1 && collone == 1)
			{
				write(1, &A, 1);
			}
			else if (ligne == 1 && collone == x)
			{	
				write(1,  &C, 1);;
			}
			else if (ligne == 1 && collone < x)
			{
				write(1, &B, 1);
			}

			//ecriture ligne entre

			else if (ligne < y && collone == 1)
			{
				write(1, &B, 1);
			}
			else if (ligne < y && collone == x)
			{
				write(1, &B, 1);
			}
			else if (ligne < y && (1 < collone < x))
			{
				write(1, &SPA, 1);
			}
			
			//ecriture fin de ligne

			else if (ligne == y && collone == 1)
            {
                write(1, &C, 1);
            }
            else if (ligne == y && collone == x)
            {
                write(1, &A, 1);
			}
			else if (ligne == y && collone < x)
			{
			   	write(1, &B, 1);
			}
			collone++;
		}
		write(1, &RET, 1);
		collone = 1;
		ligne++;
	}
}

int main()
{
	rush04(123,42);
}
