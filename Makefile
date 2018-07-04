NAME = libft.a
CC = ar
FLAGS = -Wall -Wextra -Werror

DEBUG = no
ifeq ($(DEBUG), yes)
	FLAGS = -Wall -Wextra -Werror -g -fsanitize=address
endif

NOFLAGS = no
ifeq ($(NOFLAGS), yes)
	FLAGS = -g -w
endif

INCLUDES = -I./ \
		   -I./libft_display/ft_printf/ \
		   -I./libft_time/

VPATH = ./libft_binary:./libft_buff:./libft_display:./libft_display/ft_printf: \
./libft_display/ft_printf/extra:./libft_display/ft_printf/option: \
./libft_display/ft_printf/skel:./libft_display/ft_printf/type:./libft_file: \
./libft_lst:./libft_math:./libft_memory:./libft_nbr:./libft_sort:./libft_str: \
./libft_time

#./libft_binary
SRCS = ft_base2.c \
	   ft_putbit.c \
	   ft_putbit_char.c \
	   ft_putbit_int.c \
	   ft_putbit_long.c \
	   ft_putbit_short.c \
	   ft_putbit_uchar.c \
	   ft_putbit_uint.c \
	   ft_putbit_ulong.c \
	   ft_putbit_ushort.c
#./libft_buff/
SRCS += ft_buffadd.c \
	   ft_buffdel.c \
	   ft_buffextend.c \
	   ft_buffinit.c \
	   ft_buffinsert.c
#./libft_display/
SRCS += ft_putchar.c \
	   ft_putchar_u.c \
	   ft_putclear.c \
	   ft_putcolor_24.c \
	   ft_putcolor_8.c \
	   ft_putcolor_hex24.c \
	   ft_putcolor_hex8.c \
	   ft_putendl.c \
	   ft_putmemory.c \
	   ft_putnbr.c \
	   ft_putstr.c \
	   ft_putstr_u.c
#./libft_display/ft_printf/
SRCS += ft_analyze_flag.c \
	   ft_args.c \
	   ft_args_imt.c \
	   ft_args_lgd.c \
	   ft_args_ptr.c \
	   ft_display.c \
	   ft_option.c \
	   ft_parser.c \
	   ft_printf.c \
	   ft_skeleton.c
#./libft_display/ft_printf/extra
SRCS += ft_lstiter_andsum.c
#./libft_display/ft_printf/option/
SRCS += ft_option_accu1.c \
	   ft_option_accu2.c \
	   ft_option_disp.c \
	   ft_option_size.c
#./libft_display/ft_printf/skel/
SRCS += ft_getskel_spe.c \
	   ft_getskel_val.c \
	   ft_resetskel.c \
	   ft_setskel.c \
	   ft_setupskel.c
#./libft_display/ft_printf/type/
SRCS += ft_bigc.c \
	   ft_bigd.c \
	   ft_bigo.c \
	   ft_bigs.c \
	   ft_bigx.c \
	   ft_c.c \
	   ft_d.c \
	   ft_e.c \
	   ft_f.c \
	   ft_g.c \
	   ft_i.c \
	   ft_o.c \
	   ft_p.c \
	   ft_percent.c \
	   ft_s.c \
	   ft_u.c \
	   ft_undef.c \
	   ft_x.c
#./libft_file/
SRCS += ft_gnl.c \
	   ft_putchar_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_putstr_fd.c
