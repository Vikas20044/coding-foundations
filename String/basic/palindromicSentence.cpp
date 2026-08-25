      bool isPalinSent(string &s) {
        // code here
        int left=0, right=s.size()-1;
        
        while(left<right){
            while(left<right && !isalnum(s[left])){
                left++;
                
            }
            while(left<right && !isalnum(s[right])){
                right--;
                
            }
            
            if(isalpha(s[left])) s[left] = tolower(s[left]);
            if(isalpha(s[right])) s[right] = tolower(s[right]);
            
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }