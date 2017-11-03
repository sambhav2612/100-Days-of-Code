// max limit is subject to only 20000 right now

import java.io.*;

class checkPrime {

	static int limit = 20000;

	public static void main(String[] args) {
		
		long sum = 0;
		
		for (long i = 2; i < limit; ++i) {
			if(isPrime(i)) {
				sum += i;
			}
		}
		
		System.out.println(sum);
	}

	static boolean isPrime(long ele) {
		
		boolean flag = true;
		
		for (int i = 2; i < ele; ++i) {
			if(ele % i == 0) {	// divisible
				flag = false;
				break;
			}
		}
		return flag;
	}

import java.util.Scanner;
import java.io.*;

class checkPrime {

	static int limit = 20000;

	public static void main(String[] args) {
		
		long sum = 0;
		
		for (long i = 2; i < limit; ++i) {
			if(isPrime(i)) {
				sum += i;
			}
		}
		
		System.out.println(sum);
	}

	static boolean isPrime(long ele) {
		
		boolean flag = true;
		
		for (int i = 2; i < ele; ++i) {
			if(ele % i == 0) {	// divisible
				flag = false;
				break;
			}
		}
		return flag;
	}


}