#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(746,'O')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(881,'L')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(594,'Y')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(920,'K')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(47,'W')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(220,'W')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(758,'Q')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(793,'H')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(508,'A')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(896,'M')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(732,'A')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(263,'N')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(583,'Y')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(362,'Y')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(403,'A')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(567,'Z')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(426,'U')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(359,'X')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(826,'B')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(902,'T')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(177,'O')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(668,'E')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(305,'V')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(723,'R')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(423,'V')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(489,'K')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(932,'F')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(157,'C')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(556,'I')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(483,'C')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(793)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.ceilingEntry(556) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(508)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(556)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(813,'U')==true) << std::endl;
std::cout<<"Line no " << 42 <<  " " <<(tree.update(174,'S')==true) << std::endl;
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(305)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(342,'Q')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.floorEntry(746) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 << " "; print_char_vector(tree.subMap(359,594));std::cout << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(886,'J')==true) << std::endl;
std::cout<<"Line no " << 50 <<  " " <<(tree.update(303,'V')==false) << std::endl;
std::cout<<"Line no " << 51 <<  " " <<(tree.update(136,'U')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(423)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(794,'E')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.get(220) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.ceilingEntry(886) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.get(794) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(668)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(980)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(159,'L')==true) << std::endl;
std::cout<<"Line no " << 64 <<  " " <<(tree.update(913,'I')==true) << std::endl;
std::cout<<"Line no " << 65 <<  " " <<(tree.update(669,'O')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<tree.floorEntry(342) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(159)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(204,'I')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.get(732) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(584,'F')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<tree.floorEntry(794) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(489,813));std::cout << std::endl;
std::cout<<"Line no " << 76 <<  " " <<(tree.update(737,'C')==true) << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(886)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(204)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(995,'D')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(403)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(594)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(555,'C')==true) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(881)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.floorEntry(362) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(426)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(732)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 << " "; print_char_vector(tree.subMap(263,737));std::cout << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(746)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 << " "; print_char_vector(tree.subMap(483,567));std::cout << std::endl;
std::cout<<"Line no " << 93 <<  " " <<(tree.update(530,'J')==true) << std::endl;
std::cout<<"Line no " << 94 << " "; print_char_vector(tree.subMap(342,813));std::cout << std::endl;
std::cout<<"Line no " << 95 <<  " " <<(tree.update(488,'O')==true) << std::endl;
std::cout<<"Line no " << 96 <<  " " <<(tree.update(498,'X')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.ceilingEntry(342) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(544,'R')==false) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(119,'P')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(555)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(498)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(669)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(131,'O')==true) << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(725,'D')==true) << std::endl;
std::cout<<"Line no " << 111 <<  " " <<(tree.update(622,'P')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(119)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.floorEntry(488) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(583)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(622)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.get(483) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(723)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 122 << " "; print_char_vector(tree.subMap(567,794));std::cout << std::endl;
std::cout<<"Line no " << 123 << " "; print_char_vector(tree.subMap(359,362));std::cout << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(824,'A')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.get(362) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.floorEntry(737) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 << " "; print_char_vector(tree.subMap(567,758));std::cout << std::endl;
std::cout<<"Line no " << 128 << " "; print_char_vector(tree.subMap(489,737));std::cout << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(826)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 << " "; print_char_vector(tree.subMap(737,737));std::cout << std::endl;
std::cout<<"Line no " << 131 <<  " " <<(tree.update(283,'V')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(283)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(813)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(938,'R')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
