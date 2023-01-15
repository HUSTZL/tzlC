.data
_Prompt: .asciiz "Enter an integer:  "
_ret: .asciiz "\n"
.globl main
.text

read:
  li $v0,4
  la $a0,_Prompt
  syscall
  li $v0,5
  syscall
  jr $ra

write:
  li $v0,1
  syscall
  li $v0,4
  la $a0,_ret
  syscall
  move $v0,$0
  jr $ra

QuickSort:
  lw $t1,  12($sp)
  lw $t2,  16($sp)
  bgt $t1,$t2,Label_1
  j Label_2
Label_1:
  li $t1, 0
  sw $t1,  36($sp)
  lw $v0,  36($sp)
  jr $ra
Label_2:
  li $t1, 4
  sw $t1,  36($sp)
  lw $t1,  12($sp)
  lw $t2,  36($sp)
  mul $t3,$t1,$t2
  sw $t3,  40($sp)
  lw $t4,  40($sp)
  add $gp, $gp, $t4
  lw $t1,  0($gp)
  sub $gp, $gp, $t4
  sw $t1,  20($sp)
  lw $t1,  12($sp)
  sw $t1,  24($sp)
  lw $t1,  16($sp)
  sw $t1,  28($sp)
Label_3:
  lw $t1,  24($sp)
  lw $t2,  28($sp)
  bne $t1,$t2,Label_4
  j Label_5
Label_4:
Label_6:
  li $t1, 4
  sw $t1,  36($sp)
  lw $t1,  28($sp)
  lw $t2,  36($sp)
  mul $t3,$t1,$t2
  sw $t3,  40($sp)
  lw $t4,  40($sp)
  add $gp, $gp, $t4
  lw $t1,  0($gp)
  sub $gp, $gp, $t4
  lw $t2,  20($sp)
  bge $t1,$t2,Label_9
  j Label_8
Label_9:
  lw $t1,  28($sp)
  lw $t2,  24($sp)
  bgt $t1,$t2,Label_7
  j Label_8
Label_7:
  lw $t1,  28($sp)
  sw $t1,  36($sp)
  addi $t3,$t1,-1
  sw $t3,  28($sp)
  j Label_6
Label_8:
Label_10:
  li $t1, 4
  sw $t1,  36($sp)
  lw $t1,  24($sp)
  lw $t2,  36($sp)
  mul $t3,$t1,$t2
  sw $t3,  40($sp)
  lw $t4,  40($sp)
  add $gp, $gp, $t4
  lw $t1,  0($gp)
  sub $gp, $gp, $t4
  lw $t2,  20($sp)
  ble $t1,$t2,Label_13
  j Label_12
Label_13:
  lw $t1,  28($sp)
  lw $t2,  24($sp)
  bgt $t1,$t2,Label_11
  j Label_12
Label_11:
  lw $t1,  24($sp)
  sw $t1,  36($sp)
  addi $t3,$t1,1
  sw $t3,  24($sp)
  j Label_10
Label_12:
  lw $t1,  28($sp)
  lw $t2,  24($sp)
  bgt $t1,$t2,Label_14
  j Label_15
Label_14:
  li $t1, 4
  sw $t1,  36($sp)
  lw $t1,  24($sp)
  lw $t2,  36($sp)
  mul $t3,$t1,$t2
  sw $t3,  40($sp)
  lw $t4,  40($sp)
  add $gp, $gp, $t4
  lw $t1,  0($gp)
  sub $gp, $gp, $t4
  sw $t1,  32($sp)
  li $t1, 4
  sw $t1,  36($sp)
  lw $t1,  24($sp)
  lw $t2,  36($sp)
  mul $t3,$t1,$t2
  sw $t3,  40($sp)
  li $t1, 4
  sw $t1,  44($sp)
  lw $t1,  28($sp)
  lw $t2,  44($sp)
  mul $t3,$t1,$t2
  sw $t3,  48($sp)
  lw $t4,  48($sp)
  add $gp, $gp, $t4
  lw $t1,  0($gp)
  sub $gp, $gp, $t4
  lw $t4,  40($sp)
  add $gp, $gp, $t4
  sw $t1,  0($gp)
  sub $gp, $gp, $t4
  li $t1, 4
  sw $t1,  36($sp)
  lw $t1,  28($sp)
  lw $t2,  36($sp)
  mul $t3,$t1,$t2
  sw $t3,  40($sp)
  lw $t1,  32($sp)
  lw $t4,  40($sp)
  add $gp, $gp, $t4
  sw $t1,  0($gp)
  sub $gp, $gp, $t4
Label_15:
  j Label_3
