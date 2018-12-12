################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../add4.cpp \
../fa.cpp \
../main.cpp \
../tb_add4.cpp \
../top.cpp 

OBJS += \
./add4.o \
./fa.o \
./main.o \
./tb_add4.o \
./top.o 

CPP_DEPS += \
./add4.d \
./fa.d \
./main.d \
./tb_add4.d \
./top.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


