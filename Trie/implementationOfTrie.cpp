#include<iostream>
using namespace std;

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

        Trie() {
            root = new TreeNode('\0');
        }

        void insertUtil(TreeNode* root, string word){
            // base case
            if(word.length() == 0){
                root->isTerminal = true;
                return ;
            }

            // assuption will that word will be CAPS
            int index = word[0] - 'A';
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


        void insertWord(string word){
            insertUtil(root, word);
        }


        bool searchUtil(TreeNode* root, string word){
            // base case
            if(word.length() == 0){
                return root->isTerminal;
            }

            int index = word[0] - 'A';
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

        bool searchWord(string word){
            return searchUtil(root, word);
        }

};



int main(){

    Trie *t = new Trie();

    t->insertWord("ABCD");

    cout << "present or not " << t->searchWord("abd") << endl;

    return 0;
}
