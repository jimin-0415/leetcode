class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> elements;
        for( auto& num : nums ) 
        {
            auto result = elements.insert( num );
            if( !result.second )
                return true;
        }

        return false;
    }
};