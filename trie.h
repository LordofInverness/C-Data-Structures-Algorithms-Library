#ifndef TRIE_H
#define TRIE_H
#include <unordered_map>
#include <string>
using namespace std;
class Trie {
private:
  struct TrieNode {
    unordered_map<char,TrieNode*> children;
    bool is_end_of_word;
    TrieNode() : is_end_of_word(false){}
};
TrieNode* root;
public:
  Trie();
  ~Trie();
  void insert(const string& word);
  bool search(const string& word) const;
  bool starts_with(const string& prefix) const;
private:
  void clear(TrieNode* node);
);
#endif
