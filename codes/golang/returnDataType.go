package main

import "fmt"

func ret(x int) {
	fmt.Printf("%T", x)
}

func main() {
	v := 42 // change me!
	ret(v)
}
