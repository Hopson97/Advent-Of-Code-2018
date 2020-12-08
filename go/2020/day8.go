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

const (
	ExitHistoryRepeat = 0
	ExitSuccess = 1
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

func (c* gameconsole) reset() {
	c.ip = 0
	c.acc = 0
	c.history = make(map[int]bool)
}

func (c *gameconsole) run() int {
	status := 0
	for true {
		if c.ip >= len(c.program) {
			status = ExitSuccess
			break
		}
		if _, ok := c.history[c.ip]; ok {
			status = ExitHistoryRepeat
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
	return status
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
	fmt.Println(console.acc)
	console.reset()

	orig := make([]instruction, len(console.program))
	copy(orig, console.program)

	tryme := false
	for i := range console.program {
		if console.program[i].op == "jmp" {
			console.program[i].op = "nop"
			tryme = true
		} else if console.program[i].op == "nop" { 
			console.program[i].op = "jmp"
			tryme = true
		}
		if tryme {
			tryme = false
			if console.run() == ExitSuccess {
				fmt.Println(console.acc)
				break
			} else {
				copy(console.program, orig)
				console.reset()
			}
		}
	}
}
