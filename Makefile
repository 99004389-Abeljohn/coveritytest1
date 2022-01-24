PROJECT_NAME = UltimateTicTacToe
test_name = test_$(PROJECT_NAME)
source =  src/Block4.c src/Block5.c src/Block6.c src/board.c src/checkwin1.c src/checkwin2.c src/checkwin3.c src/checkwin4.c src/checkwin5.c src/checkwin6.c src/checkwin7.c src/checkwin8.c src/checkwin9.c src/Naveen_block_1.c src/Naveen_block_2.c src/Naveen_block_3.c src/Rahul_block7.c src/Rahul_block8.c src/Rahul_block9.c src/wholecheckwin.c
test_source = unity/unity.c test/test.c 
INC_H = inc
INC_T = unity

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean test doc all

all: 
	gcc -I $(INC_H) $(source) main.c -o $(call FixPath,$(PROJECT_NAME).$(EXEC))
		./$(call FixPath,$(PROJECT_NAME).$(EXEC))



test:
	gcc -I $(INC_H) -I $(INC_T) $(test_source) $(source) -o $(call FixPath,$(test_name).$(EXEC))
	./$(call FixPath,$(test_name).$(EXEC))



clear:
	$(RM) *.$(EXEC