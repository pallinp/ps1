CC= g++
NAME= ps1.exe
CFLAGS= -W -Wall -pedantic -ansi -Wextra -D_BSD_SOURCE -I include/ -I ../lib/game-engine/include/ -std=c++0x
EXEC_DIR= ./
OBJ_DIR= obj/
SRC = $(wildcard src/*.cpp)
OBJ = $(subst src/,$(OBJ_DIR)/,$(SRC))
OBJ := $(OBJ:.cpp=.o)

$(NAME): $(OBJ)
	@$(CC) $^ -L ../lib/game-engine/ -lmacengine -o $(EXEC_DIR)/$@
	@echo "[CC] creation de $@"

all: $(NAME)

$(OBJ_DIR)/%.o: src/%.cpp
	@$(CC) -c $< $(INCLUDE) $(CFLAGS) -o $@
	@echo "[CC] creation de $@"
clean:
	@rm -rf $(OBJ_DIR)/*.o
	@echo "[RM] Execution de $@"

fclean:	clean
	@rm -rf $(EXEC_DIR)/$(NAME)
	@echo "[RM] Execution de $@"

re:	fclean	all
