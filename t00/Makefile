# ======== variables ========

# -- files and dirs --
NAME = read_file

INC_DIR = inc
SRC_DIR = src

INC_FILES = $(wildcard $(INC_DIR)/*.h)
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

# -- commands --
MV = mv
RM = rm -rdf
MKDIR = mkdir -p

CC = clang
C_FLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

# ========== body =========
all: NAME

NAME: $(SRC_FILES) $(INC_FILES)
	@$(CC) $(C_FLAGS) $(SRC_FILES) -I $(INC_DIR) -o $(NAME)

uninstall:
	@$(RM) $(NAME)

reinstall: uninstall all
