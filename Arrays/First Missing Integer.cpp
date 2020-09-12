#define num 1000000007
int Solution::firstMissingPositive(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] < 1 || arr[i] > n) arr[i] = num;
    }
    for(int i = 0; i < n; i++) 
    {
        if(abs(arr[i])!=num)
        {
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
        }
    }
    for(int i = 0; i < n; i++) if(arr[i] > 0) return i + 1;
    return n + 1;
}
