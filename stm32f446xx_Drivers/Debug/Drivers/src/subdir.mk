################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/src/stm32f446xx_gpio_driver.c \
../Drivers/src/stm32f446xx_spi_driver.c 

OBJS += \
./Drivers/src/stm32f446xx_gpio_driver.o \
./Drivers/src/stm32f446xx_spi_driver.o 

C_DEPS += \
./Drivers/src/stm32f446xx_gpio_driver.d \
./Drivers/src/stm32f446xx_spi_driver.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/src/%.o: ../Drivers/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -DDEBUG -I"D:/Controllers/2026/STM32/Drivers/SPI/stm32f446xx_Drivers/Drivers/inc" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


