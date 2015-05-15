#include <hashtable.h>

#define SETUP HashTable *str_hash = hashtable_new(); \
              HashTableConf c;                  \
              hashtable_conf_init(&c); \
              c.hash = POINTER_HASH; \
              c.key_compare = CMP_POINTER; \
              c.key_length = KEY_LENGTH_POINTER; \
              HashTable *hash = hashtable_new_conf(&c);

#define INSERT_INT_INTO_HASH(key, value) hashtable_add(hash, (void*) (long) key, &value)
#define DELETE_INT_FROM_HASH(key) hashtable_remove(hash, (void*) (long) key)
#define INSERT_STR_INTO_HASH(key, value) hashtable_add(str_hash, key, &value)
#define DELETE_STR_FROM_HASH(key) hashtable_remove(str_hash, key)

#include "template.c"
