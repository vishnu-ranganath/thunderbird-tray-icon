module Main where

import System.IO (readFile')
import Control.Monad (mapM_)
import Tokenizer (tokenize)

main :: IO ()
{-
main = do
    infile <- getLine
    contents <- readFile' infile
    mapM_ putStrLn $ getTokens $ lines contents
-}

main = getLine
    >>= readFile'
    >>= \ x -> mapM_
        print
        (tokenize x)
