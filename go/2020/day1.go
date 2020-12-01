package main

import (
	"fmt"
	"io/ioutil"
	"strconv"
)

func find2020SumProduct(expenses []string) int {
	for _, j := range expenses {
		for _, i := range expenses {
			a, _ := strconv.Atoi(j)
			b, _ := strconv.Atoi(i)
			if a+b == 2020 {
				return a * b
			}
		}
	}
	return 0
}

func find2020TripleSumProduct(expenses []string) int {
	for _, j := range expenses {
		for _, i := range expenses {
			for _, k := range expenses {
				a, _ := strconv.Atoi(j)
				b, _ := strconv.Atoi(i)
				c, _ := strconv.Atoi(k)
				if a+b+c == 2020 {
					return a * b * c
				}
			}
		}
	}
	return 0
}

func main() {
	//Input
	buff, err := ioutil.ReadFile("input/day1.txt")
	if err != nil {
		fmt.Println(err)
	}

	expenses := split(string(buff))

	// Part 1
	fmt.Println(find2020SumProduct(expenses))

	// Part 2
	fmt.Println(find2020TripleSumProduct(expenses))

	fmt.Println(9)
}
