package main

import "fmt"

func swap(x, y string) (string, string) {
	return y, x
}

func main() {
	a := "hello"
	b := "world"
	fmt.Println(a, b)	
	a, b = swap(a, b)
	fmt.Println(a, b)
}