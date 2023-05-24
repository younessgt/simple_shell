#include "main.h"


char *num_to_string(int i)
{
	int num1 = i, num2, j = 0, init = 0, finish, num_length = 0;
	char stock;
	char *buff_num;

	while (num1 != 0)
	{
		num_length++;
		num1 = num1 / 10;
	}
	buff_num = malloc(sizeof(char) * (num_length + 1));
	if (buff_num == NULL)
		return (NULL);
	while (i != 0)
	{
		num2 = i % 10;
		buff_num[j] = num2 + '0';
		j++;
		i = i / 10;
	}
	buff_num[j] = '\0';
	finish = num_length - 1;
	while (init < finish)
	{
		stock = buff_num[init];
		buff_num[init] = buff_num[finish];
		buff_num[finish] = stock;
		init++;
		finish--;
	}
	return (buff_num);
}
