
# StateMover Path
set StateMoverPath ~/StateMover

# Project Name
set projName counter
set prModule count
set taskName inst_count

# Part Name 
set part xczu2eg-sfva625-1-e

# define the output directory area.
set outputDir ./$projName
file mkdir $outputDir

# create project
create_project -part xczu2eg-sfva625-1-e -f $projName $outputDir

# Set project properties
set obj [current_project]
set_property -name "board_part" -value "Interwiser:none:part0:2.0" -objects $obj
set_property -name "default_lib" -value "xil_defaultlib" -objects $obj
set_property -name "platform.accelerator_binary_content" -value "bitstream" -objects $obj
set_property -name "platform.accelerator_binary_format" -value "xclbin2" -objects $obj
set_property -name "platform.board_id" -value "xczu2eg" -objects $obj
set_property -name "platform.description" -value "Vivado generated DSA" -objects $obj
set_property -name "platform.dr_bd_base_address" -value "0" -objects $obj
# set_property -name "platform.emu_dir" -value "emu" -objects $obj
set_property -name "platform.flash_interface_type" -value "bpix16" -objects $obj
set_property -name "platform.flash_offset_address" -value "0" -objects $obj
set_property -name "platform.flash_size" -value "1024" -objects $obj
set_property -name "platform.host_architecture" -value "x86_64" -objects $obj
set_property -name "platform.host_interface" -value "pcie" -objects $obj
set_property -name "platform.num_compute_units" -value "96" -objects $obj
set_property -name "platform.platform_state" -value "pre_synth" -objects $obj
set_property -name "platform.vendor" -value "xilinx" -objects $obj
set_property -name "platform.version" -value "0.0" -objects $obj
#
# setup design sources and constraints
# add_files [ glob top.v count.v]
import_files [glob top.v count.v]
add_files -fileset constrs_1 LED_Count.xdc

add_files [ glob $StateMoverPath/IPs/IL/interruption_logic_v1.v ]
import_files [ glob $StateMoverPath/IPs/IL/il_vio_2.xci ]

set_property top top [current_fileset]

# create a PR project if prModule is set
if { $prModule ne "" } {
	set_property PR_FLOW 1 [current_project]
	create_partition_def -name bist -module $prModule
	create_reconfig_module -name $prModule -partition_def [get_partition_defs bist] -define_from $prModule
	create_pr_configuration -name config_1 -partitions [list $taskName:$prModule]
	set_property PR_CONFIGURATION config_1 [get_runs impl_1]
}

exit

