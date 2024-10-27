#include "hash_table.hpp"

int Hashtable::Hash(int key)
{
    return key % hash_size; // returns a value as an index within the table
}

bool Hashtable::is_empty() const
{
    for (int i = 0; i < hash_size; i++) // add all the size of each list wiithn the table
    {
        if (table[i].size() != 0)
        {
            return 0;
        }
    }

    return 1;
}