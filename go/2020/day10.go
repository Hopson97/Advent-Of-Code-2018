package main

import (
	"fmt"
	"sort"
)

func day10() {
	joltages := readFileLinesToIntList("input/day10.txt")
	sort.Ints(joltages)
	fmt.Println(joltages)

	oneDiff := 1
	threeDiff := 1
	for i, v := range joltages {
		if i + 1 < len(joltages) {
			diff := joltages[i + 1] - v 
			if diff == 1 {
				oneDiff++
			} else if diff == 3 {
				threeDiff++
			}
		}
	}
	fmt.Println(oneDiff, threeDiff, oneDiff * threeDiff)
}
