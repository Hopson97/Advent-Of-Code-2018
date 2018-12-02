removeExpression :: String -> Int
removeExpression s 
    | head s == '+' =  read (tail s) :: Int
    | head s == '-' = -read (tail s) :: Int

part1 :: Int -> [String] -> Int
part1 n [x] = n + removeExpression x
part1 n (x:xs) = part1 (n + (removeExpression x)) (xs)

main :: IO() 
main = do 
    content <- readFile "input.txt" 
    let xs = (lines content)
    print $ part1 0 xs
