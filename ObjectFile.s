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

main:
  addi $sp, $sp, -20
  li $t1, 3
  sw $t1,  12($sp)
  move $t0,$sp
  addi $sp, $sp, -28
  sw $ra,0($sp)
  lw $t1, 12($t0)
  sw $t1,12($sp)
  jal test1
  lw $ra,0($sp)
  addi $sp,$sp,28
  sw $v0,16($sp)
  lw $a0, 16($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
  li $t1, 4
  sw $t1,  12($sp)
  move $t0,$sp
  addi $sp, $sp, -28
  sw $ra,0($sp)
  lw $t1, 12($t0)
  sw $t1,12($sp)
  jal test2
  lw $ra,0($sp)
  addi $sp,$sp,28
  sw $v0,16($sp)
  lw $a0, 16($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
  li $t1, 0
  sw $t1,  12($sp)
  lw $v0,12($sp)
  jr $ra
  li $v0,10
  syscall

test1:
  move $t0,$sp
  addi $sp, $sp, -28
  sw $ra,0($sp)
  lw $t1, 12($t0)
  sw $t1,12($sp)
  jal test2
  lw $ra,0($sp)
  addi $sp,$sp,28
  sw $v0,16($sp)
  li $t1, 1
  sw $t1,  20($sp)
  lw $t1, 16($sp)
  lw $t2, 20($sp)
  add $t3,$t1,$t2
  sw $t3, 24($sp)
  lw $v0,24($sp)
  jr $ra

test2:
  li $t1, 5
  sw $t1,  16($sp)
  lw $t1, 12($sp)
  lw $t2, 16($sp)
  add $t3,$t1,$t2
  sw $t3, 20($sp)
  lw $v0,20($sp)
  jr $ra
