#ifndef HASH_TABLE_HPP
#define HASH_TABLE_HPP

#include <iostream>
#include <list>
#include <cstring>

using namespace std;

//Hastable to store ID, name
class Hashtable
{
    private:
        static const int hash_size = 10;
<<<<<<< HEAD
        list<pair<int, string>> table[hash_size]; //each element is a list of pairs (buckets)
=======
        list<pair<int, string>> table[hash_size]; //array of list that stores pairs
>>>>>>> da089ee203f305a4d1a769f3567899622d1d4e87

    public:
        int Hash(int key);
        bool is_empty() const;
        void insert_value(int key, string value);
        void delete_value(int key);
        string search_table(int key);
        void print_table();
};

#endif
