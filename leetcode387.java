// Leetcode #387 - First Unique Character in a String
// Link to the problem: https://leetcode.com/problems/first-unique-character-in-a-string/description/

class Solution {
    public int firstUniqChar(String s) {
        HashMap<Character, Integer> map = new HashMap<>();
	    char ch;
	    for(int i = 0; i < s.length(); i++){
            ch = s.charAt(i);
		    if(!map.containsKey(ch)){
			    map.put(ch, 1);
		    }
		    else{
                // increment the value (int)
		        map.put(ch, map.get(ch) + 1);
		    }
	    }
	    // return the lowest key in map
	    for(int i = 0; i < s.length(); i++){
            ch = s.charAt(i);
		    if(map.get(ch) == 1){
			    return s.indexOf(ch);
		    }
	    }
	    return -1;
    }
}
