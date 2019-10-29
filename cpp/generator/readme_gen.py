from get_content import getContent

readmeTemplate = getContent("readme.txt")
    
for i in range(2015, 2020):
    with open(str(i) + '/README.md', 'w') as readme:
        readmeContent = readmeTemplate.replace("YEAR", str(i)) + '\n'

        readmeContent += "|Day|Part One|Part Two|Link|\n"
        readmeContent += "|:---:|:----:|:------:|:---:|\n"
        for i in range (1, 26):
            print (i)



        readme.write(readmeContent)