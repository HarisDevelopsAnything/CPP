#include "header.h" // Assuming the class is defined in header.h

PriHeap::PriHeap(int capacity) : capacity(capacity), hsize(0) {
    data = new int[capacity];
}

bool PriHeap::isFull() {
    return hsize == capacity;
}

bool PriHeap::isEmpty() {
    return hsize == 0;
}

void PriHeap::enqueue(int value) {
    if (isFull()) {
        cout << "Heap is full!" << endl;
    }
    
    data[hsize] = value;
    hsize++;
    int index = hsize - 1;
    
    // Bubble up
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (data[index] > data[parent]) {
            int temp= data[index];
            data[index]= data[parent];
            data[parent]= temp;
            index = parent;
        } 
        else {
            break;
        }
    }
}

void PriHeap::dequeue() {
    if (isEmpty()) {
        cout << "Heap is empty" << endl;
    }

    data[0] = data[hsize - 1];
    hsize--;

    // Bubble down
    int index = 0;
    while (true) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;

        if (leftChild < hsize && data[leftChild] > data[largest]) {
            largest = leftChild;
        }
        if (rightChild < hsize && data[rightChild] > data[largest]) {
            largest = rightChild;
        }
        if (largest != index) {
            std::swap(data[index], data[largest]);
            index = largest;
        } else {
            break;
        }
    }
}

int& PriHeap::findMax() {
    if (isEmpty()) {
        cout << "Heap is empty" << endl;
    }
    return data[0];
}

bool PriHeap::search(int value) {
    for (int i = 0; i < hsize; i++) {
        if (data[i] == value) {
            return true;
        }
    }
    return false;
}
