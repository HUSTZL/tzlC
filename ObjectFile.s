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

fibo:
  li $t1, 1
  sw $t1,  16($sp)
  lw $t1, 12($sp)
  lw $t2, 16($sp)
  beq $t1,$t2,Label_1
  j Label_3
Label_3:
  li $t1, 2
  sw $t1,  20($sp)
  lw $t1, 12($sp)
  lw $t2, 20($sp)
  beq $t1,$t2,Label_1
  j Label_2
Label_1:
  li $t1, 1
  sw $t1,  16($sp)
  lw $v0,16($sp)
  jr $ra
Label_2:
  li $t1, 1
  sw $t1,  16($sp)
  lw $t1, 12($sp)
  lw $t2, 16($sp)
  sub $t3,$t1,$t2
  sw $t3, 20($sp)
  move $t0,$sp
  addi $sp, $sp, -44
  sw $ra,0($sp)
  lw $t1, 20($t0)
  sw $t1,12($sp)
  jal fibo
  lw $ra,0($sp)
  addi $sp,$sp,44
  sw $v0,24($sp)
  li $t1, 2
  sw $t1,  28($sp)
  lw $t1, 12($sp)
  lw $t2, 28($sp)
  sub $t3,$t1,$t2
  sw $t3, 32($sp)
  move $t0,$sp
  addi $sp, $sp, -44
  sw $ra,0($sp)
  lw $t1, 32($t0)
  sw $t1,12($sp)
  jal fibo
  lw $ra,0($sp)
  addi $sp,$sp,44
  sw $v0,36($sp)
  lw $t1, 24($sp)
  lw $t2, 36($sp)
  add $t3,$t1,$t2
  sw $t3, 40($sp)
  lw $v0,40($sp)
  jr $ra

main:
  addi $sp, $sp, -56
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal read
  lw $ra,0($sp)
  addi $sp, $sp, 4
  sw $v0, 28($sp)
  lw $t1, 28($sp)
  sw $t1,  12($sp)
  li $t1, 1
  sw $t1,  28($sp)
  lw $t1, 28($sp)
  sw $t1,  20($sp)
Label_4:
  lw $t1, 20($sp)
  lw $t2, 12($sp)
  ble $t1,$t2,Label_5
  j Label_6
Label_5:
  move $t0,$sp
  addi $sp, $sp, -44
  sw $ra,0($sp)
  lw $t1, 20($t0)
  sw $t1,12($sp)
  jal fibo
  lw $ra,0($sp)
  addi $sp,$sp,44
  sw $v0,28($sp)
  lw $t1, 28($sp)
  sw $t1,  16($sp)
  lw $a0, 16($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
  li $t1, 1
  sw $t1,  28($sp)
  lw $t1, 20($sp)
  lw $t2, 28($sp)
  add $t3,$t1,$t2
  sw $t3, 32($sp)
  lw $t1, 32($sp)
  sw $t1,  20($sp)
  j Label_4
Label_6:
  li $t1, 0
  sw $t1,  28($sp)
  lw $t1, 28($sp)
  sw $t1,  24($sp)
  li $t1, 1
  sw $t1,  28($sp)
  lw $t1, 28($sp)
  sw $t1,  20($sp)
Label_7:
  lw $t1, 20($sp)
  lw $t2, 12($sp)
  ble $t1,$t2,Label_8
  j Label_9
Label_8:
  move $t0,$sp
  addi $sp, $sp, -44
  sw $ra,0($sp)
  lw $t1, 20($t0)
  sw $t1,12($sp)
  jal fibo
  lw $ra,0($sp)
  addi $sp,$sp,44
  sw $v0,28($sp)
  lw $t1, 24($sp)
  lw $t2, 28($sp)
  add $t3,$t1,$t2
  sw $t3, 32($sp)
  lw $t1, 32($sp)
  sw $t1,  24($sp)
  lw $t1, 20($sp)
  sw $t1, 32($sp)
  addi $t3,$t1,1
  sw $t3, 20($sp)
  j Label_7
Label_9:
  lw $a0, 24($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
  li $t1, 3
  sw $t1,  28($sp)
  lw $t1, 28($sp)
  lw $t2, 0($sp)
  bne $t1,$t2,Label_10
  j Label_11
Label_10:
  li $t1, 3
  sw $t1,  28($sp)
  lw $a0, 28($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
  j Label_12
Label_11:
  li $t1, 0
  sw $t1,  28($sp)
  lw $a0, 28($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
Label_12:
  lw $t1, 24($sp)
  lw $t2, 0($sp)
  bne $t1,$t2,Label_13
  j Label_14
Label_13:
  lw $a0, 24($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
  j Label_15
Label_14:
  li $t1, 0
  sw $t1,  28($sp)
  lw $a0, 28($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
Label_15:
  li $t1, 0
  sw $t1,  28($sp)
  lw $t1, 28($sp)
  sw $t1,  24($sp)
  lw $t1, 24($sp)
  lw $t2, 0($sp)
  bne $t1,$t2,Label_16
  j Label_17
Label_16:
  li $t1, 1
  sw $t1,  28($sp)
  lw $a0, 28($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
  j Label_18
Label_17:
  li $t1, 0
  sw $t1,  28($sp)
  lw $a0, 28($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
Label_18:
  lw $t1, 24($sp)
  sw $t1, 28($sp)
  addi $t3,$t1,1
  sw $t3, 24($sp)
  lw $t1, 28($sp)
  lw $t2, 0($sp)
  bne $t1,$t2,Label_19
  j Label_20
Label_19:
  li $t1, 1
  sw $t1,  28($sp)
  lw $a0, 28($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
  j Label_21
Label_20:
  li $t1, 0
  sw $t1,  28($sp)
  lw $a0, 28($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
Label_21:
  li $t1, 3
  sw $t1,  28($sp)
  move $t0,$sp
  addi $sp, $sp, -44
  sw $ra,0($sp)
  lw $t1, 28($t0)
  sw $t1,12($sp)
  jal fibo
  lw $ra,0($sp)
  addi $sp,$sp,44
  sw $v0,32($sp)
  lw $t1, 32($sp)
  lw $t2, 0($sp)
  bne $t1,$t2,Label_22
  j Label_23
Label_22:
  li $t1, 3
  sw $t1,  28($sp)
  move $t0,$sp
  addi $sp, $sp, -44
  sw $ra,0($sp)
  lw $t1, 28($t0)
  sw $t1,12($sp)
  jal fibo
  lw $ra,0($sp)
  addi $sp,$sp,44
  sw $v0,32($sp)
  lw $a0, 32($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
  j Label_24
Label_23:
  li $t1, 0
  sw $t1,  28($sp)
  lw $a0, 28($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
Label_24:
  li $t1, 1
  sw $t1,  28($sp)
  lw $v0,28($sp)
  jr $ra
  li $v0,10
  syscall
