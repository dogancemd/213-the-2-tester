#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(893,'C')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(19,'E')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(43,'E')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(456,'O')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(579,'G')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(388,'Y')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(13,'K')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(843,'X')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(196,'O')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(113,'D')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(461,'Q')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(8,'Q')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(634,'T')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(754,'L')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(721,'Y')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(506,'B')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(405,'Y')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(863,'O')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(309,'V')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(416,'M')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(854,'E')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(453,'W')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(649,'G')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(760,'G')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(520,'M')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(274,'D')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(108,'N')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(767,'V')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(674,'H')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(757,'B')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(416)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.ceilingEntry(649) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(928)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(429,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.floorEntry(405) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(754)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.get(453) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 << " "; print_char_vector(tree.subMap(506,634));std::cout << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(767)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.get(429) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(708,'H')==true) << std::endl;
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(649)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 << " "; print_char_vector(tree.subMap(388,461));std::cout << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(357)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(854)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(893)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.floorEntry(453) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(260)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(333,'C')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<tree.floorEntry(405) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(950,'U')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(863)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.floorEntry(453) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(721)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.get(429) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(662,'P')==true) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<tree.get(333) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(196)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(113)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(79,'G')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(429)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.get(333) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(674)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(483,'G')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(708)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(760)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(405)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.get(483) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(854,'O')==true) << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<tree.floorEntry(461) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 << " "; print_char_vector(tree.subMap(274,843));std::cout << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<tree.get(506) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(483)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.ceilingEntry(506) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(843)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.ceilingEntry(453) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.floorEntry(579) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(556,'I')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(309)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.floorEntry(19) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(274)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 << " "; print_char_vector(tree.subMap(19,108));std::cout << std::endl;
std::cout<<"Line no " << 102 <<  " " <<(tree.update(325,'U')==true) << std::endl;
std::cout<<"Line no " << 103 <<  " " <<(tree.update(294,'Z')==false) << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(453)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(520)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.get(325) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(337,'Y')==false) << std::endl;
std::cout<<"Line no " << 110 << " "; print_char_vector(tree.subMap(43,579));std::cout << std::endl;
std::cout<<"Line no " << 111 <<  " " <<(tree.update(657,'U')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 << " "; print_char_vector(tree.subMap(456,506));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(318,'P')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(318)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(30,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.get(456) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 << " "; print_char_vector(tree.subMap(325,506));std::cout << std::endl;
std::cout<<"Line no " << 122 <<  " " <<(tree.update(740,'W')==true) << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(342,'H')==true) << std::endl;
std::cout<<"Line no " << 125 <<  " " <<(tree.update(769,'R')==true) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(769)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(261,'X')==true) << std::endl;
std::cout<<"Line no " << 128 <<  " " <<(tree.update(110,'L')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.ceilingEntry(342) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(596,'S')==false) << std::endl;
std::cout<<"Line no " << 134 <<  " " <<(tree.update(887,'Z')==false) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
