min = 8
max = 26

for i in range(min, max, 1):
    i = str(i)
    with open("day" + i + ".go", "w") as gofile:
        gofile.write('\
/*\n\
	Day ' + i + '\n\
	https://adventofcode.com/2020/day/' + i + '\n\
*/\n\
package main\n\
\n\
import (\n\
	"fmt"\n\
	"strings"\n\
)\n\
\n\
func day' + i + '() {\n\
	answers := readFileToString("input/day' + i + '.txt")\n\
	fmt.Println()\n\
	fmt.Println()\n\
}\n\
')
    with open("input/day" + i + ".txt", "w") as input:
        input.write(" ")
