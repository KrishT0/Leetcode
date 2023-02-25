class Solution {
    public String removeDuplicates(String s) {
      Stack <Character> mylist = new Stack <> ();

      for(char c : s.toCharArray()){
          if(!mylist.empty() &&  mylist.peek() == c){
              mylist.pop();
          }

          else{
              mylist.push(c);
          }
      }

      StringBuilder sb = new StringBuilder();
      for(char str : mylist){
          sb.append(str);
      }

      return sb.toString();


    }

    
}