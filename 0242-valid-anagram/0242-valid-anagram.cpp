class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if( s.length() != t.length() )
            return false;
        
        std::map< char, std::pair< int, int > > anagramMap;

        for( int i = 0; i < s.length(); i++ )
        {
            auto& anagramS = anagramMap[ s[i] ];
            anagramS.first += 1;

            auto& anagramT = anagramMap[ t[i] ];
            anagramT.second += 1;
        }

        for( auto [_, pair ] : anagramMap)
        {
            if( pair.first != pair.second )
                return false;
        }

        return true;
    }
};