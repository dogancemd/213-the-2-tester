#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(148,'K')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(598,'R')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(507,'L')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(730,'V')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(565,'I')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(965,'Z')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(561,'O')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(891,'D')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(265,'C')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(28,'J')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(845,'G')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(953,'W')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(10,'Q')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(968,'C')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(750,'O')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(346,'V')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(922,'A')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(311,'P')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(376,'Q')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(144,'U')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(371,'Z')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(563,'Q')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(833,'P')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(753,'O')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(387,'K')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(159,'W')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(139,'E')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(238,'S')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(232,'L')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(31,'M')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.floorEntry(598) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 <<  " " <<(tree.update(287,'X')==true) << std::endl;
std::cout<<"Line no " << 37 <<  " " <<(tree.update(161,'B')==true) << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<tree.floorEntry(953) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(238)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.ceilingEntry(753) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(854,'I')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.get(28) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(565)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.ceilingEntry(232) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(844,'N')==true) << std::endl;
std::cout<<"Line no " << 49 << " "; print_char_vector(tree.subMap(371,968));std::cout << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<tree.floorEntry(561) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.get(833) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(346)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.get(159) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.get(833) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(507)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(265)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(1000,'U')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(240,'V')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(561)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(318)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(891)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(376)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.floorEntry(240) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(287)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(563,730));std::cout << std::endl;
std::cout<<"Line no " << 76 <<  " " <<(tree.update(362,'K')==true) << std::endl;
std::cout<<"Line no " << 77 <<  " " <<(tree.update(592,'X')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<tree.floorEntry(922) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.ceilingEntry(854) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(753)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(598)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(767,'D')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.floorEntry(387) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(381,'A')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<tree.get(161) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.ceilingEntry(854) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(592)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(286,'W')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(387)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(563)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.get(922) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(807,'K')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(953)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(633,'P')==true) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<tree.ceilingEntry(311) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.get(159) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(922)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(148)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(807)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 << " "; print_char_vector(tree.subMap(161,286));std::cout << std::endl;
std::cout<<"Line no " << 103 <<  " " <<(tree.update(825,'L')==true) << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(965)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(117,'P')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(825)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(450,'N')==true) << std::endl;
std::cout<<"Line no " << 111 << " "; print_char_vector(tree.subMap(371,845));std::cout << std::endl;
std::cout<<"Line no " << 112 <<  " " <<(tree.update(874,'E')==true) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(362)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(371)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(332,'S')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(730)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(485)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(874)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 <<  " " <<(tree.update(722,'C')==true) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(854)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(844)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.ceilingEntry(833) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.get(633) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(167,'O')==true) << std::endl;
std::cout<<"Line no " << 126 <<  " " <<(tree.update(300,'B')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(537,'H')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<tree.floorEntry(633) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(807,'S')==true) << std::endl;
std::cout<<"Line no " << 130 <<  " " <<(tree.update(836,'T')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.floorEntry(167) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(633)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(276,'D')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
