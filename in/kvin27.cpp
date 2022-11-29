#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(428,'H')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(23,'T')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(877,'W')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(382,'M')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(48,'C')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(457,'E')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(93,'N')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(132,'K')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(461,'R')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(156,'E')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(274,'S')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(932,'J')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(246,'U')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(1,'A')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(494,'O')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(825,'R')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(187,'S')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(968,'O')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(762,'L')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(820,'E')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(716,'M')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(963,'L')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(65,'F')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(769,'E')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(554,'T')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(460,'Z')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(479,'E')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(943,'M')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(806,'K')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(132)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 << " "; print_char_vector(tree.subMap(274,716));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.ceilingEntry(554) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.floorEntry(877) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.get(943) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(762)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(250,'D')==true) << std::endl;
std::cout<<"Line no " << 45 << " "; print_char_vector(tree.subMap(156,806));std::cout << std::endl;
std::cout<<"Line no " << 46 <<  " " <<(tree.update(340,'S')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.get(943) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 << " "; print_char_vector(tree.subMap(820,877));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(483,'Y')==false) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(806)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.get(187) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.floorEntry(877) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.ceilingEntry(716) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.floorEntry(340) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(975,'I')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(494)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(776,'P')==true) << std::endl;
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(250)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.ceilingEntry(776) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(93)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(354,'B')==true) << std::endl;
std::cout<<"Line no " << 69 << " "; print_char_vector(tree.subMap(428,460));std::cout << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(915,'B')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<tree.floorEntry(461) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.ceilingEntry(932) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 << " "; print_char_vector(tree.subMap(246,915));std::cout << std::endl;
std::cout<<"Line no " << 75 <<  " " <<(tree.update(49,'F')==true) << std::endl;
std::cout<<"Line no " << 76 <<  " " <<(tree.update(940,'N')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(475,'X')==true) << std::endl;
std::cout<<"Line no " << 79 <<  " " <<(tree.update(566,'D')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(820)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.ceilingEntry(428) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.ceilingEntry(877) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(475)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(805,'T')==true) << std::endl;
std::cout<<"Line no " << 88 <<  " " <<(tree.update(532,'B')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(428)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 << " "; print_char_vector(tree.subMap(65,246));std::cout << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(274)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(844,'V')==true) << std::endl;
std::cout<<"Line no " << 93 <<  " " <<(tree.update(214,'P')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(354)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 << " "; print_char_vector(tree.subMap(187,915));std::cout << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(187)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(536,'G')==true) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<tree.get(382) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.get(65) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(382)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(975,'M')==true) << std::endl;
std::cout<<"Line no " << 102 <<  " " <<(tree.update(149,'O')==true) << std::endl;
std::cout<<"Line no " << 103 <<  " " <<(tree.update(993,'U')==true) << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(716)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(949,'D')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(246)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 <<  " " <<(tree.update(303,'Z')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.ceilingEntry(566) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 << " "; print_char_vector(tree.subMap(214,844));std::cout << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(387,'B')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<tree.floorEntry(532) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(805)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.ceilingEntry(460) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.get(156) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(481,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(843,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(214)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(952,'L')==true) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(387)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.get(481) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(303)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(44,'D')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.get(340) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.ceilingEntry(481) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(843)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
