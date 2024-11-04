#include <iostream>
#include <vector>
#include "header.h" // Assuming your header file is named header.h

// Constructor
HashTblADT::HashTblADT() {
    capacity = 10; // Initial capacity
    size = 0;
    data = new int[capacity]; // Dynamic array allocation
    for (int i = 0; i < capacity; i++) {
        data[i] = -1; // Initialize with -1 (indicating empty slots)
    }
}

// Destructor
HashTblADT::~HashTblADT() {
    delete[] data; // Free allocated memory
}

// Hash function
int HashTblADT::hash(int key) {
    return key % capacity; // Simple modulo-based hash function
}

// Insert function
void HashTblADT::insert(int key) {
    if (size >= capacity) {
        std::cout << "Hash table is full. Cannot insert " << key << std::endl;
        return;
    }
    int index = hash(key);
    while (data[index] != -1) { // Linear probing
        index = (index + 1) % capacity;
    }
    data[index] = key; // Insert key
    size++;
}

// deletion function
void HashTblADT::deletion(int key) {
    int index = hash(key);
    while (data[index] != -1) {
        if (data[index] == key) {
            data[index] = -1; // Mark as deleted
            size--;
            std::cout << "Deleted key: " << key << std::endl;
            return;
        }
        index = (index + 1) % capacity;
    }
    std::cout << "Key " << key << " not found." << std::endl;
}

// Search function
bool HashTblADT::searchElement(int key) {
    int index = hash(key);
    while (data[index] != -1) {
        if (data[index] == key) {
            return true; // Found the key
        }
        index = (index + 1) % capacity;
    }
    return false; // Not found
}

// Display function
void HashTblADT::display() {
    for (int i = 0; i < capacity; i++) {
        if (data[i] != -1) {
            std::cout << "Index " << i << ": " << data[i] << std::endl;
        } else {
            std::cout << "Index " << i << ": (empty)" << std::endl;
        }
    }
}
