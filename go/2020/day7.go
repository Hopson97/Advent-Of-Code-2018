/*
	Day 7
	https://adventofcode.com/2020/day/7
*/
package main

import (
	"fmt"
	"strings"
)

var descs = []string{}
var cache = map[string]bool{}

func count(kind string) int {
	sum := 0
	for _, desc := range descs {
		if strings.Contains(desc, kind) {
			split := strings.Split(desc, " ")
			buff := split[0] + " " + split[1]
			if buff != kind {
				if _, ok := cache[buff]; !ok {
					cache[buff] = true
					sum += count(buff)
					sum++
				}

			}
		}
	}
	return sum
}

func day7() {
	descs = readFileLines("input/day7.txt")
	fmt.Println(count("shiny gold"))
	fmt.Println()
}
