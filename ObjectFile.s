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
  addi $sp, $sp, -52
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal read
  lw $ra,0($sp)
  addi $sp, $sp, 4
  sw $v0, 24($sp)
  lw $t1, 24($sp)
  sw $t1,  12($sp)
  li $t1, 1
  sw $t1,  24($sp)
  lw $t1, 24($sp)
  sw $t1,  20($sp)
Label_4:
  lw $t1, 20($sp)
  lw $t2, 12($sp)
  blt $t1,$t2,Label_5
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
  sw $v0,24($sp)
  lw $t1, 24($sp)
  sw $t1,  16($sp)
  lw $a0, 16($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
  li $t1, 1
  sw $t1,  24($sp)
  lw $t1, 20($sp)
  lw $t2, 24($sp)
  add $t3,$t1,$t2
  sw $t3, 28($sp)
  lw $t1, 28($sp)
  sw $t1,  20($sp)
  j Label_4
Label_6:
  li $t1, 1
  sw $t1,  24($sp)
  lw $v0,24($sp)
  jr $ra
  li $v0,10
  syscall
