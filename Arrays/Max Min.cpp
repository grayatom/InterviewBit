int Solution::solve(vector<int> &A) {
    int minele = INT_MAX, maxele = INT_MIN;
    for(int i = 0; i < A.size(); i++) {
        if(A[i] > maxele) maxele = A[i];
        if(A[i] < minele) minele = A[i];
    }
    return maxele + minele;
}
