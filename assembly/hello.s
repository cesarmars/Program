.text 
# li = load immediate, a pseudoinstruction 
li a0 1 # a0 = 1
li s0 12 # s0 = 12
addi a1 s0 12 # a1 = s0 + 12 = 12 + 12 = 24
ecall # environment-call 

li a0 17 # a0 = 17
li a1 0 # a1 = 0 
ecall