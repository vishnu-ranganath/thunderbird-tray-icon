module Main where

import System.IO (readFile')
import Control.Monad (mapM_)
import Tokenizer (getTokens)

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
        putStrLn
        (getTokens (lines x ))
