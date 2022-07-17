import java.util.*;
import java.lang.*;
class Solution {
    public void reverseString(char[] s) {
        int first = 0, last = s.length;
        while (first < --last) {
            swap(s, first++, last);
        }
    }
    
    private void swap(char[] s, int i, int j) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}