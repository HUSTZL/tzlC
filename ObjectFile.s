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
  addi $sp, $sp, -16
  li $t1, 3
  sw $t1,  12($sp)
  lw $t1,  12($sp)
  sw $t1,  0($sp)
  lw $a0,  0($sp)
  addi $sp, $sp, -4
  sw $ra,0($sp)
  jal write
  lw $ra,0($sp)
  addi $sp, $sp, 4
  li $t1, 0
  sw $t1,  12($sp)
  lw $v0,  12($sp)
  jr $ra
  li $v0,10
  syscall
