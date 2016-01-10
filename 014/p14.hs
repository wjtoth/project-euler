import Data.Map as Map
import Data.Maybe

sq :: (Integral a) => a -> a
sq 1 = 1
sq n
	| n `mod` 2 == 0  = quot n 2
	| otherwise = 3*n + 1

sqmap 1 map = Map.insert 1 1 map
sqmap n map 
	| nextlength == Nothing = sqmap n (sqmap (sq n) map)
	| otherwise = Map.insert n ((fromJust nextlength)+1) map
	where nextlength = Map.lookup (sq n) map

buildmap' 1 map = sqmap 1 map
buildmap' n map = buildmap' (n-1) (sqmap n map)

buildmap :: (Integral a, Integral b) => a -> Map a b
buildmap n = buildmap' n Map.empty

solve n = Map.foldrWithKey (\k v acc -> if (v >= (snd acc) && k <= n) then (k,v) else acc) (-1,-1) (buildmap n)