Label_5:
  li $t1, 4
  sw $t1,  36($sp)
  lw $t1,  12($sp)
  lw $t2,  36($sp)
  mul $t3,$t1,$t2
  sw $t3,  40($sp)
  li $t1, 4
  sw $t1,  44($sp)
  lw $t1,  24($sp)
  lw $t2,  44($sp)
  mul $t3,$t1,$t2
  sw $t3,  48($sp)
  lw $t4,  48($sp)
  add $gp, $gp, $t4
  lw $t1,  0($gp)
  sub $gp, $gp, $t4
  lw $t4,  40($sp)
  add $gp, $gp, $t4
  sw $t1,  0($gp)
  sub $gp, $gp, $t4
  li $t1, 4
  sw $t1,  36($sp)
  lw $t1,  24($sp)
  lw $t2,  36($sp)
  mul $t3,$t1,$t2
  sw $t3,  40($sp)
  lw $t1,  20($sp)
  lw $t4,  40($sp)
  add $gp, $gp, $t4
  sw $t1,  0($gp)
  sub $gp, $gp, $t4
  li $t1, 1
  sw $t1,  36($sp)
  lw $t1,  24($sp)
  lw $t2,  36($sp)
  sub $t3,$t1,$t2
  sw $t3,  40($sp)
  move $t0,$sp
  addi $sp, $sp, -52
  sw $ra,0($sp)
  lw $t1,  40($t0)
  sw $t1,  16($sp)
  lw $t1,  12($t0)
  sw $t1,  12($sp)
  jal QuickSort
  lw $ra,0($sp)
  addi $sp,$sp,52
  sw $v0,  44($sp)
  li $t1, 1
  sw $t1,  36($sp)
  lw $t1,  24($sp)
  lw $t2,  36($sp)
  add $t3,$t1,$t2
  sw $t3,  40($sp)
  move $t0,$sp
  addi $sp, $sp, -52
  sw $ra,0($sp)
  lw $t1,  16($t0)
  sw $t1,  16($sp)
  lw $t1,  40($t0)
  sw $t1,  12($sp)
  jal QuickSort
  lw $ra,0($sp)
  addi $sp,$sp,52
  sw $v0,  44($sp)
  li $t1, 0
  sw $t1,  36($sp)
  lw $v0,  36($sp)
  jr $ra

main:
  addi $sp, $sp, -36
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal read
  lw $ra,0($sp)
  addi $sp, $sp, 4
  sw $v0,  20($sp)
  lw $t1,  20($sp)
  sw $t1,  16($sp)
  li $t1, 1
  sw $t1,  20($sp)
  lw $t1,  20($sp)
  sw $t1,  12($sp)
Label_16:
  lw $t1,  12($sp)
  lw $t2,  16($sp)
  ble $t1,$t2,Label_17
  j Label_18
Label_17:
  li $t1, 4
  sw $t1,  20($sp)
  lw $t1,  12($sp)
  lw $t2,  20($sp)
  mul $t3,$t1,$t2
  sw $t3,  24($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal read
  lw $ra,0($sp)
  addi $sp, $sp, 4
  sw $v0,  28($sp)
  lw $t1,  28($sp)
  lw $t4,  24($sp)
  add $gp, $gp, $t4
  sw $t1,  0($gp)
  sub $gp, $gp, $t4
Label_19:
  lw $t1,  12($sp)
  sw $t1,  24($sp)
  addi $t3,$t1,1
  sw $t3,  12($sp)
  j Label_16
Label_18:
  li $t1, 1
  sw $t1,  20($sp)
  move $t0,$sp
  addi $sp, $sp, -52
  sw $ra,0($sp)
  lw $t1,  16($t0)
  sw $t1,  16($sp)
  lw $t1,  20($t0)
  sw $t1,  12($sp)
  jal QuickSort
  lw $ra,0($sp)
  addi $sp,$sp,52
  sw $v0,  24($sp)
  li $t1, 1
  sw $t1,  20($sp)
  lw $t1,  20($sp)
  sw $t1,  12($sp)
Label_20:
  lw $t1,  12($sp)
  lw $t2,  16($sp)
  ble $t1,$t2,Label_21
  j Label_22
Label_21:
  li $t1, 4
  sw $t1,  20($sp)
  lw $t1,  12($sp)
  lw $t2,  20($sp)
  mul $t3,$t1,$t2
  sw $t3,  24($sp)
  lw $t4,  24($sp)
  add $gp, $gp, $t4
  lw $a0,  0($gp)
  sub $gp, $gp, $t4
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
Label_23:
  lw $t1,  12($sp)
  sw $t1,  24($sp)
  addi $t3,$t1,1
  sw $t3,  12($sp)
  j Label_20
Label_22:
  li $t1, 0
  sw $t1,  20($sp)
  lw $v0,  20($sp)
  jr $ra
  li $v0,10
  syscall
