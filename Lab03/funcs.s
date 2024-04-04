@ Nicole McDermott and Adib Khondoker
        .global _Z3sumiii
_Z3sumiii:
        mov r5, #0
        add r5, r1, r2
        add r0, r0, r5
        bx lr



        .global _Z3sumi
_Z3sumi:
        mov r1, #1
        mov r2, #0
1:
        add r2, r1
        add r1, #1
        cmp r1, r0
        bne 1b
        mov r0, r2
        bx lr


        .global _Z7sumEvenii
_Z7sumEvenii:
        mov r2, #0

2:
        add r2, r0
        add r0, #2
        cmp r0, r1
        ble 2b
        mov r0, r2
        bx lr



        .global _Z4prodiii
_Z4prodiii:
        mov r5, #0
        mul r5, r1, r2
        mul r0, r0, r5
        bx lr



        .global _Z4prodi
_Z4prodi:
        mov r1, #1
        mov r2, #1
1:
        mul r2, r1
        add r1, #1
        cmp r1, r0
        ble 1b
        mov r0, r2
        bx lr



        .global _Z7prodOddii
_Z7prodOddii:
        mov r2, #1
2:
        mul r2, r0
        add r0, #2
        cmp r0, r1
        ble 2b
        mov r0, r2
        bx lr


        .global _Z3maxii
_Z3maxii:
        cmp r0,r1
        bgt done
        mov r0, r1
        bx lr
done:
        bx lr
