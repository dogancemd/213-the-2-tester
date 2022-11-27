import random
from printer_functions import *
for innum in range(200):
    str_in=[]
    created_trees="abcde"
    insertions={}
    insertions["a"]=[]
    index_follower=1
    default_constructor_printer(str_in,"a")
    choices=[]
    for i in range(1000):
        choices.append(random.randrange(0,8))
    for choice_int in choices:    
        if choice_int==0 and index_follower<5:
            default_constructor_printer(str_in,created_trees[index_follower])
            insertions[created_trees[index_follower]]=list()
            index_follower+=1
        elif choice_int==1 and index_follower<5:
            tree_to_copy=created_trees[random.randrange(0,index_follower)]
            if(index_follower>1):
                copy_constructor_printer(str_in,created_trees[index_follower],tree_to_copy)
                insertions[created_trees[index_follower]]=list(insertions[tree_to_copy])
                index_follower+=1
        elif choice_int==2:
            if index_follower>1:
                tree_to_assign=created_trees[random.randrange(0,index_follower)]
                tree_to_copy=created_trees[random.randrange(0,index_follower)]
                assigment_operator_printer(str_in,tree_to_assign,tree_to_copy)
                insertions[tree_to_assign]=list(insertions[tree_to_copy])
            else:
                default_constructor_printer(str_in,created_trees[index_follower])
                insertions[created_trees[index_follower]]=list()
                index_follower+=1
                tree_to_assign=created_trees[random.randrange(0,index_follower)]
                tree_to_copy=created_trees[random.randrange(0,index_follower)]
                assigment_operator_printer(str_in,created_trees[random.randrange(0,index_follower)],created_trees[random.randrange(0,index_follower)])
                insertions[tree_to_assign]=insertions[tree_to_copy]
        elif choice_int==3:#insert existing
            tree_to_insert=created_trees[random.randrange(0,index_follower)]
            if len(insertions[tree_to_insert])!=0:
                insertion=random.choice((insertions[tree_to_insert]))
                insert_printer(str_in,tree_to_insert,insertion)
            
        elif choice_int==4:#insert new
            tree_to_insert=created_trees[random.randrange(0,index_follower)]
            insertion=random.randrange(1,501)
            if len(insertions[tree_to_insert])==0:
                while(insertion in insertions[tree_to_insert]):
                    insertion=random.randrange(1,501)
            (insertions[tree_to_insert]).append(insertion)
            insert_printer(str_in,tree_to_insert,insertion)
        
        elif choice_int==5:#remove existing
            tree_to_remove=created_trees[random.randrange(0,index_follower)]
            if len(insertions[tree_to_remove])!=0:
                deletion=random.choice(list(insertions[tree_to_remove]))
                remove_printer(str_in,tree_to_remove,deletion)
                (insertions[tree_to_remove]).remove(deletion)
        elif choice_int==6:#remove new
            tree_to_remove=created_trees[random.randrange(0,index_follower)]
            deletion=random.randrange(1,501)
            if(len(insertions[tree_to_remove])!=0):
                while(deletion in insertions[tree_to_remove]):
                    deletion=random.randrange(1,501)
            remove_printer(str_in,tree_to_remove,deletion)
        elif choice_int==7:#print pretty
            tree_to_print=created_trees[random.randrange(0,index_follower)]
            print_printer(str_in,tree_to_print)
    with open(f"in/in{innum+1}.cpp","w") as f:
        f.write("#include <iostream>\n#include \"../your_code/ScapegoatTree.cpp\"\nint main() {\n")
    for line in str_in:
        with open(f"in/in{innum+1}.cpp","a") as f:
            f.write(line)
    with open(f"in/in{innum+1}.cpp","a") as f:
        f.write("return 0;\n}\n")