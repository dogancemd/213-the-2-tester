#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(879,'T')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(336,'J')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(137,'N')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(977,'I')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(371,'Q')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(300,'P')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(950,'W')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(937,'M')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(115,'U')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(619,'F')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(755,'N')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(32,'D')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(260,'R')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(586,'F')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(69,'R')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(490,'K')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(964,'M')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(753,'J')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(860,'O')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(791,'Z')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(109,'Q')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(857,'P')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(568,'F')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(925,'U')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(663,'S')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(186,'Y')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(416,'V')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(911,'A')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(369,'N')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(852,'Y')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(446,'L')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(914,'T')==true) << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(568)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.floorEntry(300) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(948)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(569,'C')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.floorEntry(925) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(586)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 <<  " " <<(tree.update(653,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(753)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(791)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(392,'S')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(109)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 << " "; print_char_vector(tree.subMap(369,416));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.get(336) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(192,'U')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<tree.ceilingEntry(192) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(24,'J')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.ceilingEntry(446) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(914)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(137)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(911)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(371)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(136,'G')==true) << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<tree.get(937) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(369)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(234,'T')==true) << std::endl;
std::cout<<"Line no " << 73 <<  " " <<(tree.update(735,'J')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(416)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(392)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(410,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<tree.get(300) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.floorEntry(663) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(382,'K')==true) << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.get(410) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(145,'M')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(755)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(619)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(908,'B')==true) << std::endl;
std::cout<<"Line no " << 88 <<  " " <<(tree.update(717,'D')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(735)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(490)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 << " "; print_char_vector(tree.subMap(382,857));std::cout << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(554,'K')==true) << std::endl;
std::cout<<"Line no " << 95 <<  " " <<(tree.update(170,'R')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(103,'G')==true) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(336)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(170)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(103)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.ceilingEntry(569) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(908)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.get(569) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(558,'B')==true) << std::endl;
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(234)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.get(857) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.get(852) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(867)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(554)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.ceilingEntry(446) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(260)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(709,'D')==true) << std::endl;
std::cout<<"Line no " << 119 <<  " " <<(tree.update(973,'N')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.get(410) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(446)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 << " "; print_char_vector(tree.subMap(300,653));std::cout << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(638,'W')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.floorEntry(717) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(468,'Z')==true) << std::endl;
std::cout<<"Line no " << 128 <<  " " <<(tree.update(101,'U')==true) << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(709)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(256,'K')==true) << std::endl;
std::cout<<"Line no " << 131 <<  " " <<(tree.update(272,'D')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(127,'V')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<(tree.pop(256)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
