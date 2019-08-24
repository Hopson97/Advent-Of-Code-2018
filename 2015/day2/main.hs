{-
    Part 1
-}
import Data.List.Split
import Data.List

splitX :: String -> [String]
splitX x = splitOn "x" x

toInt :: [String] -> [Int]
toInt = map read

sideAreas :: [Int] -> [Int]
sideAreas x = [x !! 0 * x !! 1, x !! 1 * x !! 2, x !! 0 * x !! 2]

paperNeeded :: [[Int]] -> Int
paperNeeded [] = 0
paperNeeded (x:xs) = foldr1 min (sideAreas x) + (sum $ map (2*) (sideAreas x)) + paperNeeded xs

part1 :: IO() 
part1 = do 
    content <- readFile "input.txt" 
    print $ paperNeeded $
            map toInt $ 
            map splitX $ 
            splitOn "\n" content
{- 
    Part 2
-}
ribbonLength :: [[Int]] -> Int
ribbonLength [] = 0
ribbonLength (x:xs) = (sum $ map (2*) $ drop 1 $ reverse (sort x)) + product x + ribbonLength xs

part2 :: IO() 
part2 = do 
    content <- readFile "input.txt" 
    print $ ribbonLength $
            map toInt $ 
            map splitX $ 
            splitOn "\n" content
