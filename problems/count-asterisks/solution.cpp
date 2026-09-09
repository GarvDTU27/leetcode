class Solution {
public:
    int countAsterisks(string s) {
        int count = 0 ;
        bool open = false ;

        for(auto ch : s){
            if(ch == '|'){
                open = !open ;
            }

            if(ch == '*' && !open){
                count++ ;
            }
        }

        return count ;
    }
};