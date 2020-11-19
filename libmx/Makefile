SRC = binary_search \
bubble_sort \
count_substr \
count_words \
del_strarr \
foreach \
get_char_index \
get_substr_index \
hex_to_nbr \
isspace \
itoa \
nbr_to_hex \
pow \
print_strarr \
printchar \
print_unicode \
printint \
printstr \
quicksort \
\
sqrt \
str_reverse \
strcat \
strncat \
strcmp \
strcpy \
strdel \
strdup \
strndup \
strlen \
strncmp \
strncpy \
strnew \
strstr \
strtrim \
swap_char \
del_extra_spaces \
strsplit \
strjoin \
file_to_str \
read_line \
replace_substr \
\
memset \
memcpy \
memccpy \
memcmp \
memchr \
memrchr \
memmem \
memmove \
realloc \
\
create_node \
pop_back \
pop_front \
push_back \
push_front \
list_size \
sort_list \
lib_strlen \
lib_min \
strchr \
isalpha \
isdigit \
lib_max \
clear_list \
lines_split \
count_subchr

SRCS = $(addsuffix .c, $(addprefix mx_, $(SRC)))
OBJS = $(SRCS:.c=.o)
INC = libmx.h
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic


all: install clean

install:
	@cp $(addprefix src/, $(SRCS)) .
	@cp $(addprefix inc/, $(INC)) .
	@mkdir obj
	@clang $(CFLAGS) -c $(SRCS)
	@ar -rc libmx.a $(OBJS)
	@mv $(OBJS) ./obj

uninstall: clean
	@rm -rf libmx.a

clean:
	@rm -rf $(SRCS)
	@rm -rf $(INC)
	@rm -rf ./obj

reinstall: uninstall install

