#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - Selects the correct operation function based on the operator.
 * @s: The operator passed as a string.
 *
 * Return: A pointer to the corresponding function for the operator,
 * or NULL if no valid operator is found.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (0);
}
