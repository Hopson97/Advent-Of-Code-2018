/*
	Day 2
	https://adventofcode.com/2020/day/5
*/
package main

import (
	"fmt"
	"sort"
)

func dayFive() {
	passes := readFileLines("input/day5.txt")

	max := 0
	seatIds := []int{}
	for _, pass := range passes {
		rmin, rmax, cmin, cmax := 0, 127, 0, 7
		for _, l := range pass {
			switch l {
			case 'F':
				rmax = (rmin + rmax) / 2
			case 'B':
				rmin = ((rmin + rmax) / 2) + 1
			case 'L':
				cmax = ((cmin + cmax) / 2)
			case 'R':
				cmin = (cmin+cmax)/2 + 1
			}
		}
		seatID := rmin*8 + cmin
		if seatID > max {
			max = seatID
		}
		seatIds = append(seatIds, seatID)
	}
	// Part 1
	fmt.Println(max)

	// Part 2
	//lol
	sort.Sort(sort.IntSlice(seatIds))
	for index := range seatIds {
		if seatIds[index+1] > seatIds[index]+1 {
			fmt.Println(seatIds[index] + 1)
			break
		}
	}

}
