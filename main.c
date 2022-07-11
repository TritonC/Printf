#include "ft_printf.h"

int main ()
{
	int Original_value;
	int My_value;
	int d = 212032232;
	int nd = -123123;
	void *p = &d;
	char c = '-';
	unsigned int u = 51351312;
	unsigned int nu = -1;


	My_value = ft_printf("resultado de %%c: %c\n\n restultado de %%d: %d\n negativo %d\n\n resultado de %%i: %i \nnegativo: %i\n\n resultado de %%u: %u \nnegativo :%u\n\n resultado hecadecimales %%x y %%X: %x\n\n resultado de puntero %%p: %p\n\n", c, d, nd, d, nd, u, nu, d, p );
//	ft_printf("resultado de %%c: %c\n restultado de %%d: %d\n negativo %d\n resultado de %%i: %i \nnegativo: %i\n resultado de %%u: %u \nnegativo :%u\n resultado hecadecimales %%x y %%X: %x\n resultado de puntero %%p: %p\n", c, d, nd, d, nd, u, nu, d, p );
	Original_value = printf("resultado de %%c: %c\n\n restultado de %%d: %d\n negativo %d\n\n resultado de %%i: %i \nnegativo: %i\n\n resultado de %%u: %u \nnegativo :%u\n\n resultado hecadecimales %%x y %%X: %x\n\n resultado de puntero %%p: %p\n\n", c, d, nd, d, nd, u, nu, d, p  );
//	printf("resultado de %%c: %c\n restultado de %%d: %d\n negativo %d\n resultado de %%i: %i \nnegativo: %i\n resultado de %%u: %u \nnegativo :%u\n resultado hecadecimales %%x y %%X: %x\n resultado de puntero %%p: %p\n", c, d, nd, d, nd, u, nu, d, p );
	printf ("valor Original = %d\n mi valor = %d",Original_value, My_value);
}

