#include <iostream>

using namespace std;

class SinglyLinkedListNode {
public:
    int data;
    SinglyLinkedListNode* next;

    SinglyLinkedListNode(int node_data) {
        this->data = node_data;
        this->next = nullptr;
    }
};

int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    // Initialize two pointers
    SinglyLinkedListNode* main_ptr = head;
    SinglyLinkedListNode* ref_ptr = head;

    // Move the reference pointer ahead by the desired position
    for (int i = 0; i < positionFromTail; ++i) {
        ref_ptr = ref_ptr->next;
    }

    // Move both pointers until the reference pointer reaches the end
    while (ref_ptr->next != nullptr) {
        main_ptr = main_ptr->next;
        ref_ptr = ref_ptr->next;
    }

    // At this point, the main_ptr is at the desired position from the tail
    return main_ptr->data;
}

// Example usage
int main() {
    // Example linked list: 1 -> 2 -> 3 -> 4 -> 5
    SinglyLinkedListNode* head = new SinglyLinkedListNode(1);
    head->next = new SinglyLinkedListNode(2);
    head->next->next = new SinglyLinkedListNode(3);
    head->next->next->next = new SinglyLinkedListNode(4);
    head->next->next->next->next = new SinglyLinkedListNode(5);

    // Get value at positionFromTail = 1 (1 position from the tail)
    int positionFromTail = 1;
    cout << "Value at position " << positionFromTail << " from tail: " << getNode(head, positionFromTail) << endl;

    return 0;
}
