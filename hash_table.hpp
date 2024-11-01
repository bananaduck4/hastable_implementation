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
        list<pair<int, string>> table[hash_size]; //array of list that stores pairs

    public:
        int Hash(int key);
        bool is_empty() const;
        void insert_value(int key, string value);
        void delete_value(int key);
        string search_table(int key);
        void print_table();
};

#endif
