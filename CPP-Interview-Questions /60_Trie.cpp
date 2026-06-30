#include <iostream>
using namespace std;

struct TrieNode {
    TrieNode* child[26];
    bool end;

    TrieNode() {
        end = false;
        for (int i = 0; i < 26; i++)
            child[i] = nullptr;
    }
};

class Trie {
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* cur = root;
        for (char c : word) {
            int i = c - 'a';
            if (!cur->child[i])
                cur->child[i] = new TrieNode();
            cur = cur->child[i];
        }
        cur->end = true;
    }

    bool search(string word) {
        TrieNode* cur = root;
        for (char c : word) {
            int i = c - 'a';
            if (!cur->child[i])
                return false;
            cur = cur->child[i];
        }
        return cur->end;
    }
};

int main() {
    Trie t;
    t.insert("apple");
    cout << t.search("apple") << endl;
    cout << t.search("app") << endl;
}
