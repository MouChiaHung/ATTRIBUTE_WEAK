PROJECT := main

DIR_SRC += .
DIR_SRC += ./src
DIR_INC += -lpthread 
DIR_INC += -I./inc 
DIR_INC += $(addprefix -I, $(DIR_SRC))

SRC_C += $(wildcard $(addsuffix /*.c, $(DIR_SRC)))

OBJ := $(filter %.o, $(SRC_C:.c=.o))
EXE := $(PROJECT)

CC_PREFIX := 

CC := $(CC_PREFIX)gcc
CXX := $(CC_PREFIX)gcc

#CFLAG = -O -ansi
#CFLAG = -Wall -lm -g
CFLAG += -Wl,-trace,-trace-symbol=foo
CLIB = -L .

$(info DIR_SRC=$(DIR_SRC))
$(info SRC=$(SRC_C))
$(info DIR_INC=$(DIR_INC))
$(info OBJ=$(OBJ))
$(info OVERRIDE=$(OVERRIDE))
ifeq ($(OVERRIDE),1)
CFLAG += -DOVERRIDE
endif

.PHONY:all

all:$(OBJ) $(EXE)

%.o: %.c
	$(CC) $(CFLAG) $(DIR_INC) -c $< -o $@ 

$(EXE): $(OBJ)
	$(CC) $(CFLAG) $(CLIB) $(OBJ) -o $@ 
	
clean:
	rm -r $(EXE) $(OBJ)