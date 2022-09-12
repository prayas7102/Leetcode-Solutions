class Solution {
  int determineBit(int n, int pos) {
      
    bool x = (n & (1 << pos)) != 0;
    // cout<<x<<n<<pos<<endl;
    return x;
  }
  public:
    vector < int > singleNumber(vector < int > & arr) {
      vector < int > ans;
      int xorsum = 0;
      int n = arr.size();

      for (int i = 0; i < n; ++i) {
        xorsum = xorsum ^ arr[i];
      }
        // cout<<xorsum;
      int xors=xorsum;
      int itr = 0;
      int pos = 0;
      while (itr != 1) {
        itr = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
      }
        // cout<<pos;
      int newxor = 0;

      for (int i = 0; i < n; ++i) {
        if (determineBit(arr[i], pos-1)) {
            // cout<<arr[i];
          newxor ^= arr[i];
        }
      }
        // cout<<newxor;
      ans.push_back(newxor);
      ans.push_back(newxor ^ xors);
      return ans;
    }
};