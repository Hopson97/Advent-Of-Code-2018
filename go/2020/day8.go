package main

import (
	"fmt"
	"strconv"
	"strings"
)

// Instructions for the game console
const (
	InstructionNop = 0
	InstructionAcc = 1
	InstructionJmp = 2
)

type instruction struct {
	op  string
	arg int
}

type gameconsole struct {
	program []instruction
	history map[int]bool
	ip      int
	acc     int
}

func newGameConsole(code []string) *gameconsole {
	console := gameconsole{
		ip:      0,
		acc:     0,
		history: make(map[int]bool),
	}

	for _, line := range code {
		i := strings.Split(line, " ")
		inst := instruction{}
		inst.op = i[0]

		argument, err := strconv.Atoi(i[1])
		if err != nil {
			fmt.Println("error", err, i)
		} else {
			inst.arg = argument
		}
		console.program = append(console.program, inst)
	}

	return &console
}

func (c *gameconsole) run() {
	for true {
		if _, ok := c.history[c.ip]; ok {
			fmt.Println(c.acc)
			break
		}
		c.history[c.ip] = true

		inst := c.program[c.ip]
		switch inst.op {
		case "acc":
			c.opAcc(inst)

		case "jmp":
			c.opJmp(inst)

		case "nop":
			c.opNop(inst)
		}
	}
}

func (c *gameconsole) opNop(inst instruction) {
	c.ip++
}

func (c *gameconsole) opAcc(inst instruction) {
	c.acc += inst.arg
	c.ip++
}

func (c *gameconsole) opJmp(inst instruction) {
	c.ip += inst.arg
}

func day8() {
	code := readFileLines("input/day8.txt")
	console := newGameConsole(code)
	console.run()

}

/*

 */
