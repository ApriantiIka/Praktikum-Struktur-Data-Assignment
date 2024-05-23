#include <iostream>
#include <algorithm>
#include <vector>

class MaxHeap {
private:
    std::vector<int> H;

    int parent(int i) {
        return (i-1) / 2;
    }

    int leftChild(int i) {
        return ((2 * i) + 1);
    }

    int rightChild(int i) {
        return ((2 * i) + 2);
    }

    void shiftUp(int i) {
        while (i > 0 && H[parent(i)] < H[i]) {
            std::swap(H[parent(i)], H[i]);
            i = parent(i);
        }
    }

    void shiftDown(int i) {
        int maxIndex = i;
        int l = leftChild(i);
        if (l < H.size() && H[l] > H[maxIndex]) {
            maxIndex = l;
        }
        int r = rightChild(i);
        if (r < H.size() && H[r] > H[maxIndex]) {
            maxIndex = r;
        }
        if (i != maxIndex) {
            std::swap(H[i], H[maxIndex]);
            shiftDown(maxIndex);
        }
    }

public:
    void insert(int p) {
        H.push_back(p);
        shiftUp(H.size() - 1);
    }

    int extractMax() {
        int result = H[0];
        H[0] = H.back();
        H.pop_back();
        shiftDown(0);
        return result;
    }

    void changePriority(int i, int p) {
        int oldp = H[i];
        H[i] = p;
        if (p > oldp) {
            shiftUp(i);
        } else {
            shiftDown(i);
        }
    }

    int getMax() {
        return H[0];
    }

    void remove(int i) {
        H[i] = getMax() + 1;
        shiftUp(i);
        extractMax();
    }

    void printHeap() {
        for (int i = 0; i < H.size(); ++i) {
            std::cout << H[i] << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    MaxHeap heap;
    int choice, input, index, newPriority;

    while (true) {
        std::cout << "1. Insert\n";
        std::cout << "2. Extract Max\n";
        std::cout << "3. Change Priority\n";
        std::cout << "4. Remove\n";
        std::cout << "5. Print Heap\n";
        std::cout << "6. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the value to insert: ";
                std::cin >> input;
                heap.insert(input);
                break;
            case 2:
                std::cout << "Extracted Max: " << heap.extractMax() << "\n";
                break;
            case 3:
                std::cout << "Enter the index and new priority: ";
                std::cin >> index >> newPriority;
                heap.changePriority(index, newPriority);
                break;
            case 4:
                std::cout << "Enter the index to remove: ";
                std::cin >> input;
                heap.remove(input);
                break;
            case 5:
                heap.printHeap();
                break;
            case 6:
                std::cout << "Terima kasih <3\n";
                std::cout << "Nama  : Aprianti Ika Larasati\n";
                std::cout << "NIM   : 2311110023\n";
                std::cout << " ";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}