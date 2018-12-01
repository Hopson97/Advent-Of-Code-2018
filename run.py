from subprocess import call
import sys

if __name__ == "__main__":
    if len(sys.argv) == 1:
        print("Please input a day")
    else:
        fName = "day" + sys.argv[1] + ".cpp"
        call(["g++", "-Ofast", fName, "-o", "exe"])
        call(["time", "./exe"])