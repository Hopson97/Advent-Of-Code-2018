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

func readFileToString(fileName string) string {
	buff, err := ioutil.ReadFile(fileName)
	if err != nil {
		fmt.Println(err)
	}
	return string(buff)
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

// https://stackoverflow.com/questions/57004213/how-in-golang-to-remove-the-last-letter-from-the-string
func removeLastRune(s string) string {
	r := []rune(s)
	return string(r[:len(r)-1])
}
