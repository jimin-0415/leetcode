class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if( s.length() != t.length() )
            return false;
        
        std::map< char, int > anagramMap;

        for( int i = 0; i < s.length(); i++ )
        {
            anagramMap[ s[i] ]++;
            anagramMap[ t[i] ]--;
        }

        for( auto& [_, anagram ] : anagramMap)
        {
            if( 0 != anagram)
                return false;
        }

        return true;
    }
};