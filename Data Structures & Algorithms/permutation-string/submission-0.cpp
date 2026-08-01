class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int>freq1(26 , 0);
        vector<int>window(26 , 0);

        for(int i = 0; i<s1.length(); i++){
            freq1[s1[i] - 'a']++;
            window[s2[i] - 'a']++;
        }
        if(freq1 == window)
        return true;

        for(int right = s1.length(); right<s2.length(); right++){
            window[s2[right] - 'a']++;
            window[s2[right - s1.length()] - 'a']--;
        
            if(freq1 == window)
            return true;
        }
          return false;
    }
};
