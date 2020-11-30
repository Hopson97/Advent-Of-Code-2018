package main

import (
	"fmt"
	"io/ioutil"
	"strconv"
)

func fuelNeeded(mass int) int {
	return mass/3 - 2
}

func fueler(in int) int {
	f := fuelNeeded(in)
	if f <= 0 {
		return in
	}
	return in + fueler(f)
}

func main() {
	//Input
	buff, err := ioutil.ReadFile("input/day1.txt")
	if err != nil {
		fmt.Println(err)
	}

	masses := split(string(buff))

	// Part 1
	sum := 0
	for _, mass := range masses {
		massNumber, err := strconv.Atoi(mass)
		if err != nil {
			fmt.Println(err)
		}
		sum += fuelNeeded(massNumber)
	}
	fmt.Println(sum)

	// Part 2
	sum = 0
	for _, mass := range masses {
		massNumber, err := strconv.Atoi(mass)
		if err != nil {
			fmt.Println(err)
		}
		sum += fueler(fuelNeeded(massNumber))
	}
	fmt.Println(sum)
}
