#include "header.h"

int main() {
    PriHeap heap(10); // Create a priority queue with a capacity of 10

    // Enqueue some elements
    heap.enqueue(15);
    heap.enqueue(10);
    heap.enqueue(20);
    heap.enqueue(5);
    
    std::cout << "Max element: " << heap.findMax() << std::endl; // Should be 20

    // Dequeue the max element
    heap.dequeue();
    std::cout << "Max element after dequeue: " << heap.findMax() << std::endl; // Should be 15

    // Check if certain elements exist
    std::cout << "Searching for 10: " << (heap.search(10) ? "Found" : "Not Found") << std::endl;
    std::cout << "Searching for 25: " << (heap.search(25) ? "Found" : "Not Found") << std::endl;

    return 0;
}
