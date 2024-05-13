
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
entity signoverflow is
    Port ( a : in  STD_LOGIC_VECTOR(3 downto 0);
           b : in  STD_LOGIC_VECTOR(3 downto 0);
           overflow : out  STD_LOGIC);
end signoverflow;
architecture Behavioral of signoverflow is
begin
	process(a,b)
		variable sum: STD_LOGIC_VECTOR(4 downto 0);
		begin
		sum:=('0' & a) + ('0' & b);
		if sum(sum'high)='1'
			then overflow <= '1';
			else
				overflow <= '0';
				end if;
	end process;
end Behavioral;
