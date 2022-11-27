def default_constructor_printer(strin,tree_name):
    strin.append(f"ScapegoatTree<int> *{tree_name}=new ScapegoatTree<int>;\n")
def copy_constructor_printer(strin,tree_name,tree_to_be_copied):
    strin.append(f"ScapegoatTree<int> *{tree_name}=new ScapegoatTree<int>(*{tree_to_be_copied});\n")
def assigment_operator_printer(strin,tree_name,tree_to_be_copied):
    strin.append(f"*{tree_name}=*{tree_to_be_copied};\n")
def insert_printer(strin,tree_name,insertion):
    strin.append(f"std::cout << ({tree_name}->insert({insertion})) << std::endl;\n")
def remove_printer(strin,tree_name,deletion):
    strin.append(f"std::cout << ({tree_name}->remove({deletion})) << std::endl;\n")
def print_printer(strin,tree_name):
    strin.append(f"{tree_name}->printPretty();\n")
