package main

import (
	"fmt"
	"io/ioutil"
	"strconv"
	"strings"
)

func split(str string) []string {
	return strings.Split(strings.Replace(str, "\r\n", "\n", -1), "\n")
}

func readFileLinesToIntList(fileName string) []int {
	buff, err := ioutil.ReadFile("input/day1.txt")
	if err != nil {
		fmt.Println(err)
	}

	list := split(string(buff))
	var ints []int

	for _, n := range list {
		a, err := strconv.Atoi(n)
		if err != nil {
			fmt.Println(err)
		}
		ints = append(ints, a)
	}
	return ints
}
