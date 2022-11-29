#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(449,'K')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(860,'V')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(735,'L')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(717,'Q')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(695,'S')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(887,'S')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(752,'P')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(284,'U')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(673,'E')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(737,'M')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(214,'D')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(712,'Q')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(612,'D')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(881,'E')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(890,'F')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(331,'M')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(594,'I')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(344,'Q')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(183,'V')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(921,'K')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(384,'N')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(399,'H')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(317,'C')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(327,'R')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(598,'P')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(899,'E')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(930,'X')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(307,'D')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(421,'V')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(592,'C')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(319)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(742)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.ceilingEntry(344) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(336,'X')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(344)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(180,'O')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(336)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(332,'G')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(421)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(860)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(612)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(307)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.ceilingEntry(887) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.ceilingEntry(737) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(732,'D')==false) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.get(592) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(695)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(546,'M')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 << " "; print_char_vector(tree.subMap(673,712));std::cout << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(600,'O')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(735)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 << " "; print_char_vector(tree.subMap(592,592));std::cout << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<tree.floorEntry(449) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(464,'O')==true) << std::endl;
std::cout<<"Line no " << 74 <<  " " <<(tree.update(504,'G')==true) << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<tree.floorEntry(673) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 << " "; print_char_vector(tree.subMap(464,712));std::cout << std::endl;
std::cout<<"Line no " << 77 << " "; print_char_vector(tree.subMap(717,737));std::cout << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(598)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.ceilingEntry(712) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(283,'M')==true) << std::endl;
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(100)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(331)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(490,'G')==true) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<tree.get(504) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.floorEntry(592) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(542,'A')==true) << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(548,'E')==true) << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(123,'I')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.get(464) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(648,'O')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(123)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(410,'M')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.get(410) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.floorEntry(548) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(68,'E')==true) << std::endl;
std::cout<<"Line no " << 100 << " "; print_char_vector(tree.subMap(504,752));std::cout << std::endl;
std::cout<<"Line no " << 101 <<  " " <<(tree.update(6,'T')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(332)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(913)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.ceilingEntry(410) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(16,'A')==true) << std::endl;
std::cout<<"Line no " << 106 <<  " " <<(tree.update(125,'C')==true) << std::endl;
std::cout<<"Line no " << 107 <<  " " <<(tree.update(568,'Z')==false) << std::endl;
try{std::cout<<"Line no " << 108 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.floorEntry(68) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.floorEntry(542) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 << " "; print_char_vector(tree.subMap(449,600));std::cout << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<tree.get(648) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 << " "; print_char_vector(tree.subMap(384,600));std::cout << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(648)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.get(16) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(594)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(324,'H')==true) << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(515,'B')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(490)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(505,'Z')==true) << std::endl;
std::cout<<"Line no " << 122 <<  " " <<(tree.update(391,'I')==true) << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(324)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.get(449) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 << " "; print_char_vector(tree.subMap(410,737));std::cout << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(410)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.get(125) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.ceilingEntry(16) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
