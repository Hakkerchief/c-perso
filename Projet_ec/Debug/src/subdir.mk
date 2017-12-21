################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Camera.cpp \
../src/Ecran.cpp \
../src/MathProj.cpp \
../src/Objet.cpp \
../src/Pixel.cpp \
../src/Point.cpp \
../src/Scene.cpp \
../src/Source.cpp \
../src/Sphere.cpp \
../src/main.cpp 

OBJS += \
./src/Camera.o \
./src/Ecran.o \
./src/MathProj.o \
./src/Objet.o \
./src/Pixel.o \
./src/Point.o \
./src/Scene.o \
./src/Source.o \
./src/Sphere.o \
./src/main.o 

CPP_DEPS += \
./src/Camera.d \
./src/Ecran.d \
./src/MathProj.d \
./src/Objet.d \
./src/Pixel.d \
./src/Point.d \
./src/Scene.d \
./src/Source.d \
./src/Sphere.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


