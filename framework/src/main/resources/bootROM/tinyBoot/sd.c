// See LICENSE.Sifive for license details.
#include <stdint.h>

#include <platform.h>

#include "common.h"

#define DEBUG
#include "kprintf.h"

int main(int mhartid, char** dump)
{
	REG32(uart, UART_REG_TXCTRL) = UART_TXEN;

	const char msg[] = {'H', 'e', 'l', 'l', 'o', ' ',
						'f', 'r', 'o', 'm', ' ',
						'c', 'o', 'r', 'e', ' ', mhartid + 48,
						'!', '!', '!',
						'\0', '\r', '\n'};

	kputs(msg);

	__asm__ __volatile__ ("fence.i" : : : "memory");

	while(1);

	return 0;
}
