
import os
import re

def getContent(fileName):
    f = open("generator/" + fileName, "r")
    c = str(f.read())
    f.close()
    return c

mainTemplate = getContent("main.txt")
declarationTemplate = getContent("v2/declare.txt")
implementationTemplate = getContent("v2/source.txt")

cmakeTemplate = getContent("cmake.txt")
readmeTemplate = getContent("readme.txt")

dirName = '2018'
year = dirName
if not os.path.exists(dirName):
    #Create dirs
    os.mkdir(dirName)
    os.mkdir(dirName + "/inputs")
    sources = ""
    #Write header file
    with open(dirName + '/aoc' + year + ".h", 'w') as header:
        header.write("#pragma once\n\n")
        header.write("#include <aoc/util.h>\n")
        header.write("#include <aoc/aoc.h>\n\n")
        header.write("namespace aoc" + year + "{ ")
        #Create main.cpp
        with open(dirName + '/main.cpp', 'w') as main:
            main.write(mainTemplate.replace("YEAR", year))
        #Create daily files
        for i in range(20):
            header.write(declarationTemplate.replace("DAY", str(i + 1)).replace("YEAR", year))
            #Create implementation files
            with open(dirName + '/day' + str(i + 1) + ".cpp", 'w') as day:
                day.write(implementationTemplate.replace("DAY", str(i + 1)).replace("YEAR", year))
                sources += "\tday" + str(i + 1) + '.cpp\n'
            
            #Create input files
            with open(dirName + '/inputs/day' + str(i + 1) + ".txt", 'w') as day:
                day.write("")
        header.write("} // aoc" + year + '\n')
    
    #Create CMakeLists
    with open(dirName + '/CMakeLists.txt', 'w') as cmake:
        cmake.write(cmakeTemplate.replace("SOURCES", sources).replace("YEAR", year))
    
    #Create README
    with open(dirName + '/README.md', 'w') as readme:
        readme.write(readmeTemplate.replace("YEAR", year))