package main

import (
	"fmt"
	"math/rand"
)

func add(x int, y int) bool {

	var result int = (x + y)*(x-y)

	 if result > 0 {
		 return true
	 } else {
		 return false
	 }
}

func main() {
	var x int = rand.Intn(10)
	fmt.Println("Random number is: ", x)
	fmt.Println(add(x, x+5))
}
