class Solution {
public:
    bool isSubsequence(string s, string t) {
        int f=-1,c=0;
        if(s.size()==0)
            return 1;
        for(int i=0;i<s.size();i++){
            c=0;
           for(int j=0;j<t.size();j++){
               if(s[i]==t[j]){
                   if(j>f){
                       f=j;
                       c=1;
                       break;
                   }
               }
           }
            if(c==0)
                break;
        }
        return c;
    }
};
