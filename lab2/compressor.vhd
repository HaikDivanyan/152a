--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:36:57 04/25/2023
-- Design Name:   
-- Module Name:   C:/Users/Student/Desktop/nf2/152a/lab2/compressor.vhd
-- Project Name:  lab2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: compressor
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY compressor IS
END compressor;
 
ARCHITECTURE behavior OF compressor IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT compressor
    PORT(
         clk : IN  std_logic;
         D : IN  std_logic_vector(11 downto 0);
         S : OUT  std_logic;
         E : OUT  std_logic_vector(2 downto 0);
         F : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal D : std_logic_vector(11 downto 0) := (others => '0');

 	--Outputs
   signal S : std_logic;
   signal E : std_logic_vector(2 downto 0);
   signal F : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: compressor PORT MAP (
          clk => clk,
          D => D,
          S => S,
          E => E,
          F => F
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
