##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## to make project
##

CC	=	gcc
ECHO	=	echo -e

COLOR	=   31
LIGHT   =   \e[0m
BOLD    =   \e[1m
BLACK   =   \e[30m
RED     =   \e[31m
GREEN   =   \e[32m
YELLOW  =   \e[33m
BLUE    =   \e[34m
PURPLE  =   \e[35m
CYAN    =   \e[36m
WHITE   =   \e[37m
DEFAULT =   \e[0;37m

INFO    =   $(BOLD)$(GREEN)[INFO]\t$(WHITE)
WARNING =   $(BOLD)$(YELLOW)[WARNING]\t$(WHITE)
ERROR   =   $(BOLD)$(RED)[ERROR]\t$(WHITE)

SRC	=	$(wildcard $(SRC_DIR)src/*.c)

OBJ	=	$(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC))

INC_DIR =	-I../include/ \

CFLAGS	=	$(INC_DIR)

NAME	=	./104intersection

NOM =	Christian MIYIGBENA

$(NAME):	$(OBJ)
	@echo -en "\e[1m\e[38;2;`expr $$RANDOM % 255`;`expr $$RANDOM % 255`;`expr $$RANDOM % 255`m"
	$(CC) $(OBJ) $(CFLAGS)	-lm -o $(BIN_DIR)$(NAME)
	@$(ECHO) "$(INFO)Compilation terminée !$(DEFAULT)"
	@echo -e "\033[01m\033[05m\033[31m\033[03m[${NAME}]\033[00m"
	@echo -e "\033[01m\033[05m\033[31m\033[03m[${NOM}]\033[00m"

$(OBJ): $(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@echo -en "\e[1m\e[38;2;`expr $$RANDOM % 255`;`expr $$RANDOM % 255`;`expr $$RANDOM % 255`m"
	$(CC) $(CFLAGS) -g -c $< -o $@

all:	$(NAME)

clean:
	@rm -f $(OBJ)
	@rm -f $(BIN_DIR)$(NAME)
	@$(ECHO) "$(INFO)Fichiers supprimées !$(DEFAULT)"
	rm -f $(OBJ)
	@echo -e "\033[00m"

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
