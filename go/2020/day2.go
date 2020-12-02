/*
	Day 2
	https://adventofcode.com/2020/day/2
*/
package main

import (
	"fmt"
	"strconv"
	"strings"
)

func getMinMax(policy string) (int, int) {
	split := strings.Split(policy, "-")

	min, err := strconv.Atoi(split[0])
	if err != nil {
		fmt.Println(err)
	}
	max, err := strconv.Atoi(split[1])
	if err != nil {
		fmt.Println(err)
	}

	return min, max
}

func dayTwo() {
	passwordPolicies := readFileLines("input/day2.txt")

	sump1 := 0
	sump2 := 0
	for _, passwordPolicy := range passwordPolicies {
		split := strings.Fields(passwordPolicy)
		min, max := getMinMax(split[0])
		char := strings.Split(split[1], ":")[0]
		password := split[2]

		count := strings.Count(password, char)
		if count >= min && count <= max {
			sump1++
		}

		c := char[0]
		if (password[min-1] == c && password[max-1] != c) || (password[min-1] != c && password[max-1] == c) {
			sump2++
		}
	}

	// Part 1
	fmt.Println(sump1)

	// Part 2
	fmt.Println(sump2)

}
