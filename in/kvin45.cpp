#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(230,'F')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(359,'G')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(496,'C')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(205,'Y')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(93,'H')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(861,'D')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(434,'W')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(105,'C')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(432,'N')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(877,'B')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(977,'P')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(159,'F')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(480,'B')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(924,'B')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(439,'F')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(838,'A')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(926,'M')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(561,'J')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(401,'T')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(721,'G')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(570,'C')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(904,'Y')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(703,'O')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(683,'L')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(847,'T')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(559,'L')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(49,'Z')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(198,'N')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(293,'F')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(885,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(561)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 <<  " " <<(tree.update(407,'L')==true) << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(480) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(568,'I')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.get(683) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(119,'G')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.floorEntry(205) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 << " "; print_char_vector(tree.subMap(359,926));std::cout << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(434)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(551,'E')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(775,'R')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(526,'T')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(847)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(838)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(861)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(851)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.get(703) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(230)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(155,'D')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(107,'C')==true) << std::endl;
std::cout<<"Line no " << 62 << " "; print_char_vector(tree.subMap(407,683));std::cout << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 << " "; print_char_vector(tree.subMap(293,359));std::cout << std::endl;
std::cout<<"Line no " << 65 <<  " " <<(tree.update(579,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(904)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(551)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<tree.floorEntry(568) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(334)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(154,'N')==true) << std::endl;
std::cout<<"Line no " << 73 <<  " " <<(tree.update(302,'W')==true) << std::endl;
std::cout<<"Line no " << 74 << " "; print_char_vector(tree.subMap(496,570));std::cout << std::endl;
std::cout<<"Line no " << 75 <<  " " <<(tree.update(387,'S')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.floorEntry(568) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(407)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(335,'X')==true) << std::endl;
std::cout<<"Line no " << 82 <<  " " <<(tree.update(795,'D')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.floorEntry(526) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(568)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(559)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(847,'G')==true) << std::endl;
std::cout<<"Line no " << 87 <<  " " <<(tree.update(900,'E')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(598,'H')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(616,'L')==true) << std::endl;
std::cout<<"Line no " << 92 <<  " " <<(tree.update(36,'Y')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(387)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(795)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(702,'D')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<tree.ceilingEntry(480) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.floorEntry(847) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(683)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(432)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 << " "; print_char_vector(tree.subMap(159,439));std::cout << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<tree.ceilingEntry(579) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.ceilingEntry(439) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 <<  " " <<(tree.update(163,'H')==true) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(616)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(598)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(335)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(238,'L')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(703)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(272,'H')==true) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(480)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(993,'U')==true) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.ceilingEntry(302) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(425,'G')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(721)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(744,'V')==true) << std::endl;
std::cout<<"Line no " << 132 <<  " " <<(tree.update(706,'K')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<(tree.pop(570)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
