#include "hash_table.hpp"

int Hashtable::Hash(int key)
{
    return key % hash_size;
}

bool Hashtable::is_empty() const
{
    int size = 0;
    for (int i = 0; i < hash_size; i++)
    {
        size += table[i].size();
    }

    return size == 0;
}