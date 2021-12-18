class Solution {
    
    bool isValid(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') )
            return true;
        return false;
    }
    
    char toLowerCase(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '1') ){
            return ch;
        }else{
           char temp = ch - 'A' + 'a';
                return temp;
        }
    }
    
    bool checkPalindrome(string str){
        int s = 0;
        int e = str.length()-1;
        
        while(s <= e){
            if(str[s] != str[e]){
                return false;
            }else{
                s++;
                e--;
            }
            
        }
        return true;
    }
    
    
    
    
    
public:
    bool isPalindrome(string s) {
//         for removing space other special charaacter
        string temp = "";
        
        for(int i=0; i<s.length(); i++){
            if(isValid(s[i]))
                temp.push_back(s[i]);
        }
        
//          function for lowercase
        for(int i=0; i<temp.length(); i++){
            temp[i] = toLowerCase(temp[i]);
        }
        
//      chech palindrome
        return checkPalindrome(temp);
    }
};
