class Solution {
    public boolean isSubsequence(String s, String t) {
        int n1 = s.length();
        int n2 = t.length();
        if(n1 == 0) return true;
        if(n1 > n2 ) return false;
        int idx = 0;

        for(int i = 0; i < n2; i++){
            if(t.charAt(i) == s.charAt(idx)){
                idx++;
            }
            if(idx == n1) return true;
        }
        return (idx == n1);
    }
}