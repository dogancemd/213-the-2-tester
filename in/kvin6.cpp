#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(192,'D')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(115,'G')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(207,'A')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(589,'L')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(536,'Q')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(991,'L')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(620,'I')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(471,'K')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(869,'R')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(1,'U')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(203,'P')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(439,'P')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(339,'N')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(262,'A')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(291,'G')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(876,'T')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(625,'O')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(393,'Y')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(627,'A')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(850,'G')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(534,'T')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(75,'F')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(463,'S')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(645,'U')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(357,'Q')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(310,'I')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(447,'Z')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(799,'F')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(216,'V')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(770,'C')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(463)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.floorEntry(876) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(620)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(993,'X')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.floorEntry(850) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(19,'I')==true) << std::endl;
std::cout<<"Line no " << 41 <<  " " <<(tree.update(749,'R')==true) << std::endl;
std::cout<<"Line no " << 42 << " "; print_char_vector(tree.subMap(310,439));std::cout << std::endl;
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(770)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(876)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(991)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(505,'X')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 << " "; print_char_vector(tree.subMap(534,589));std::cout << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<tree.ceilingEntry(627) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.get(207) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(608,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(608)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(399,'C')==true) << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(993)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 <<  " " <<(tree.update(716,'F')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(339)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(911,'A')==true) << std::endl;
std::cout<<"Line no " << 62 <<  " " <<(tree.update(601,'V')==true) << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(716)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(281,'B')==true) << std::endl;
std::cout<<"Line no " << 65 <<  " " <<(tree.update(37,'B')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(447)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(570,'E')==true) << std::endl;
std::cout<<"Line no " << 68 <<  " " <<(tree.update(231,'L')==true) << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(627)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.floorEntry(310) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 << " "; print_char_vector(tree.subMap(505,850));std::cout << std::endl;
std::cout<<"Line no " << 74 <<  " " <<(tree.update(937,'D')==true) << std::endl;
std::cout<<"Line no " << 75 <<  " " <<(tree.update(260,'V')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.get(399) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(207)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.get(645) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(265)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.ceilingEntry(19) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.ceilingEntry(601) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(922,'A')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(799)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(528,'C')==true) << std::endl;
std::cout<<"Line no " << 88 <<  " " <<(tree.update(352,'V')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(160)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(291)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(471)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(87,'W')==true) << std::endl;
std::cout<<"Line no " << 93 <<  " " <<(tree.update(927,'H')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(505)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(618,'L')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(536)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(115)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(87)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 << " "; print_char_vector(tree.subMap(75,260));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 106 <<  " " <<(tree.update(412,'L')==true) << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(922)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(534)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.ceilingEntry(399) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(291,'R')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(927)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(968,'I')==true) << std::endl;
std::cout<<"Line no " << 114 <<  " " <<(tree.update(366,'D')==true) << std::endl;
std::cout<<"Line no " << 115 <<  " " <<(tree.update(622,'U')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(310)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(291)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.get(618) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(589)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(372,'Y')==true) << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(611,'A')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.ceilingEntry(352) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(528)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 << " "; print_char_vector(tree.subMap(203,611));std::cout << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(495,'P')==false) << std::endl;
std::cout<<"Line no " << 130 <<  " " <<(tree.update(930,'D')==true) << std::endl;
std::cout<<"Line no " << 131 <<  " " <<(tree.update(907,'H')==true) << std::endl;
std::cout<<"Line no " << 132 <<  " " <<(tree.update(591,'P')==false) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(425)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(53,'A')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
