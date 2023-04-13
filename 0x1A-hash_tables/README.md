Hash Tables

A hash table is a data structure that stores key/value pairs in a way that allows for efficient lookup and insertion. In this project, we will implement a hash table in C and provide a set of functions for interacting with it.

Functions

hash_table_t *hash_table_create(unsigned long int size);
This function creates a new hash table with an array of the specified size. If the function fails to allocate memory for the table, it returns NULL.

unsigned long int hash_djb2(const unsigned char *str);

This function implements the djb2 algorithm for hashing a string. It takes a string as input and returns an unsigned long integer representing the hash value.

unsigned long int key_index(const unsigned char *key, unsigned long int size);

This function takes a key and the size of a hash table and returns the index at which the key/value pair should be stored in the array of the hash table.

int hash_table_set(hash_table_t *ht, const char *key, const char *value);

This function adds a new key/value pair to the hash table or updates the value associated with an existing key. It returns 1 if the operation was successful and 0 otherwise.

char *hash_table_get(const hash_table_t *ht, const char *key);

This function retrieves the value associated with a given key in the hash table. If the key is not found, it returns NULL.

void hash_table_print(const hash_table_t *ht);

This function prints the key/value pairs in the hash table in the order they appear in the array of the table. If the table is NULL, it doesn't print anything.

void hash_table_delete(hash_table_t *ht);

This function frees the memory allocated for the hash table and its nodes.

Order of Elements

In PHP, hash tables are ordered. This means that the elements are stored in a specific order based on their keys. This is not the case with our implementation of a hash table in C. The order of the elements is determined by the order in which they were added to the table.

Example Usage


hash_table_t *ht = hash_table_create(1024);

hash_table_set(ht, "name", "Alice");
hash_table_set(ht, "age", "30");

printf("%s is %s years old.\n", hash_table_get(ht, "name"), hash_table_get(ht, "age"));

hash_table_print(ht);

hash_table_delete(ht);


Authors
This project was developed by NIYONGABO Jean Pierre.
