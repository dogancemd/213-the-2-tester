import os
import filecmp
test_score=0
print("Please wait")
for outnum in range(200):
    os.system(f"g++ in/in{outnum+1}.cpp -w")
    os.system(f"./a.out > myout")
    is_same=filecmp.cmp(f"out/out{outnum+1}","./myout")
    if(is_same):
        test_score+=1
    else:
        print(f"Test case {outnum+1} is failed")
os.system(f"rm ./a.out ./myout")
print(f"\n\nYour score is {test_score/2}/100\nat least compared to mine")
    
