#! /usr/bin/env nix-shell
#! nix-shell -p ghcid
#! nix-shell -p "haskell.packages.ghc924.ghcWithPackages (p: with p; [attoparsec])"
-- #! nix-shell --pure -i "ghci"
#! nix-shell --pure -i "ghcid -T runTests"

{-# LANGUAGE OverloadedStrings #-}

module Compiler where

import Data.Attoparsec.Text
import Control.Applicative ((<|>))
import System.Process

data Command
  = Ls
  | Cat
  deriving (Eq, Show)

type Program = [Command]

runTests :: IO ()
runTests = do
  putStrLn "Hello, world!"
