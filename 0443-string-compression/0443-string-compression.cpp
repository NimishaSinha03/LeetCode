class Solution {
public:
    int compress(vector<char>& chars) {
        int count=1;
        vector<int>v;
        // sabse pehele el letter toh daalna hi hoga na
        v.push_back(chars[0]);
        // agar ek hi letter hai toh count ki jhankhat hi nahi , just return 1
        if(chars.size() == 1)
        {
            return 1;
        }
        // iterate
        for(int i=0;i<chars.size()-1;i++){
            // agar same hai toh count the no. of same letteres
            if(chars[i]==chars[i+1])count++;
            else{
                // agar count>1,for eq=12 hai
                if(count>1)
                {
                    // toh for s.length() i.e. 2, we will push back s[i]
                    string s = to_string(count);
                    for(int i = 0 ;i<s.length();i++)
                    {
                        v.push_back(s[i]);
                    } 
                }
                // aur fir reset couunt
                count=1;
                // uapr abhi sirf count push back kiysa hai letter bacha hi hai, so push that aas well
                v.push_back(chars[i+1]);
            }
        }
        // abhi last m bach gaya hoga vo bhi push back krna hai, mtlb abki elese vali consition m m gaya hi nahi hoga to we only hae the count--->not sure about this
        if(count>1)
        {
           string s = to_string(count);
            for(int i = 0 ;i<s.length();i++)
            {
                v.push_back(s[i]);
            }  
        }
        // ab convert v[i]to chars[i]---> for constant space
        for(int i = 0 ;i<v.size();i++)
        {
            chars[i] = v[i];
        }
    // vo vector return hi jata h(chars[i]of the size v[i] return ho jata hai)
        return v.size();
    }
};