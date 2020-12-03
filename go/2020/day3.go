/*
	Day 2
	https://adventofcode.com/2020/day/2
*/
package main

import (
	"fmt"
)

func traverseSlope(xd int, yd int, tobogganMap []string) int {
	x := 0
	y := 0
	count := 0
	for true {
		x += xd
		y += yd
		if y >= len(tobogganMap) {
			break
		}
		if x >= len(tobogganMap[0]) {
			x -= len(tobogganMap[0])
		}

		if tobogganMap[y][x] == '#' {
			count++
		}
	}
	return count
}

func dayThree() {
	tobogganMap := readFileLines("input/day3.txt")

	// Part 1

	// Part 1
	fmt.Println(traverseSlope(3, 1, tobogganMap))

	// Part 2
	fmt.Println(
		traverseSlope(1, 1, tobogganMap) *
			traverseSlope(3, 1, tobogganMap) *
			traverseSlope(5, 1, tobogganMap) *
			traverseSlope(7, 1, tobogganMap) *
			traverseSlope(1, 2, tobogganMap))

}
