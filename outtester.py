import os
for outnum in range(200):
    os.system(f"g++ in/in{outnum+1}.cpp")
    os.system(f"./a.out > out/out{outnum+1}")
os.system(f"rm ./a.out")