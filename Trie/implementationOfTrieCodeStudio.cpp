/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

   class TreeNode{

    public:
        char data;
        TreeNode* children[26];
        bool isTerminal;

    // create a construct for treeNode class
    TreeNode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};



class Trie {

public:
	TreeNode* root;
    /** Initialize your data structure here. */
    Trie() {
		 root = new TreeNode('\0');
    }

    /** Inserts a word into the trie. */
	void insertUtil(TreeNode* root, string word){
            // base case
            if(word.length() == 0){
                root->isTerminal = true;
                return ;
            }

            // assuption will that word will be CAPS
            int index = word[0] - 'a';
            TreeNode* child;

            // present 
            if(root->children[index] != NULL){
                child = root->children[index];
            }else{
                // absent
                child = new TreeNode(word[0]);
                root->children[index] = child;
            }
 
        // RECURSION
        insertUtil(child, word.substr(1));
        }
	
	
    void insert(string word) {
		insertUtil(root, word);
    
	}	


    /** Returns if the word is in the trie. */
	
	bool searchUtil(TreeNode* root, string word){
            // base case
            if(word.length() == 0){
                return root->isTerminal;
            }

            int index = word[0] - 'a';
            TreeNode *child;

            // present 
            if(root->children[index] != NULL){
                child = root->children[index];
            }else{
                // not present 
                return false;
            }

            // recursion
            return searchUtil(child, word.substr(1));
        }
	
    bool search(string word) {
		return searchUtil(root, word);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
	
	bool searchPrefix(TreeNode* root, string word){
            // base case
            if(word.length() == 0){
                return true;
            }

            int index = word[0] - 'a';
            TreeNode *child;

            // present 
            if(root->children[index] != NULL){
                child = root->children[index];
            }else{
                // not present 
                return false;
            }

            // recursion
            return searchPrefix(child, word.substr(1));
        }
	
    bool startsWith(string prefix) {
		
		return searchPrefix(root, prefix);
    }
};
