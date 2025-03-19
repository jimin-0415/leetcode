class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        std::set<int> num1Set;
        std::set<int> num2Set;
        std::vector<int> num1Vector;
        std::vector<int> num2Vector;

        for( auto num1 : nums1 )
            num1Set.insert( num1 );

        for( auto num2 : nums2)
            num2Set.insert( num2 );
        
        
        for( auto num1 : num1Set ){
            if( !num2Set.count( num1 ) )
                num1Vector.push_back( num1 );
        }

        for( auto num2 : num2Set ){
            if( !num1Set.count( num2 ) )
                num2Vector.push_back( num2 );
        }   

        return { num1Vector, num2Vector };
    }
};