#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(819,'B')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(165,'T')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(89,'L')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(898,'M')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(296,'K')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(99,'M')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(718,'H')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(218,'R')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(644,'F')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(150,'W')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(567,'Y')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(855,'I')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(440,'Z')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(453,'Q')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(760,'D')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(77,'D')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(256,'N')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(451,'L')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(25,'A')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(44,'M')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(834,'E')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(128,'L')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(341,'O')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(31,'U')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(720,'I')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(255,'U')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(901,'C')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(751,'M')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(335,'H')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(666,'D')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(381,'U')==true) << std::endl;
std::cout<<"Line no " << 36 <<  " " <<(tree.update(71,'H')==true) << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(451) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.ceilingEntry(296) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.ceilingEntry(381) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.floorEntry(453) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.get(89) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(751)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 << " "; print_char_vector(tree.subMap(381,760));std::cout << std::endl;
std::cout<<"Line no " << 45 <<  " " <<(tree.update(944,'Y')==true) << std::endl;
std::cout<<"Line no " << 46 << " "; print_char_vector(tree.subMap(644,819));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(451)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(760)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(689,'Z')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(31)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(898)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 << " "; print_char_vector(tree.subMap(296,381));std::cout << std::endl;
std::cout<<"Line no " << 55 <<  " " <<(tree.update(859,'W')==false) << std::endl;
std::cout<<"Line no " << 56 <<  " " <<(tree.update(118,'G')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(834)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(110,'P')==true) << std::endl;
std::cout<<"Line no " << 59 <<  " " <<(tree.update(844,'G')==true) << std::endl;
std::cout<<"Line no " << 60 <<  " " <<(tree.update(319,'Q')==true) << std::endl;
std::cout<<"Line no " << 61 << " "; print_char_vector(tree.subMap(118,150));std::cout << std::endl;
std::cout<<"Line no " << 62 << " "; print_char_vector(tree.subMap(110,150));std::cout << std::endl;
std::cout<<"Line no " << 63 <<  " " <<(tree.update(768,'F')==true) << std::endl;
try{std::cout<<"Line no " << 64 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.ceilingEntry(689) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(165)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(128)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 << " "; print_char_vector(tree.subMap(71,720));std::cout << std::endl;
std::cout<<"Line no " << 69 <<  " " <<(tree.update(747,'I')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(666)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(627,'M')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(71)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.ceilingEntry(99) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(597,'P')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(855)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(110)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 << " "; print_char_vector(tree.subMap(77,819));std::cout << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(341)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.ceilingEntry(768) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.ceilingEntry(768) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(483)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(567)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(40)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 <<  " " <<(tree.update(675,'M')==true) << std::endl;
try{std::cout<<"Line no " << 86 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.get(99) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 << " "; print_char_vector(tree.subMap(440,597));std::cout << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(689)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(508,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 << " "; print_char_vector(tree.subMap(150,453));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 << " "; print_char_vector(tree.subMap(381,440));std::cout << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(150)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(527,'S')==true) << std::endl;
std::cout<<"Line no " << 98 << " "; print_char_vector(tree.subMap(527,819));std::cout << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(527)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(728,'I')==true) << std::endl;
std::cout<<"Line no " << 101 <<  " " <<(tree.update(477,'E')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(728)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 <<  " " <<(tree.update(151,'H')==true) << std::endl;
std::cout<<"Line no " << 105 <<  " " <<(tree.update(712,'I')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(255)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.ceilingEntry(218) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(415,'U')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.get(218) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 << " "; print_char_vector(tree.subMap(256,508));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 << " "; print_char_vector(tree.subMap(218,508));std::cout << std::endl;
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(477)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(712)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.floorEntry(296) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(768)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 << " "; print_char_vector(tree.subMap(335,508));std::cout << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(508)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(718)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(819)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(287,'A')==true) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(440)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 << " "; print_char_vector(tree.subMap(415,644));std::cout << std::endl;
std::cout<<"Line no " << 128 <<  " " <<(tree.update(972,'C')==true) << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(959)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(483)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.ceilingEntry(627) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(675)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(764,'C')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.floorEntry(381) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
