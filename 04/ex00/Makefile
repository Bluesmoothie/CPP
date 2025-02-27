.PHONY			:	clean fclean re all

NAME			=   animal

#			GCC

CXX				=	clang++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++98 -MMD -MP $(INCLUDE) 

#			COMMON

BUILD_DIR		=	.build/
SRC_DIR			=	./
INCLUDE 		=	-Iinclude/ -Iinclude/class

#			SRC

SRC_FILES		=	main			\
					Animal			\
					Cat				\
					Dog				\
					WrongAnimal		\
					WrongCat		\

SRC 			= 	$(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_FILES)))
OBJ 			= 	$(addprefix $(BUILD_DIR), $(addsuffix .o, $(SRC_FILES)))
DEPS 			= 	$(addprefix $(BUILD_DIR), $(addsuffix .d, $(SRC_FILES)))

#			RULES

all				:	$(NAME)

$(NAME)			:	$(BUILD_DIR) $(OBJ)
				$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(BUILD_DIR)	:
				mkdir -p $(BUILD_DIR)
				mkdir -p $(BUILD_DIR)class

$(BUILD_DIR)%.o	: 	$(SRC_DIR)%.cpp
				$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEPS)

clean			:
				rm -rf $(BUILD_DIR)

fclean			:	clean
				rm -f $(NAME)

re				:	fclean all