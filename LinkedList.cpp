#include "LinkedList.h"
#include "Node.h"

template <class ItemType>
LinkedList<ItemType>::LinkedList() : headPtr(nullptr), itemCount(0) {
}

template <class ItemType>
LinkedList<ItemType>::LinkedList(const LinkedList<ItemType>& otherList) {
    // Implement the copy constructor here
}

template <class ItemType>
LinkedList<ItemType>::~LinkedList() {
    // Implement the destructor here
}

template <class ItemType>
bool LinkedList<ItemType>::isEmpty() const {
    return itemCount == 0;
}

template <class ItemType>
int LinkedList<ItemType>::getLength() const {
    return itemCount;
}

template <class ItemType>
bool LinkedList<ItemType>::insert(int newPosition, const ItemType& newEntry) {
    // Implement the insert method here
}

template <class ItemType>
bool LinkedList<ItemType>::remove(int position) {
    // Implement the remove method here
}

template <class ItemType>
void LinkedList<ItemType>::clear() {
    // Implement the clear method here
}

template <class ItemType>
ItemType LinkedList<ItemType>::getEntry(int position) const throw(PrecondViolatedExcep) {
    // Implement the getEntry method here
}

// Add any other methods or functions needed for your linked list implementation.
