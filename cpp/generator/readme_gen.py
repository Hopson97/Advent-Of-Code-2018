from get_content import getContent

readmeTemplate = getContent("readme.txt")
    
for i in range(2015, 2020):
    with open(str(i) + '/README.md', 'w') as readme:
        readmeContent = readmeTemplate.replace("YEAR", str(i)) + '\n'

        readmeContent += "|Day|Part One|Part Two|Link|\n"
        readmeContent += "|:---:|:----:|:------:|:---:|\n"
        for day in range (1, 26):
            readmeContent += "|Day {0}|NA|NA|[{2} Day {0} File]({1})|\n".format(
                str(day), 
                "https://github.com/Hopson97/advent-of-code/blob/master/cpp/{0}/day{1}.cpp".format(
                    str(i),
                    str(day)
                ),
                str(i))



        readme.write(readmeContent)