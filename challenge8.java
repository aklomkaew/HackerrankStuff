// Challenge 8
// Link to the problem: https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem

import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        String name, s;
        int phone;
        Map<String,Integer> telephoneBook = new HashMap<String,Integer>();
        int n = in.nextInt();
        for(int i = 0; i < n; i++)
        {
            name = in.next();
            phone = in.nextInt();
            telephoneBook.put(name,phone);
        }
        while(in.hasNext())
        {
            s = in.next();
            if(telephoneBook.get(s) == null)
                System.out.println("Not found");
            else
                System.out.println(s + "=" + telephoneBook.get(s));
        }
        in.close();
    }
}
