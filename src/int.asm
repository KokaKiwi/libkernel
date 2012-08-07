extern isr_default_int, isr_GP_exec, isr_PF_exec, isr_clock_int, isr_keyboard_int
global asm_default_int, asm_exec_GP, asm_exec_PF, asm_irq_0, asm_irq_1

%macro SAVE_REGS 0
    pushad
    push ds
    push es
    push fs
    push gs
    push ebx
    mov bx, 0x10
    mov ds, bx
    pop ebx
%endmacro

%macro RESTORE_REGS 0
    pop gs
    pop fs
    pop es
    pop ds
    popad
%endmacro

asm_default_int:
    SAVE_REGS
    call isr_default_int
    mov al, 0x20
    out 0x20, al
    RESTORE_REGS
    iret

asm_exec_GP:
    SAVE_REGS
    call isr_GP_exec
    RESTORE_REGS
    add esp, 4
    iret

asm_exec_PF:
    SAVE_REGS
    call isr_PF_exec
    RESTORE_REGS
    add esp, 4
    iret

asm_irq_0:
    SAVE_REGS
    call isr_clock_int
    mov al, 0x20
    out 0x20, al
    RESTORE_REGS
    iret

asm_irq_1:
    SAVE_REGS
    call isr_keyboard_int
    mov al, 0x20
    out 0x20, al
    RESTORE_REGS
    iret