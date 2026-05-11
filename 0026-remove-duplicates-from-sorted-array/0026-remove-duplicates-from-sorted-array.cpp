class Solution {
public:
    int removeDuplicates(vector<int>& v) {
       int d=0;
       int i=1;
       while(i<v.size()){
        if(v[i]==v[d]){
            i++;
        }
        else{
            d++;
            v[d]=v[i];
        }
       }return (d+1);
    }
};