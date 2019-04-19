#include<stdio.h>
uint64_t fun (uint64_t a);
int reset_handler(void)
{
	uint64_t a=1,b=2,c=3,d=4,e=5,f=6,g=0;
	 g=fun(a);

	while (1)
		;
}
uint64_t fun(uint64_t a)
{
return a;
}
