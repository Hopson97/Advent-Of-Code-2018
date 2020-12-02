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

func readFileLines(fileName string) []string {
	buff, err := ioutil.ReadFile(fileName)
	if err != nil {
		fmt.Println(err)
	}
	return split(string(buff))
}

func readFileLinesToIntList(fileName string) []int {
	list := readFileLines(fileName)
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
