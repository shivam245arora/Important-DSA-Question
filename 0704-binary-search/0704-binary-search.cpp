class Solution {
public:
    int search(vector<int>& v, int key) {
            int l = 0, r = v.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (v[m] == key)
        {
            return m;
        }
        if (key < v[m])
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return -1;
}
    
};