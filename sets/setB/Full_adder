
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity Control_Unit is
    Port (
        input1 : in  STD_LOGIC;
        input2 : in  STD_LOGIC;
        ctrl   : in  STD_LOGIC;
        output1: out STD_LOGIC;
        output2: out STD_LOGIC
    );
end Control_Unit;
architecture Behavioral of Control_Unit is
begin
    process (input1, input2, ctrl)
    begin
        case ctrl is
            when '0' =>
                -- Control logic for case 0
                if input1 = '1' then
                    output1 <= '1';
                else
                    output1 <= '0';
                end if;
                
                if input2 = '1' then
                    output2 <= '1';
                else
                    output2 <= '0';
                end if;
                 when '1' =>
                -- Control logic for case 1
                output1 <= input1 and input2;
                output2 <= input1 or input2;
                 when others =>
                -- Default case
                output1 <= '0';
                output2 <= '0';
        end case; 
    end process;
end Behavioral;
