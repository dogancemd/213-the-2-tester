#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(601,'Q')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(414,'S')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(391,'B')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(333,'L')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(231,'X')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(318,'A')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(518,'L')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(147,'K')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(957,'U')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(556,'Q')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(807,'J')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(935,'F')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(535,'X')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(438,'K')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(278,'E')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(446,'Y')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(98,'V')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(950,'Z')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(609,'C')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(970,'H')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(404,'R')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(809,'F')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(205,'D')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(70,'A')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(755,'A')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(858,'W')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(447,'L')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(836,'P')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(915,'D')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(729,'X')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(492)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(147)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(333) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(704,'C')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.get(414) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(414)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(895,'P')==true) << std::endl;
std::cout<<"Line no " << 44 <<  " " <<(tree.update(57,'S')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<tree.ceilingEntry(704) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 << " "; print_char_vector(tree.subMap(970,970));std::cout << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(535)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(939,'A')==true) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(970)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(935)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(420,'P')==false) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<tree.ceilingEntry(556) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(53,'X')==true) << std::endl;
std::cout<<"Line no " << 55 <<  " " <<(tree.update(663,'U')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(139,'W')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<tree.ceilingEntry(318) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(333)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(400,'P')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(950)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(205)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(600,'P')==false) << std::endl;
std::cout<<"Line no " << 68 <<  " " <<(tree.update(958,'P')==true) << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(495,'Y')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(91,'M')==true) << std::endl;
std::cout<<"Line no " << 73 <<  " " <<(tree.update(651,'B')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(447)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(993,'E')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(651)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(76,'D')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(575,'F')==true) << std::endl;
std::cout<<"Line no " << 81 <<  " " <<(tree.update(539,'F')==true) << std::endl;
std::cout<<"Line no " << 82 <<  " " <<(tree.update(22,'N')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(575)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(702,'X')==false) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<tree.floorEntry(704) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(556)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 << " "; print_char_vector(tree.subMap(446,807));std::cout << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(231)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(22)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(895)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(858)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(440,'P')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(553)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(818,'W')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(915)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.get(609) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(663)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(601)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.get(809) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(558,'P')==true) << std::endl;
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(404)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.floorEntry(446) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.get(729) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(446)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(729)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(809)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(135,'G')==true) << std::endl;
std::cout<<"Line no " << 125 << " "; print_char_vector(tree.subMap(135,440));std::cout << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 <<  " " <<(tree.update(676,'L')==true) << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<tree.ceilingEntry(495) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 << " "; print_char_vector(tree.subMap(495,518));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(440)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(495)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.get(135) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
