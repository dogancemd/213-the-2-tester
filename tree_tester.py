import os
import filecmp
test_score=0
print("Please wait")
for outnum in range(200):
    os.system(f"g++ in/in{outnum+1}.cpp -w -o ./b.out")
    os.system(f"./a.out > myout1")
    is_same=filecmp.cmp(f"out/out{outnum+1}","./myout1")
    if(is_same):
        test_score+=1
        print(f"Passed {outnum+1}")
    else:
        if os.path.isdir("./ScapegoatDifferentOutputs"):
            os.mkdir("ScapegoatDifferentOutputs")
        os.system(f"cp ./myout1 ScapegoatDifferentOutputs/out{outnum+1}")
        print(f"Test case {outnum+1} is failed")
os.system(f"rm ./b.out ./myout1")
print(f"\n\nYour score is {test_score/2}/100\nat least compared to mine")
    
