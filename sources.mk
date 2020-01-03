#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#*****************************************************************************

# Add your Source files to this variable
ifeq ($(PLATFORM), HOST)
	SOURCES = \
	main.c \
	memory.c

	INCLUDES = \
	-I../include/common
 
else
	SOURCES = \
	main.c \
	memory.c \
	interrupts_msp432p401r_gcc.c \
	startup_msp432p401r_gcc.c \
	system_msp432p401r.c

	INCLUDES = \
	-I../include/msp432/ \
	-I../include/common/ \
	-I../include/CMSIS

endif































