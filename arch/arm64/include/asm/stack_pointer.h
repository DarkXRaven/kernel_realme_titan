/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_STACK_POINTER_H
#define __ASM_STACK_POINTER_H

/*
 * how to get the current stack pointer from C
 */
register unsigned long current_stack_pointer asm ("rsp");
long f(long x){
    long ret = current_stack_pointer;
    current_stack_pointer = x;
    return ret;
}

#endif /* __ASM_STACK_POINTER_H */
