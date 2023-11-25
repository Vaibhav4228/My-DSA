#include <iostream>
#include <unordered_map>

using namespace std;

struct Node {
    bool checkCircular(Node* head) {
    unordered_map<Node*, bool> vis;
    Node* temp = head;
    Node* next;
    while (temp != NULL) {
        if (vis.find(temp) != vis.end()) {
            vis[temp] = true;
        } else {
            return true;
        }
        temp = temp->next;  // Update the temp variable
    }
    return false;
};



   
}

int main() {
    string str = "thiruvananthapuram";
    unordered_map<char, int> freq;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        freq[ch]++;
    }

    for (auto i : freq) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
