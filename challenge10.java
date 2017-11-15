// Challenge 10
// Link to the problem: https://www.hackerrank.com/challenges/30-binary-numbers/problem

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        String binary = "";
        int count = 0;
        char character;
        int index, size, maxCount = 1;
        
        // convert decimal to binary
        while(num != 0)
        {
            binary += num%2;
            num = num/2;
        }
        size = binary.length();
        
        if(size == 0 || !(binary.contains("1")))
        {
            maxCount = 0;
        }
        
        else{
            for(int i = 0; i < size; i++)
            {
                if(binary.charAt(i) == '1')
                {
                    count++;
                    if(maxCount < count)
                        maxCount = count;
                }
                else
                    count = 0;
            }
        }
        
        System.out.println(maxCount);
    }
}