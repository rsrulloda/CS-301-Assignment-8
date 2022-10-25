//
//
//

#ifndef CS_301_ASSIGNMENT_8_PQTYPE_H
#define CS_301_ASSIGNMENT_8_PQTYPE_H

#endif //CS_301_ASSIGNMENT_8_PQTYPE_H

class FullPQ{};
class EmptyPQ{};
#include "Heap.h"
template<class ItemType>
class PQType
{
public:
    PQType(int);
    ~PQType();

    void MakeEmpty();

    bool IsEmpty() const;

    bool IsFull() const;

    void Enqueue(ItemType newItem);

    void Dequeue(ItemType& item);

private:
    int length;
    HeapType<ItemType> items;
    int maxItems;
};

template<class ItemType>
PQType<ItemType>::PQType(int max)
{
    maxItems = max;
    items.elements = new ItemType[max];
    length = 0;
}

template<class ItemType>
void PQType<ItemType>::MakeEmpty()
{
    length = 0;
}

template<class ItemType>
PQType<ItemType>::~PQType()
{
    delete [] items.elements;
    return 0;
}


