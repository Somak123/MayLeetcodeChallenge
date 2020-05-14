class Node{
    public:
    Node* children[26];
    bool is_word;
    
    Node(){
        memset(children,0,sizeof(children));
        is_word=false;
    }
};


class Trie {
public:
    /** Initialize your data structure here. */
    Node* root;
    Trie() {
        
        root=new Node();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        
        Node* curr=root;
        for(auto c:word)
        {
            if(!curr->children[c-'a'])
                curr->children[c-'a']=new Node();
            curr=curr->children[c-'a'];
        }
        curr->is_word=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        
        Node* curr=root;
        for(auto c:word)
        {
            if(!curr->children[c-'a'])
                return false;
            curr=curr->children[c-'a'];
        }
        return curr->is_word;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node* curr=root;
        for(auto c:prefix)
        {
            if(!curr->children[c-'a'])
                return false;
            curr=curr->children[c-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
