#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(971,'U')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(422,'Y')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(866,'B')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(381,'O')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(872,'T')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(136,'A')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(925,'F')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(18,'J')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(565,'K')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(438,'B')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(476,'O')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(701,'C')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(205,'Q')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(857,'P')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(903,'Y')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(910,'N')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(953,'B')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(883,'P')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(195,'V')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(798,'J')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(225,'V')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(45,'J')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(111,'T')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(175,'U')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(149,'N')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(454,'G')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(233,'O')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(184,'R')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(512,'B')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(616,'I')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(872)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(616) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(149)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(975,'A')==true) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<tree.get(910) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.get(18) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(438)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 << " "; print_char_vector(tree.subMap(45,798));std::cout << std::endl;
std::cout<<"Line no " << 44 <<  " " <<(tree.update(47,'Z')==true) << std::endl;
std::cout<<"Line no " << 45 <<  " " <<(tree.update(781,'I')==true) << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(381)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(528)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(408,'I')==true) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(303,'O')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<tree.get(975) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(49,'B')==false) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(870,'X')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(225)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 << " "; print_char_vector(tree.subMap(111,565));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.floorEntry(184) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(255,'G')==true) << std::endl;
std::cout<<"Line no " << 64 <<  " " <<(tree.update(63,'Y')==true) << std::endl;
std::cout<<"Line no " << 65 <<  " " <<(tree.update(424,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<tree.get(422) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 << " "; print_char_vector(tree.subMap(111,303));std::cout << std::endl;
std::cout<<"Line no " << 68 << " "; print_char_vector(tree.subMap(424,953));std::cout << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(910)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(413,'V')==true) << std::endl;
std::cout<<"Line no " << 71 <<  " " <<(tree.update(933,'M')==true) << std::endl;
std::cout<<"Line no " << 72 << " "; print_char_vector(tree.subMap(870,933));std::cout << std::endl;
std::cout<<"Line no " << 73 <<  " " <<(tree.update(391,'J')==true) << std::endl;
std::cout<<"Line no " << 74 <<  " " <<(tree.update(129,'L')==false) << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<tree.floorEntry(866) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.floorEntry(933) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(658,'F')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(618,'S')==true) << std::endl;
std::cout<<"Line no " << 81 <<  " " <<(tree.update(696,'J')==true) << std::endl;
std::cout<<"Line no " << 82 <<  " " <<(tree.update(931,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.ceilingEntry(255) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(968,'W')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(696)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(452,'O')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.ceilingEntry(931) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.ceilingEntry(205) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(239)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(585,'X')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(558,'I')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(871)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(565)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(280,'H')==true) << std::endl;
std::cout<<"Line no " << 97 <<  " " <<(tree.update(224,'P')==true) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.floorEntry(408) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(127,'V')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(821,'I')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(7,'D')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(841)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.ceilingEntry(558) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(195)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(138,'X')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(138)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(136)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.ceilingEntry(175) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(974,'R')==true) << std::endl;
try{std::cout<<"Line no " << 116 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.ceilingEntry(233) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(916,'C')==true) << std::endl;
std::cout<<"Line no " << 119 <<  " " <<(tree.update(774,'O')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(870)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(863,'M')==true) << std::endl;
std::cout<<"Line no " << 122 <<  " " <<(tree.update(765,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(798)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(173,'M')==true) << std::endl;
std::cout<<"Line no " << 125 <<  " " <<(tree.update(514,'E')==true) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(413)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 <<  " " <<(tree.update(389,'C')==true) << std::endl;
std::cout<<"Line no " << 129 <<  " " <<(tree.update(432,'M')==true) << std::endl;
std::cout<<"Line no " << 130 << " "; print_char_vector(tree.subMap(857,883));std::cout << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(408)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.ceilingEntry(765) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<(tree.pop(821)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
