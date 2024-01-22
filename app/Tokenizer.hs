module Tokenizer where
import Data.Char (isAlphaNum)

data Token  = Comment String
            | Bracket String
            | Operator String
            | Escape String
            | Whitespace String
            | Other String

instance Show Token where
    show (Comment c) = c
    show (Bracket b) = b
    show (Operator o) = o
    show (Escape e) = e
    show (Whitespace w) = w
    show (Other o) = o

getTokens :: String -> [Token] -> [Token]
getTokens "" tokens = tokens
getTokens (firstChar : remainder) tokens = case firstChar of
    '/'     -> case remainder of
                '/':r   -> getTokens
                            r
                            (Comment [firstChar, '/'] : tokens)
                '*':r   -> getTokens
                            r
                            (Comment [firstChar, '*'] : tokens)
                _       -> getTokens
                            remainder
                            (Other [firstChar] : tokens)
    '*'     -> case remainder of
                '/':r   -> getTokens
                            r
                            (Comment [firstChar, '/'] : tokens)
                _       -> getTokens
                            remainder
                            (Other [firstChar] : tokens)

    '['     -> getTokens remainder (Bracket [firstChar] : tokens)
    ']'     -> getTokens remainder (Bracket [firstChar] : tokens)
    '{'     -> getTokens remainder (Bracket [firstChar] : tokens)
    '}'     -> getTokens remainder (Bracket [firstChar] : tokens)
    '('     -> getTokens remainder (Bracket [firstChar] : tokens)
    ')'     -> getTokens remainder (Bracket [firstChar] : tokens)
    '<'     -> getTokens remainder (Bracket [firstChar] : tokens)
    '>'     -> getTokens remainder (Bracket [firstChar] : tokens)

    '-'     -> getTokens remainder (Operator [firstChar] : tokens)
    '@'     -> getTokens remainder (Operator [firstChar] : tokens)
    '!'     -> getTokens remainder (Operator [firstChar] : tokens)
    '^'     -> getTokens remainder (Operator [firstChar] : tokens)
    '='     -> getTokens remainder (Operator [firstChar] : tokens)
    ':'     -> getTokens remainder (Operator [firstChar] : tokens)
    '~'     -> getTokens remainder (Operator [firstChar] : tokens)

    '\\'    -> case remainder of
                '\\':r  -> getTokens
                            r
                            (Escape [firstChar, '\\'] : tokens)
                '\n':r  -> getTokens
                            r
                            (Escape [firstChar, '\n'] : tokens)
                '$':r   -> getTokens
                            r
                            (Escape [firstChar, '$'] : tokens)
                ')':r   -> getTokens
                            r
                            (Escape [firstChar, ')'] : tokens)
                _       -> getTokens
                            remainder
                            (Other [firstChar] : tokens)
    '$'     -> case remainder of
                a:(b:r) ->
                    if isAlphaNum a && isAlphaNum b
                        then getTokens
                                r
                                (Escape [firstChar, a, b] : tokens)
                        else getTokens
                                [firstChar]
                                (Operator [firstChar] : tokens)
                _       -> getTokens
                            remainder
                            (Operator [firstChar] : tokens)

    '\b'    -> getTokens remainder (Whitespace [firstChar] : tokens)
    '\t'    -> getTokens remainder (Whitespace [firstChar] : tokens)
    '\r'    -> getTokens remainder (Whitespace [firstChar] : tokens)
    '\n'    -> getTokens remainder (Whitespace [firstChar] : tokens)
    '\f'    -> getTokens remainder (Whitespace [firstChar] : tokens)
    ' '     -> getTokens remainder (Whitespace [firstChar] : tokens)
    '\x7f'  -> getTokens remainder (Whitespace [firstChar] : tokens)

    _       -> case tokens of
                (Other o):l -> getTokens
                                remainder
                                (Other (o++[firstChar]) : l)
                _           -> getTokens
                                remainder
                                (Other [firstChar] : tokens)

tokenize :: String -> [Token]
tokenize s = reverse $ getTokens s []
