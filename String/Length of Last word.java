class Solution {
    public int lengthOfLastWord(String s) {
     Stack<String> stack = new Stack<>();
        String[]  words = s.split(" ");

        for(String n : words){
            stack.push(n);
        }

        return stack.isEmpty() ? 0 : stack.peek().length();

    }
}