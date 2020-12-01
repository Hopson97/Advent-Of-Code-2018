package main

import (
	"fmt"
)

func find2020SumProduct(expenses []int) int {
	for _, j := range expenses {
		for _, i := range expenses {
			if i+j == 2020 {
				return i * j
			}
		}
	}
	return 0
}

func find2020TripleSumProduct(expenses []int) int {
	for _, j := range expenses {
		for _, i := range expenses {
			for _, k := range expenses {
				if i+j+k == 2020 {
					return i * j * k
				}
			}
		}
	}
	return 0
}

func main() {
	expenses := readFileLinesToIntList("input/day1.txt")

	// Part 1
	fmt.Println(find2020SumProduct(expenses))

	// Part 2
	fmt.Println(find2020TripleSumProduct(expenses))

	fmt.Println(9)
}
