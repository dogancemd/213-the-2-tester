import os
import filecmp
test_score=0
print("Please wait")
for outnum in range(100):
    os.system(f"g++ in/kvin{outnum+1}.cpp -w")
    os.system(f"./a.out > myout")
    is_same=filecmp.cmp(f"out/kvout{outnum+1}","./myout")
    if(is_same):
        test_score+=1
        print(f"Passed {outnum+1}")
    else:
        if not os.path.isdir("./TreeMapDifferentOutputs"):
            os.mkdir("TreeMapDifferentOutputs/")
        os.system(f"cp ./myout TreeMapDifferentOutputs/kvout{outnum+1}")
        print(f"Test case {outnum+1} is failed")
os.system(f"rm ./a.out ./myout")
print(f"\n\nYour score is {test_score}/100\nat least compared to mine")
    
