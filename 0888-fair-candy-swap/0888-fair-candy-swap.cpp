class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        const int sum_a = reduce(begin(A), end(A));
        const int sum_b = reduce(begin(B), end(B));
        const int diff = (sum_a - sum_b) / 2;

        sort(begin(A), end(A));sort(begin(B), end(B));
        
        for (int i = 0, j = 0; i < size(A) && j < size(B); ) {
            const int d = A[i] - B[j];
            if (d == diff) return {A[i], B[j]};

            if (d < diff) {
                i++;
            } else {
                ++j;
            }
        }
        return {-1, -1};
    }
};