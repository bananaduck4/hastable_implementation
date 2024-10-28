#include "hash_table.hpp"

int Hashtable::Hash(int key)
{
    return key % hash_size; // returns a value as an index within the table
}

bool Hashtable::is_empty() const
{
    for (int i = 0; i < hash_size; i++) // return false when a list is nonzero in the table
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
    auto &bucket = table[hash_index]; // bucket is a reference of the list of the hashed pair (changes to bucket affect the list)

    for (auto curr = bucket.begin(); curr != bucket.end(); curr++)
    {
        if (curr->first == key)
        {
            curr->second = value;
            return;
        }
    }

    bucket.emplace_back(key, value);
}