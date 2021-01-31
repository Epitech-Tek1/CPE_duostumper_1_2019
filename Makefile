##
## EPITECH PROJECT, 2019
## CPE_duostumper_1_2019
## File_description
## Makefile
##

## ========================================================================== ##
PATH_INIT		=	./source/init/
INIT			=	main.c				\
				basic.c



## ========================================================================== ##
PATH_ERROR		=	./source/error/
ERROR			=	error_handling.c


## ========================================================================== ##
PATH_DISPLAY		=	./source/display/
DISPLAY			=	display_basic.c


## ========================================================================== ##
PATH_PROCESS		=	./source/process/
PROCESS			=	create_pattern.c


## ========================================================================== ##
SRC				=	$(addprefix $(PATH_INIT), $(INIT))			\
					$(addprefix $(PATH_ERROR), $(ERROR))			\
					$(addprefix $(PATH_DISPLAY), $(DISPLAY))		\
					$(addprefix $(PATH_PROCESS), $(PROCESS))


BIN			= 	fractals

CC			= 	gcc

INCLUDE_DIR		=	./include/

CFLAG 			= 	-I$(INCLUDE_DIR)


all:			$(BIN)


$(BIN):			$(SRC)
			$(CC) -o $(BIN) $(SRC) $(CFLAG)


clean:
			$(RM) *.o


fclean:			clean
			$(RM) $(BIN)

re:			fclean all

.PHONY:			all, fclean, clean, re
