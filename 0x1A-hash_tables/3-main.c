#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "betty", "");
    hash_table_set(ht, NULL, "value1");
    hash_table_set(ht, "mentioner", "value2");
    hash_table_set(ht, NULL, NULL);
    return (EXIT_SUCCESS);
}
