#XCKU040 - KCU105 Pinout

#Configuration Voltage and CFGBVS reference design setup for KCU105 demo.  
#These values should be set appropriately for the board being used.  
#See UG570 for CFGBVS details.

#create_clock -period 25.000 -name gclk [get_nets gclk]

#set_property CONFIG_VOLTAGE 1.8 [current_design]
#set_property CFGBVS GND [current_design]

create_clock -period 25.000 -name gclk [get_nets gclk]

# set_property PACKAGE_PIN F9      [get_ports "clk"] ;# Bank  47 VCCO - VCC3V3   - IO_L5P_HDGC_AD7P_47
# set_property IOSTANDARD  LVCMOS18  [get_ports "clk"] ;# Bank  47 VCCO - VCC3V3   - IO_L5P_HDGC_AD7P_47

#Counter 8-bit input and outputs - RST signal and LED indicators
set_property IOSTANDARD LVCMOS18 [get_ports {LED[0]}]
set_property IOSTANDARD LVCMOS18 [get_ports {LED[1]}]
set_property IOSTANDARD LVCMOS18 [get_ports {LED[2]}]
set_property IOSTANDARD LVCMOS18 [get_ports {LED[3]}]
set_property IOSTANDARD LVCMOS18 [get_ports {LED[4]}]
set_property IOSTANDARD LVCMOS18 [get_ports {LED[5]}]
set_property IOSTANDARD LVCMOS18 [get_ports {LED[6]}]
set_property IOSTANDARD LVCMOS18 [get_ports {LED[7]}]
set_property IOSTANDARD LVCMOS18 [get_ports {RST}]

set_property PACKAGE_PIN H10 [get_ports {LED[0]}]
set_property PACKAGE_PIN H9  [get_ports {LED[1]}]
set_property PACKAGE_PIN G10 [get_ports {LED[2]}]
set_property PACKAGE_PIN F10 [get_ports {LED[3]}]
set_property PACKAGE_PIN H11 [get_ports {LED[4]}]
set_property PACKAGE_PIN G11 [get_ports {LED[5]}]
set_property PACKAGE_PIN G12 [get_ports {LED[6]}]
set_property PACKAGE_PIN F12 [get_ports {LED[7]}]
set_property PACKAGE_PIN B11 [get_ports {RST}]
