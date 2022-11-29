#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(470,'B')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(913,'M')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(847,'Z')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(319,'V')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(639,'U')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(838,'N')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(558,'B')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(159,'L')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(777,'L')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(426,'K')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(605,'U')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(305,'Q')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(770,'W')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(674,'I')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(104,'B')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(665,'E')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(354,'G')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(835,'V')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(563,'D')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(796,'H')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(317,'I')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(289,'H')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(514,'V')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(956,'C')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(836,'H')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(353,'M')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(750,'E')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(718,'V')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(689,'O')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(578,'W')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 <<  " " <<(tree.update(645,'O')==true) << std::endl;
std::cout<<"Line no " << 37 <<  " " <<(tree.update(215,'C')==true) << std::endl;
std::cout<<"Line no " << 38 <<  " " <<(tree.update(327,'M')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.get(674) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(674)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(736,'I')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(514)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.get(578) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(354)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(642,'W')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(406,'Z')==true) << std::endl;
std::cout<<"Line no " << 54 <<  " " <<(tree.update(845,'N')==true) << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(845)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.ceilingEntry(319) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(861,'T')==true) << std::endl;
std::cout<<"Line no " << 59 <<  " " <<(tree.update(932,'H')==true) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<tree.ceilingEntry(406) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(887,'R')==true) << std::endl;
std::cout<<"Line no " << 62 <<  " " <<(tree.update(188,'W')==true) << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(319)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(813,'O')==true) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(932)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.get(835) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(188)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(689)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(199,'B')==true) << std::endl;
std::cout<<"Line no " << 73 << " "; print_char_vector(tree.subMap(558,777));std::cout << std::endl;
std::cout<<"Line no " << 74 <<  " " <<(tree.update(746,'G')==true) << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(110)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(211,'S')==true) << std::endl;
std::cout<<"Line no " << 77 << " "; print_char_vector(tree.subMap(770,796));std::cout << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<tree.floorEntry(317) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(379,'O')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(796)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(513,'K')==true) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<tree.get(835) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(836)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.ceilingEntry(835) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(517,'X')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(406)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.ceilingEntry(211) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(289)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.ceilingEntry(746) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(650,'S')==true) << std::endl;
std::cout<<"Line no " << 95 <<  " " <<(tree.update(124,'J')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(362,'B')==true) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<tree.floorEntry(639) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.get(605) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.get(835) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(720,'V')==true) << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(470)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.ceilingEntry(558) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(517)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(558)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 <<  " " <<(tree.update(192,'P')==true) << std::endl;
std::cout<<"Line no " << 108 << " "; print_char_vector(tree.subMap(736,835));std::cout << std::endl;
std::cout<<"Line no " << 109 <<  " " <<(tree.update(787,'I')==true) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(746)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(192)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(53,'R')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<tree.ceilingEntry(645) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(777)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(36,'Y')==true) << std::endl;
std::cout<<"Line no " << 117 <<  " " <<(tree.update(714,'U')==true) << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(93,'E')==true) << std::endl;
std::cout<<"Line no " << 119 <<  " " <<(tree.update(595,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.floorEntry(327) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(642)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.ceilingEntry(787) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 << " "; print_char_vector(tree.subMap(317,595));std::cout << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(362)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(886,'S')==true) << std::endl;
std::cout<<"Line no " << 128 << " "; print_char_vector(tree.subMap(211,813));std::cout << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(718)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.get(513) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(835)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(699,'B')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(513)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
