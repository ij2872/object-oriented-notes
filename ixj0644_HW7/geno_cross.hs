import System.Environment
import Data.Char

main = do
    -- Get command line args
    args <- getArgs;
    let string1 = args !! 0 
    let string2 = args !! 1
    let string3 = args !! 2
    let string4 = args !! 3
    
    -- Find monohybrid crosses
    let monohybrid_cross1 = geno string1 string2;
    let monohybrid_cross2 = geno string3 string4;
    let dihybrid_cross = perm monohybrid_cross1 monohybrid_cross2;
    --mapM_ putStrLn monohybrid_cross1;
    --mapM_ putStrLn monohybrid_cross2;
    
    ----------- Running DiCross ----------
    --mapM_ putStrLn head dihybrid_cross    
    let result = combine_arr dihybrid_cross;
    mapM_ putStrLn result;




geno str str2 = do x <- str; y <- str2; let {combo = if(isLower x) then [y, x] else [x, y]}; return combo;
    
-- Permutation of genos return. [GG Gg gG gg]p[TT Tt tT tt] -> [GGTT GG Tt....]    
perm arr1 arr2 = do x <- arr1; y <- arr2; return [x,y];

combine_arr [] = [];
combine_arr (x:xs) = (x !! 0 ++ x !! 1) : combine_arr xs;




