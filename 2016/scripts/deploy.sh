sh scripts/build.sh release 

rm -rf -d aoc16

mkdir aoc16

cp bin/release/aoc16 aoc16
cp -r res aoc16

echo "Deploy build created."
echo "cd aoc16 to find it"