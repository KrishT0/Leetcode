class Solution {
    public String toLowerCase(String s) {
        String result = "";
        for(char c : s.toCharArray()){
            if(Character.isUpperCase(c)){
                result = result + Character.toLowerCase(c);
            }

            else {
                result+=c;
            }
        }

        return result;
    }
}