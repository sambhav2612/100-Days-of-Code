// generate random numbers in golang

package main

import (
	"fmt"
	"math/rand"
)

func main(){
	fmt.Println("Number is: ", rand.Intn(10))
}