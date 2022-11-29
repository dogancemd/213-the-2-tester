#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(484,'B')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(812,'N')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(438,'U')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(940,'H')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(175,'X')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(149,'G')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(26,'U')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(851,'Z')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(957,'J')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(409,'B')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(41,'D')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(433,'M')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(948,'U')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(636,'W')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(106,'V')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(850,'Y')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(802,'V')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(918,'W')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(372,'Z')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(128,'M')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(893,'V')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(681,'Q')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(939,'B')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(880,'W')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(10,'J')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(223,'K')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(308,'Z')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(174,'V')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(287,'X')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(259,'V')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.get(850) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 <<  " " <<(tree.update(996,'I')==true) << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(940) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(840,'H')==true) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(175)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(255,'N')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(174)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(850)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(853,'E')==true) << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(638,'B')==true) << std::endl;
try{std::cout<<"Line no " << 48 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.floorEntry(681) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(152)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.ceilingEntry(636) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(818,'C')==true) << std::endl;
std::cout<<"Line no " << 54 <<  " " <<(tree.update(1,'O')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 << " "; print_char_vector(tree.subMap(681,918));std::cout << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<tree.get(918) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(802)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(840)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.get(255) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(664,'C')==true) << std::endl;
try{std::cout<<"Line no " << 64 <<  " " <<tree.get(664) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(891,'P')==true) << std::endl;
std::cout<<"Line no " << 66 <<  " " <<(tree.update(436,'N')==true) << std::endl;
std::cout<<"Line no " << 67 << " "; print_char_vector(tree.subMap(149,308));std::cout << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(851)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(405,'D')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(677,'W')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(853)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.ceilingEntry(149) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(948)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<tree.ceilingEntry(308) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(906,'D')==false) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.floorEntry(677) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(318)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.get(405) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(327,'T')==false) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<tree.get(149) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(41)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(405)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(664)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.floorEntry(893) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.floorEntry(880) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(194,'D')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(193)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(751,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<tree.floorEntry(681) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(315,'T')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(939)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(751)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(699,'W')==true) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<tree.get(893) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(573,'M')==true) << std::endl;
std::cout<<"Line no " << 101 <<  " " <<(tree.update(909,'T')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<tree.get(106) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(638)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.get(436) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(909)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(736)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(49,'Z')==true) << std::endl;
std::cout<<"Line no " << 109 <<  " " <<(tree.update(777,'H')==true) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.get(812) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(881,'E')==true) << std::endl;
std::cout<<"Line no " << 115 <<  " " <<(tree.update(546,'B')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(106)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(50,'F')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<tree.floorEntry(777) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(546)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(287)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(297,'W')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 << " "; print_char_vector(tree.subMap(409,636));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(561)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(219,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<tree.ceilingEntry(223) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(7,'H')==true) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<tree.floorEntry(149) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(286,'D')==true) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
