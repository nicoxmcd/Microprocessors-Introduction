@ Nicole McDermott I pledge my Honor that I have abided by the Stevens Honor System

  .global _Z6chooseii
  .global _Zfaci
  
_Z6chooseii:
  mov r2,r0
  push {lr}
  bl _Z3faci
  pop {lr}

  mov r3,r1
  push {lr}
  bl _Z3faci
  pop {lr}

  sub r4,r2,r3
  push {lr}
  bl _Z3faci
  pop {lr}

  mul r1,r3,r4
  mov r0,r2

  umul r0,r1
  bx lr

_Z3faci:
  mov r1,#1
  mov r2,r0
  mul r0,r1,r2
1:
  sub r2,#1
  mul r0,r2
  cmp r2,#1
  bne 1b
  bx lr
