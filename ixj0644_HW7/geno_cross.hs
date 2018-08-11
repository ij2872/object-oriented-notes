import System.Environment
import Data.Char

main = do
    -- Get command line args
    args <- getArgs;
    let string1 = args !! 0 
    let string2 = args !! 1
    let string3 = args !! 2
    let string4 = args !! 3
    let arg_length = length args;

    -- Test for amount of arguments given by user
    if(arg_length == 2)
        then do let monohybrid_cross1 = geno string1 string2
                mapM_ putStrLn monohybrid_cross1
        else if (arg_length == 4) 
        then do
                -- Find monohybrid crosses
                let monohybrid_cross1 = geno string1 string2;
                let monohybrid_cross2 = geno string3 string4;
                let dihybrid_cross = perm monohybrid_cross1 monohybrid_cross2;
                mapM_ putStrLn monohybrid_cross1;
                mapM_ putStrLn monohybrid_cross2;
                
                ----------- Running DiCross ----------
                let result = combine_arr dihybrid_cross;
                mapM_ putStrLn result;
        else do putStrLn "-1"
    




geno str str2 = do x <- str; y <- str2; let {combo = if(isLower x) then [y, x] else [x, y]}; return combo;
    
-- Permutation of genos return. [GG Gg gG gg]p[TT Tt tT tt] -> [GGTT GG Tt....]    
perm arr1 arr2 = do x <- arr1; y <- arr2; return [x,y];

combine_arr [] = [];
combine_arr (x:xs) = (x !! 0 ++ x !! 1) : combine_arr xs;




