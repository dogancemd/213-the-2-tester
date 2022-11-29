#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(383,'B')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(226,'V')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(218,'A')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(40,'Y')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(62,'E')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(884,'C')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(337,'N')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(105,'F')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(935,'Y')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(502,'E')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(843,'P')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(851,'X')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(902,'M')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(974,'M')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(463,'M')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(380,'A')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(828,'B')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(853,'S')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(322,'H')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(453,'C')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(493,'Q')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(268,'E')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(766,'F')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(141,'R')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(392,'I')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(741,'S')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(382,'S')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(950,'G')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(245,'S')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(102,'U')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(502)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(322)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.get(843) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(622,'J')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.get(226) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(141)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(463)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 << " "; print_char_vector(tree.subMap(382,935));std::cout << std::endl;
std::cout<<"Line no " << 43 <<  " " <<(tree.update(519,'T')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<tree.floorEntry(828) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.ceilingEntry(453) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(143,'I')==true) << std::endl;
try{std::cout<<"Line no " << 48 <<  " " <<tree.get(493) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 <<  " " <<(tree.update(426,'W')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(660,'B')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(464)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 << " "; print_char_vector(tree.subMap(453,884));std::cout << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(102)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(493)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(575,'P')==true) << std::endl;
std::cout<<"Line no " << 58 <<  " " <<(tree.update(485,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<tree.floorEntry(337) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(426)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.get(143) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.get(766) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(935)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(766)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(939,'G')==true) << std::endl;
std::cout<<"Line no " << 67 <<  " " <<(tree.update(960,'W')==false) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(828)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(143)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(226)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.get(575) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 << " "; print_char_vector(tree.subMap(519,741));std::cout << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<tree.ceilingEntry(62) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<tree.get(105) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(341,'E')==true) << std::endl;
std::cout<<"Line no " << 78 << " "; print_char_vector(tree.subMap(519,853));std::cout << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<tree.ceilingEntry(519) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(933,'B')==true) << std::endl;
std::cout<<"Line no " << 81 <<  " " <<(tree.update(887,'D')==true) << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(933)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(575)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(105)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(382)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 << " "; print_char_vector(tree.subMap(341,392));std::cout << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<tree.floorEntry(851) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(218)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(853)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(548)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 << " "; print_char_vector(tree.subMap(519,519));std::cout << std::endl;
std::cout<<"Line no " << 96 <<  " " <<(tree.update(81,'A')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(887)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(526,'Y')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(81)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(519)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.floorEntry(851) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(872,'L')==true) << std::endl;
try{std::cout<<"Line no " << 105 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.floorEntry(843) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.get(872) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.floorEntry(872) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(147,'F')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(660)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(238,'L')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(843)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.get(485) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(879,'V')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(741)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 122 <<  " " <<(tree.update(896,'I')==true) << std::endl;
std::cout<<"Line no " << 123 << " "; print_char_vector(tree.subMap(392,851));std::cout << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(485)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.get(526) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.get(147) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 <<  " " <<(tree.update(510,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(510)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(564,'V')==false) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(799,'R')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
