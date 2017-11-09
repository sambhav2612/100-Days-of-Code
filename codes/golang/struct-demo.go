package main

import "fmt"

type Vertex struct {
	X int
	Y int
}

func (v Vertex) returnX() int {
	return v.X
} 
	
func (v Vertex) returnY() int {
	return v.Y
}

func main() {
	v := Vertex{1, 2}
	fmt.Println(v.returnX(), v.returnY())
}
