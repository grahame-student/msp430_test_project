################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
src/drivers/%.obj: ../src/drivers/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccs1110/ccs/tools/compiler/ti-cgt-msp430_21.6.0.LTS/bin/cl430" -vmspx --use_hw_mpy=none --include_path="C:/ti/ccs1110/ccs/ccs_base/msp430/include" --include_path="C:/Users/gwhite/CCS_Workspaces/ccs_build/msp430_test_project" --include_path="C:/ti/ccs1110/ccs/tools/compiler/ti-cgt-msp430_21.6.0.LTS/include" --advice:power=all --advice:hw_config=all --define=__MSP430FR2033__ -g --c99 --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="src/drivers/$(basename $(<F)).d_raw" --obj_directory="src/drivers" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


