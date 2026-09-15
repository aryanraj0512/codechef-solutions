// Problem: AUDIBLE
// Platform: codechef
// Language: Java​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/AUDIBLE
// Solved on: 2026-09-15T07:56:31.256Z

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int x= sc.nextInt();
		    if(x>=67 && x<=45000){
		        System.out.println("YES");
		    }else System.out.println("NO");
		}

	}
}
