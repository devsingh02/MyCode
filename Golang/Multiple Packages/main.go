package main

import (
	"fmt"
	"main/Helper" //imported function
)

func main() {
	fmt.Printf("Deep...\n")
	a, b := 10, 20
	sum := a + b + Helper.Data() //calling imported function
	fmt.Printf("Sum = %v", sum)
}
