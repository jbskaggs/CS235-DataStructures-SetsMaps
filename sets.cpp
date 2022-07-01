//
// Created by jskag on 7/1/2022.
//

//Set Data Type (9.1)


//What's a Set?
//1. a container that holds objects
//2. no duplicates
//3. the container controls the order of the objects

//What operations are supported by a Set?
//What's the abstract interface for a Set?

//size();
//add(item);
//remove(item);
//find(item);

//Maps in the C++ Library

#include <set>
//std::set


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <vector>

using namespace std;

int main() {

    //What happens if you add 2 to a set that already contains 2?

    //What order is commonly used for the items in a Set?


    //Classwork
    //You may work with a partner.

    //What does the program print?

    //Set S1;
    //S1.add(4);
    //S1.add(2);
    //S1.add(8);
    //S1.add(4);
    //S1.add(1);
    //S1.add(8);
    //print(S1);

    //Set S2;
    //for ( item : S1 )
    //S2.add( item );
    //print(S2);

    //S1.remove(2);
    //S1.remove(4);
    //print(S1);

    //for ( item : S1 )
    //S2.remove( item );
    //print(S2);

    //Sets in the C++ Library

    //#include <set>
    //std::set


    //What are some of the operations supported by std::set?

    //size_t size() const;
    //pair<iterator,bool> insert ( const ItemType& item );
    //size_t erase ( const ItemType& item ); // returns number of items erased
    //iterator find ( const ItemType& item ) const;
    //size_t count ( const ItemType& item ) const;


    //DEMO	(change list to set)

    //Why Set?

    //A List holds a collection of objects and
    //allows you to control each object's location.

    //A Set holds a collection of objects but
    //does not allow you to control object location.

    //Why is a Set useful?

    //DEMO	(time for find on list vs set)


    return 0;
}