#./libft_lst/
SRCS += ft_dlstdel.c \
	   ft_dlstdel_elem.c \
	   ft_dlstextract.c \
	   ft_dlstget.c \
	   ft_dlstinsert.c \
	   ft_dlstissort_c.c \
	   ft_dlstissort_d.c \
	   ft_dlstiter.c \
	   ft_dlstiter_size.c \
	   ft_dlstlast.c \
	   ft_dlstmap.c \
	   ft_dlstmemsize.c \
	   ft_dlstnew.c \
	   ft_dlstpush.c \
	   ft_dlstpushb.c \
	   ft_dlstpushf.c \
	   ft_dlstrecover.c \
	   ft_dlstremove.c \
	   ft_dlstreplace.c \
	   ft_dlstset.c \
	   ft_dlstset_rot.c \
	   ft_dlstsize.c \
	   ft_dlstswap.c \
	   ft_lstdel.c \
	   ft_lstdel_elem.c \
	   ft_lstextract.c \
	   ft_lstget.c \
	   ft_lstinsert.c \
	   ft_lstiter.c \
	   ft_lstiter_size.c \
	   ft_lstlast.c \
	   ft_lstmap.c \
	   ft_lstmemsize.c \
	   ft_lstnew.c \
	   ft_lstpush.c \
	   ft_lstpushb.c \
	   ft_lstpushf.c \
	   ft_lstrecover.c \
	   ft_lstremove.c \
	   ft_lstreplace.c \
	   ft_lstset.c \
	   ft_lstsize.c \
	   ft_lstswap.c \
	   ft_rlstextract.c \
	   ft_rlstinsert.c \
	   ft_rlstissort_c.c \
	   ft_rlstiter.c \
	   ft_rlstremove.c \
	   ft_rlstrotate.c \
	   ft_rlstset_heap.c
	# ./libft_math/
SRCS += ft_next_sqrt.c \
	   ft_pow.c \
	   ft_sqrt.c
#./libft_memory/
SRCS += ft_bzero.c \
	   ft_memalloc.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memcpy.c \
	   ft_memcpy_x.c \
	   ft_memdel.c \
	   ft_memdel_size.c \
	   ft_memjoin.c \
	   ft_memjunc.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_memswap.c
#./libft_nbr/
SRCS += ft_ischarval.c \
	   ft_isintval.c \
	   ft_islongval.c \
	   ft_isshortval.c \
	   ft_issort_c.c \
	   ft_issort_d.c \
	   ft_swap_uint.c
#./libft_sort/
SRCS += ft_qsort.c \
	   ft_sort_intcmp_c.c \
	   ft_sort_strcmp_c.c \
	   ft_qsort.c
#./libft_str/
SRCS += ft_atoi.c \
	   ft_atoim.c \
	   ft_atol.c \
	   ft_atoum.c \
	   ft_charsize_u.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_islower.c \
	   ft_isprint.c \
	   ft_isspace.c \
	   ft_isupper.c \
	   ft_iswiw.c \
	   ft_itoa.c \
	   ft_itoa_base.c \
	   ft_itoau_base.c \
	   ft_strarr_del.c \
	   ft_strarr_len.c \
	   ft_strarr_size.c \
	   ft_strattach.c \
	   ft_strcat.c \
	   ft_strchr.c \
	   ft_strclr.c \
	   ft_strcmp.c \
	   ft_strcpy.c \
	   ft_strcpy_x.c \
	   ft_strdel.c \
	   ft_strdup.c \
	   ft_strequ.c \
	   ft_strexplode.c \
	   ft_strextend.c \
	   ft_strimplode.c \
	   ft_strisdigit.c \
	   ft_strisnumber.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strjoin.c \
	   ft_strlcat.c \
	   ft_strlcpy.c \
	   ft_strlen.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strncat.c \
	   ft_strncmp.c \
	   ft_strncpy.c \
	   ft_strnequ.c \
	   ft_strnew.c \
	   ft_strnew_c.c \
	   ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strsanitize.c \
	   ft_strsize_u.c \
	   ft_strsplit.c \
	   ft_strstr.c \
	   ft_strsub.c \
	   ft_strsup.c \
	   ft_strtrim.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_unicode.c \
	   ft_unicode_str.c
#./libft_time/
SRCS += ft_isbisextil.c \
	   ft_localtime.c \
	   ft_localtime_r.c \
	   ft_time_count.c \
	   ft_time_month.c \
	   ft_time_year.c

OBJ_PATH = ./obj/
OBJ_NAME = $(SRCS:.c=.o)
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

DEPS = includes/*.h Makefile
DEPS = $(shell find . -regex ".*\.[ch]")

.PHONY: all clean fclean re
.SUFFIXES:

$(OBJ_PATH)%.o : %.c
	gcc $(INCLUDES) -c $< -o $@ $(FLAGS)

$(NAME) : init $(OBJ) $(DEPS)
	@$(CC) -rc $@ $(OBJ)

all : $(NAME)

init :
	@sh init.sh

clean :
	@$(RM) -f $(OBJ)

fclean : clean
	@$(RM) -f $(NAME)

re :
	@$(MAKE) fclean
	@$(MAKE) all
