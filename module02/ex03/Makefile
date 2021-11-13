NAME	=	bsp

CXX		:=	clang++
CXXFLAGS	:=	 -Wall -Wextra -Werror

SRCDIR	:=
SRCNAME	:=	main \
			bsq \
			Fixed \
			Point

SRCS	:=	$(addsuffix .cpp, $(SRCNAME))
OBJS	:=	$(SRCS:.c=.o)

.PHONY: all
all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

.PHONY: clean
clean:

.PHONY: fclean
fclean:	clean
		@$(RM) -rf $(NAME)

.PHONY: re
re:
	@$(MAKE) fclean
	@$(MAKE) all

