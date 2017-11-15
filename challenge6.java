// Challenge 6
// Link to the problem: https://www.hackerrank.com/challenges/30-review-loop/problem

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int numStr, count = 1;
        String str;
        String evenStr = "", oddStr = "";
        
        Scanner in = new Scanner(System.in);
        numStr = Integer.parseInt(in.nextLine());
        
        while(count <= numStr)
        {
            str = in.nextLine();
            
            for(int i = 0; i < str.length(); i++)
            {
                if(i%2 == 0)
                    evenStr = evenStr + str.charAt(i);
                else
                    oddStr = oddStr + str.charAt(i);
            }
            System.out.println(evenStr + " " + oddStr);
            
            evenStr = "";
            oddStr = "";
            count++;
        }
        in.close();
    }
}