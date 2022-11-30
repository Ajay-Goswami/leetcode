class Trie {
public:
    struct Node{
        Node * child[26] = {NULL};
        bool isWord = false;
    };
    Node *root = new Node();
    Trie() {}
    
    void insert(string word) {
        Node * temp=root;
        for(int i=0; i<word.size(); i++){
            if(!temp->child[word[i]-'a'])
                temp->child[word[i]-'a']= new Node();
            temp = temp->child[word[i]-'a'];
        }
        temp->isWord= true;
    }
    bool search(string word) {
        Node * temp =root;
        for(int i=0; i<word.length(); i++){
            if(!temp->child[word[i]-'a'])
                return false;
            temp = temp->child[word[i]-'a'];
        }
        return temp->isWord;
    }
    bool startsWith(string prefix) {
        Node *temp=root;
        for(char c: prefix){
            if(!temp->child[c-'a'])
                return false;
            temp= temp->child[c-'a'];
        }
        return true;
    }
};  //Ajay Goswami

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */