#include "hash_table.hpp"

int Hashtable::Hash(int key)
{
    return key % hash_size;
}