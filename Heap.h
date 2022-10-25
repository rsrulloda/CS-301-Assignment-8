//
//
//

#ifndef CS_301_ASSIGNMENT_8_HEAP_H
#define CS_301_ASSIGNMENT_8_HEAP_H

#endif //CS_301_ASSIGNMENT_8_HEAP_H

template <class ItemType>
void swap(ItemType& one, ItemType& two);

template<class ItemType>

struct HeapType
{
    void ReheapDown(int root, int bottom);
    void ReheapUp(int root, int bottom);
    ItemType* elements;
    int numElements;
};

template <class ItemType>
void Swap(ItemType& one, ItemType& two)
{
    ItemType temp;
    temp = one;
    one = two;
    two = temp;
}
template<class ItemType>
void HeapType<ItemType>::ReheapUp(int root, int bottom)

{
}
template<class ItemType>
void HeapType<ItemType>::ReheapDown(int root, int bottom)

{
    return o;
}

