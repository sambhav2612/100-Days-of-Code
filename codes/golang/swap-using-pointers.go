package main

import (
	"fmt"
)

func main() {
	
	i, j := 10, 20
	
	fmt.Println("Before swap:", i, j)
	
	p, q := &i, &j
	
	*p = *p + *q
	*q = *p - *q
	*p = *p - *q
	
	fmt.Println("After swap:", i, j)
}
