package main

import "fmt"

var prev = []int{}

func check(v int) bool {
	for j, a := range prev {
		for k, b := range prev {
			if j == k {
				continue
			}
			if (a + b) == v {
				return false
			}
		}
	}
	return true
}

func sumslice(slice []int) int {
	sum := 0
	for _, val := range slice {
		sum += val
	}
	return sum
}

func day9() {
	answers := readFileLinesToIntList("input/day9.txt")

	target := 0
	for _, v := range answers {
		if len(prev) == 25 {
			if check(v) {
				target = v
				break
			} else {
				prev = prev[1:]
			}
		}
		prev = append(prev, v)
	}

	fmt.Println(target)

	buff := []int{}
	min := 0
	max := 0
	for i := 0; i < len(answers); i++ {
		buff = nil
		min = 0
		max = 70628440051680
		for j := i; j < len(answers); j++ {
			v := answers[j]
			buff = append(buff, v)
			sum := sumslice(buff)
			if v > min {
				min = v
			} else if v < max {
				max = v
			}
			if sum == target {
				fmt.Println(min + max)
				return
			} else if sum > target {
				break
			}
		}
	}
}
