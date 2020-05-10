class Solution {
   public:
   int gcd(int a, int b){
      return !b?a:gcd(b,a%b);
   }
   bool checkStraightLine(vector<vector<int>>& coordinates) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(coordinates.size() <= 2)
             return 1;
        int xn = coordinates[0][0] - coordinates[1][0];
        int yn = coordinates[0][1] - coordinates[1][1];
        for(int i=2; i < coordinates.size(); i++)
	{
		int x = coordinates[i][0];
            	int y = coordinates[i][1];   
		if( xn*(y - coordinates[0][1]) != yn*(x - coordinates[0][0]) )
			        return false;
	}
	    return true;
   }
};
