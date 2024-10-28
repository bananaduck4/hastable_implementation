#include "hash_table.hpp"

int Hashtable::Hash(int key)
{
    return key % hash_size; // returns a value as an index within the table
}

bool Hashtable::is_empty() const
{
    for (int i = 0; i < hash_size; i++) // return false when a list is nonzero
    {
        if (table[i].size() != 0)
        {
            return 0;
        }
    }

    return 1;
}

void Hashtable::insert_value(int key, string value)
{
    int hash_index = Hash(key);
    auto pair = next(table->begin(), hash_index);

    pair->first = key;
    pair->second = value;
}