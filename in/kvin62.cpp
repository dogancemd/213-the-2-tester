#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(354,'A')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(105,'E')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(306,'G')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(492,'R')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(728,'B')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(856,'Y')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(495,'V')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(696,'I')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(72,'T')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(575,'Z')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(646,'X')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(794,'O')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(801,'L')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(2,'V')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(363,'I')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(224,'P')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(337,'O')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(272,'N')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(168,'C')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(111,'S')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(890,'F')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(590,'O')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(457,'I')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(902,'L')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(864,'E')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(986,'J')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(894,'F')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(870,'P')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(877,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<tree.ceilingEntry(72) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(890)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.get(590) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(812,'O')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.ceilingEntry(590) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(144,'S')==true) << std::endl;
std::cout<<"Line no " << 41 << " "; print_char_vector(tree.subMap(272,363));std::cout << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(590)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(224)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 << " "; print_char_vector(tree.subMap(363,457));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(812)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(728)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(856)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(498,'B')==true) << std::endl;
std::cout<<"Line no " << 55 <<  " " <<(tree.update(294,'O')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(363)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(144)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(646)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(457)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(870)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(772,'G')==true) << std::endl;
std::cout<<"Line no " << 63 <<  " " <<(tree.update(742,'D')==true) << std::endl;
std::cout<<"Line no " << 64 <<  " " <<(tree.update(419,'T')==true) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<tree.get(492) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(51,'M')==true) << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<tree.floorEntry(419) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(523,'N')==true) << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(553)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(743,'N')==true) << std::endl;
try{std::cout<<"Line no " << 71 <<  " " <<tree.get(696) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(498)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(111)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(481,'P')==true) << std::endl;
std::cout<<"Line no " << 75 <<  " " <<(tree.update(311,'T')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.get(354) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(354)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(743)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(611,'Y')==true) << std::endl;
std::cout<<"Line no " << 80 << " "; print_char_vector(tree.subMap(337,877));std::cout << std::endl;
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(495)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(575)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.ceilingEntry(902) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.ceilingEntry(611) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(306)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.floorEntry(611) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(509,'P')==true) << std::endl;
std::cout<<"Line no " << 89 <<  " " <<(tree.update(704,'A')==true) << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<tree.ceilingEntry(509) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(337)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(311)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(740,'F')==false) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<tree.floorEntry(877) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.ceilingEntry(902) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(169)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.floorEntry(772) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.ceilingEntry(794) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.get(877) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.ceilingEntry(272) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(465,'I')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.get(465) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.ceilingEntry(481) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(742)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(408,'T')==true) << std::endl;
std::cout<<"Line no " << 111 <<  " " <<(tree.update(948,'M')==false) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<tree.get(864) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(90,'N')==true) << std::endl;
std::cout<<"Line no " << 114 <<  " " <<(tree.update(243,'J')==true) << std::endl;
try{std::cout<<"Line no " << 115 <<  " " <<tree.ceilingEntry(294) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(155,'B')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(534,'H')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<tree.floorEntry(894) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(465)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 122 <<  " " <<(tree.update(917,'X')==false) << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(509)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(401,'H')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.get(611) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(419)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(579,'J')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<tree.get(408) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.floorEntry(877) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(492)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(864)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(272)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
