# ======== variables ========

# -- files and dirs --
NAME = read_file

INC_DIR = inc
SRC_DIR = src
OBJ_DIR = obj

# -- commands --
MV = mv
RM = rm -rdf
MKDIR = mkdir -p

INC_FILES = $(wildcard $(INC_DIR)/*.h)
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

CC = clang
C_FLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

# ========== body =========
all: NAME clean

NAME: $(SRC_FILES) $(INC_FILES)
	@$(CC) $(C_FLAGS) $(SRC_FILES) -I $(INC_DIR) -o $(NAME)

clean:
	@$(RM) $(OBJ_DIR)

uninstall: clean
	@$(RM) $(NAME)

reinstall: uninstall all
