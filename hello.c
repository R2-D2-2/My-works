#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	DDRD = 0xFF;
	PORTD = 0b00000000;
	while(1)
	{
		PORTD |= (1<<(PORTD0));
		_delay_ms(500);
		PORTD &= ~(1<<(PORTD0));
		_delay_ms(500);
	}

    char byte;

    int count = scanf("%c", &byte);
    printf("count = %d, byte = %c\n", count, byte);
    return 0;

    int var_i = 1208;
    printf ("value = %d\n", var_i);
    return 0;

    int v = getchar();
    int res = putchar(v);
    printf ("\n%d\n",res);
    return 0;
    
    double x = 5.67;
    bool y = x < 0;

    printf("%d\n", y);
    return 0;

    double d1, d2, d3, d4; // не целые числа

    d1 = 10.0;
    d2 = -7.0;
    d3 = 1e2;
    d4 = 1e-3;

    int size_float = sizeof (float); // количество занимаемой памяти

    return 0;

    char ch;
    ch = 'd';
    printf("ch = %c, code = %d\n", ch,ch);
    return 0;

    char byte_memory; //unsigned - беззнаковый, signed - знаковый
    byte_memory = 100; //float - вещественное
    char a;
    a = byte_memory;

    printf("Hello\n");
    return 0;
}