library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity alu is
    port (
        A, B: in std_logic_vector (3 downto 0); -- Input operands
        Op: in std_logic_vector (2 downto 0); -- Operation control
        Result: out std_logic_vector (3 downto 0); -- Result output
        Zero: out std_logic -- Zero flag output
    );
end entity alu;

architecture Behavioral of alu is
begin
    process (A, B, Op)
        variable temp_result: unsigned (3 downto 0);
    begin
        case Op is
            when "000" => -- Addition
                temp_result := unsigned(A) + unsigned(B);
            when "001" => -- Subtraction
                temp_result := unsigned(A) - unsigned(B);
            when "010" => -- Bitwise AND
                temp_result := unsigned(A) and unsigned(B);
            when "011" => -- Bitwise OR
                temp_result := unsigned(A) or unsigned(B);
            when "100" => -- Bitwise XOR
                temp_result := unsigned(A) xor unsigned(B);
            when others => -- Default case
                temp_result := (others => 'X'); -- Undefined operation
        end case;
        Result <= std_logic_vector(temp_result); -- Convert result to std_logic_vector
        if temp_result = 0 then
            Zero <= '1'; -- Result is zero
        else
            Zero <= '0'; -- Result is not zero
        end if;
    end process;
end architecture Behavioral;

