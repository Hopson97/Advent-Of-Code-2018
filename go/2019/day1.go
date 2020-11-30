package main

import (
	"fmt"
	"io/ioutil"
	"strconv"
)

func main() {
	buff, err := ioutil.ReadFile("input/day1.txt")
	if err != nil {
		fmt.Println(err)
	}

	masses := split(string(buff))

	sum := 0
	for _, mass := range masses {
		massNumber, err := strconv.Atoi(mass)
		if err != nil {
			fmt.Println(err)
		}
		sum += massNumber/3 - 2
	}
	fmt.Println(sum)

}
