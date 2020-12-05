/*
	Day 2
	https://adventofcode.com/2020/day/4
*/
package main

import (
	"fmt"
	"strconv"
	"strings"
)

func checkDigitRange(str string, min int, max int) bool {
	val, err := strconv.Atoi(str)
	if err != nil {
		fmt.Println(err)
		return false
	}
	return val >= min && val <= max
}

func dayFour() {
	passports := readFileToString("input/day4.txt")

	groups := []string{}
	validGroups := []string{}
	buffer := ""

	// lol
	splitted := strings.Replace(passports, "\r\n", " ", -1)

	for _, pair := range strings.Split(splitted, " ") {
		if len(pair) == 0 {
			groups = append(groups, buffer)
			buffer = ""
		} else {
			buffer += pair + " "
		}
	}

	// Part 1
	count := 0
	for _, group := range groups {
		if strings.Contains(group, "byr") &&
			strings.Contains(group, "iyr") &&
			strings.Contains(group, "eyr") &&
			strings.Contains(group, "hgt") &&
			strings.Contains(group, "hcl") &&
			strings.Contains(group, "ecl") &&
			strings.Contains(group, "pid") {
			count++
			validGroups = append(validGroups, group)
		}
	}
	fmt.Println(count)

	// Part 2
	count = 0
	for _, group := range validGroups {
		pairs := strings.Split(group, " ")
		crit := 0
		for _, pair := range pairs {
			keyValue := strings.Split(pair, ":")
			if len(keyValue) > 1 {
				key := keyValue[0]
				val := keyValue[1]
				if key == "byr" {
					if checkDigitRange(val, 1920, 2002) {
						crit++
					}
				} else if key == "iyr" {
					if checkDigitRange(val, 2010, 2020) {
						crit++
					}
				} else if key == "eyr" {
					if checkDigitRange(val, 2020, 2030) {
						crit++
					}
				} else if key == "hgt" {
					kind := val[len(val)-2:]
					value := val[:len(val)-2]
					if kind == "in" {
						if checkDigitRange(value, 59, 76) {
							crit++
						}
					} else if kind == "cm" {
						if checkDigitRange(value, 150, 193) {
							crit++
						}
					}
				} else if key == "hcl" {
					_, err := strconv.ParseUint(val[1:], 16, 64)
					if err == nil && len(val[1:]) == 6 {
						crit++
					}
				} else if key == "ecl" {
					if val == "amb" ||
						val == "blu" ||
						val == "brn" ||
						val == "gry" ||
						val == "grn" ||
						val == "hzl" ||
						val == "oth" {
						crit++
					}
				} else if key == "pid" {
					if len(val) == 9 {
						crit++
					}
				}
			}

		}
		if crit == 7 {
			count++
		}
	}
	fmt.Println(count)
}
