package main

import "fmt"

var r1, r2 int = 3, 3

func main() {
	var first, middle, last string = "sambhav", "", "jain"
	//or
	//use this instead for automatic type dec: 	first, middle, last string := "sambhav", "", "jain"

	//However, outside a function, every statement begins with a keyword (var, func, and so on) and so the := construct is not available.

	if middle != "" {
		fmt.Print(r1, r2, first, middle, last)		// somewhat like java but easier to understand
	} else {
		fmt.Print(r1, r2, first, last)		
	}
}
