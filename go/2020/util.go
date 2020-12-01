package main

import "strings"

func split(str string) []string {
	return strings.Split(strings.Replace(str, "\r\n", "\n", -1), "\n")
}
