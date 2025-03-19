class Solution {
public:
    int tribonacci(int n) {
        // 트리보나치 수열에 대한 문제. 
        // DP의 기초를 물어보는 문제입니다

        if( 0 == n )
            return 0;
        else if( 1 == n )
            return 1;
        else if( 2 == n )
            return 1;
        
        int arrays[38] = {};

        arrays[0] = 0;
        arrays[1] = 1;
        arrays[2] = 1;

        for( int i = 3; i <= n; i++)
            arrays[ i ] = arrays[ i -3 ] + arrays[ i -2 ] + arrays[ i -1 ];

        return arrays[ n ];
    }
};