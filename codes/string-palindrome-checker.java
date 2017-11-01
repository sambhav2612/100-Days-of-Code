/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner( System.in );
		
		String input = scanner.nextLine();
		String reverse = "";
		
		System.out.println("You entered: " + input);
		
		for (int i = 0; i < input.length(); ++i) {
			reverse = input.charAt(i) + reverse;
		}
		
		if (reverse.equals(input)) 
			System.out.println("yup it's a palindrome");
		else
			System.out.println("nope, it ain't palindrome");
	}
}