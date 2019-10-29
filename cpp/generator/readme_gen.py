from get_content import getContent

readmeTemplate = getContent("readme.txt")
    
for i in range(2015, 2020):
    with open(str(i) + '/README.md', 'w') as readme:
        readme.write(readmeTemplate.replace("YEAR", str(i)))