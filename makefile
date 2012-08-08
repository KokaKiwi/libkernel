export BOCHS	:= /usr/fbin/bochs/bochs
export QEMU     := /usr/fbin/qemu
export NASM		:= nasm
export CC		:= gcc
export AR       := ar
export ARTARG   := pei-i386 #pe-i386 pei-i386 elf32-i386 elf32-little elf32-big srec symbolsrec verilog tekhex binary ihex
export ARFLAGS  := rcs #--target=$(ARTARG)
export INCDIRS  := include
export CFLAGS   := -O3 -Os -m32 -nostartfiles -fno-builtin -fno-leading-underscore $(foreach incdir,$(INCDIRS),$(addprefix -I,$(incdir)))
export CCFLAGS	:= -c -g $(CFLAGS)
export CAFLAGS	:= -S $(CFLAGS)
export OBJCOPY	:= objcopy
export LD		:= ld
export LDFLAGS	:= -g

export BUILDDIR	:= target

export O		:= .o
export A        := .a
B				:= $(BUILDDIR)/
S				:= $Basm/

all             : $Blibkernel$A $Blibkernel.tar

# Libkernel
CSRC            := $(wildcard src/*.c)
COBJS           := $(addprefix $B,$(notdir $(CSRC:.c=$O)))
CASMS           := $(addprefix $S,$(notdir $(CSRC:.c=.asm)))
ASRC            := $(wildcard src/*.asm)
AOBJS           := $(addprefix $B,$(notdir $(ASRC:.asm=$O)))
ALL_OBJS        := $(COBJS) $(AOBJS)
ALL_ASMS        := $(CASMS)

cobj_compile    = $(1) : $(2); $(CC) $(CCFLAGS) -o $(1) $(2)
aobj_compile    = $(1) : $(2); $(NASM) -f elf -o $(1) $(2)

$Blibkernel$A   : $(ALL_OBJS) 
	$(AR) $(ARFLAGS) $@ $^
	ranlib $@

$Blibkernel.tar : $(CSRC) $(ASRC)
	tar -cf $@ -C src $(notdir $(CSRC)) $(notdir $(ASRC))

$(foreach cobj,$(COBJS),$(eval $(call cobj_compile,$(cobj),$(addprefix src/,$(notdir $(cobj:$O=.c))))))
$(foreach aobj,$(AOBJS),$(eval $(call aobj_compile,$(aobj),$(addprefix src/,$(notdir $(aobj:$O=.asm))))))

$(foreach casm,$(CASMS),$(eval $(call casm_compile,$(casm),$(addprefix src/,$(notdir $(casm:.asm=.c))))))

clean			:
	rm -f $(wildcard $B*.*)