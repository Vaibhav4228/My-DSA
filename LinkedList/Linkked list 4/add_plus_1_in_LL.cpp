#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addOne(ListNode* head) {
        // Reverse the linked list
        ListNode* prev = nullptr;
        ListNode* current = head;
        while (current != nullptr) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;

        // Add 1 to the number represented by the linked list
        ListNode* node = head;
        int carry = 1;
        while (node != nullptr && carry != 0) {
            int sum = node->val + carry;
            node->val = sum % 10;
            carry = sum / 10;
            if (node->next == nullptr && carry > 0) {
                node->next = new ListNode(carry);
                break;
            }
            node = node->next;
        }

        // Reverse the linked list back to its original form
        prev = nullptr;
        current = head;
        while (current != nullptr) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;

        return head;
    }

    // Function to print the number represented by the linked list
    void printNumber(ListNode* head) {
        while (head != nullptr) {
            std::cout << head->val;
            head = head->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    // Example usage
    ListNode* head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(6);

    Solution solution;
    ListNode* result = solution.addOne(head);

    std::cout << "Output: ";
    solution.printNumber(result);

    return 0;
}
