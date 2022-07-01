//
// Created by jskag on 7/1/2022.
//

//Map Data Type (9.2)


//What's a Map?
//1. a data structure that associates keys with values
//2. a set of key-value pairs
//3. keys are unique, values can be repeated

//What are some examples of Maps?

//phone book (name -> number)
//dictionary (word -> definition)

//What operations are supported by a Map?
//What's the abstract interface for a Map?

//size();
//add(key, value);
//remove(key);
//getValue(key);

//Maps in the C++ Library

#include <map>
//std::map

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <vector>
#include <set>

using namespace std;

int main() {

    //What are some of the operations supported by std::map?

    //size_t size() const;
    //size_t count ( const KeyType& key ) const;
    //size_t erase ( const KeyType& key ); // returns number of items erased
    //ValueType& operator[] ( const KeyType& key ); // key is added
    // if not already in map


    //How do you add a new mapping?

    //map["bob"] = 16;

    //How do you remove a mapping?

    //map.erase("bob");


    //How do you iterate over a map?

    //iterator points to a pair object
    //pair->first is the key
    //pair->second is the value

    //DEMO	(demo6, iterate over a map)


    //DEMO	(demo8, word frequency counter)


    return 0;
}
