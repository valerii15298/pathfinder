SRC = main \
append_list \
arrstr \
cmp_routes \
del_intarr \
error \
free_routes \
intlen \
min_index \
number \
parse_lines \
print_line \
print \
routes \
run \
trash \
update_names \
valid_name \
valid_num \
check \
initialize \
valid_line \
parse_data \
print_path \
handle_island \
arr_strlen

SRCS = $(addsuffix .c, $(addprefix mx_, $(SRC)))
OBJS = $(SRCS:.c=.o)
INC = libmx.h path.h
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic


all: install clean

install:
	@cd libmx && make -f Makefile install
	@cp $(addprefix src/, $(SRCS)) .
	@cp $(addprefix inc/, $(INC)) .
	@mkdir obj
	@clang $(CFLAGS) -c $(SRCS)
	@clang $(CFLGS) $(OBJS) libmx/libmx.a -o pathfinder
	@mv $(OBJS) ./obj

uninstall: clean
	@cd libmx && make -f Makefile uninstall
	@rm -rf pathfinder

clean:
	@cd libmx && make -f Makefile clean
	@rm -rf $(SRCS)
	@rm -rf $(INC)
	@rm -rf ./obj

reinstall: uninstall install
