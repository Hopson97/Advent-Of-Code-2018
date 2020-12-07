/*
	Day 6
	https://adventofcode.com/2020/day/6
*/
package main

import (
	"fmt"
	"strings"
)

// easier than working out how multi-dimensional slices work tbh
type group struct {
	answers []string
}

func daySix() {
	answers := readFileToString("input/day6.txt")

	groups := []group{}

	rep := strings.Replace(answers, "\r\n", " ", -1)
	groupbuff := group{}

	for _, answer := range strings.Split(rep, " ") {
		if len(answer) == 0 {
			groups = append(groups, groupbuff)
			groupbuff.answers = nil
		} else {
			groupbuff.answers = append(groupbuff.answers, answer)
		}
	}

	p1sum := 0
	p2sum := 0
	for _, group := range groups {
		set := make(map[rune]bool)
		counter := make(map[rune]int)

		for _, answers := range group.answers {
			for _, answer := range answers {
				set[answer] = true
				if _, ok := counter[answer]; ok {
					counter[answer]++
				} else {
					counter[answer] = 1
				}
			}
		}

		p1sum += len(set)

		for _, v := range counter {
			if v == len(group.answers) {
				p2sum++
			}
		}
	}

	fmt.Println(p1sum)
	fmt.Println(p2sum)
}
