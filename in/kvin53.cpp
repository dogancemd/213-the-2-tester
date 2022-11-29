#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(715,'E')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(140,'Y')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(492,'K')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(873,'T')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(7,'Z')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(533,'G')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(755,'F')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(661,'A')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(670,'J')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(819,'E')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(585,'R')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(373,'U')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(889,'T')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(111,'T')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(24,'N')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(301,'U')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(901,'U')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(474,'A')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(836,'L')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(955,'L')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(132,'U')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(910,'H')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(458,'S')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(961,'H')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(654,'A')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(902,'L')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(80,'Q')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(891,'H')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(101,'A')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<tree.floorEntry(140) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 35 <<  " " <<(tree.update(761,'V')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(889) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(519,'J')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<tree.ceilingEntry(901) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(761)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(889)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(776,'X')==true) << std::endl;
std::cout<<"Line no " << 46 <<  " " <<(tree.update(60,'V')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(704,'M')==true) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(301)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.get(458) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 << " "; print_char_vector(tree.subMap(519,755));std::cout << std::endl;
std::cout<<"Line no " << 52 << " "; print_char_vector(tree.subMap(670,873));std::cout << std::endl;
std::cout<<"Line no " << 53 <<  " " <<(tree.update(195,'A')==true) << std::endl;
std::cout<<"Line no " << 54 <<  " " <<(tree.update(609,'E')==true) << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(715)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(60)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(977,'Y')==true) << std::endl;
std::cout<<"Line no " << 60 <<  " " <<(tree.update(700,'M')==true) << std::endl;
std::cout<<"Line no " << 61 <<  " " <<(tree.update(157,'P')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 << " "; print_char_vector(tree.subMap(519,901));std::cout << std::endl;
std::cout<<"Line no " << 66 <<  " " <<(tree.update(952,'B')==true) << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(609)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.ceilingEntry(654) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(209,'V')==true) << std::endl;
std::cout<<"Line no " << 70 <<  " " <<(tree.update(862,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 71 <<  " " <<tree.ceilingEntry(458) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 << " "; print_char_vector(tree.subMap(492,533));std::cout << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.get(474) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(910)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(664,'Z')==true) << std::endl;
std::cout<<"Line no " << 77 <<  " " <<(tree.update(296,'R')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(96,'K')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(316,'L')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(923,'T')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 << " "; print_char_vector(tree.subMap(195,195));std::cout << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<tree.ceilingEntry(755) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(891)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(316)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.ceilingEntry(654) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.floorEntry(700) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(664)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(764,'S')==true) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(132)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(690,'N')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(810,'D')==true) << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(73,'Q')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 105 <<  " " <<(tree.update(756,'V')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.floorEntry(952) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(978,'N')==true) << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(974,'F')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(474)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 <<  " " <<(tree.update(916,'W')==false) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(700)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.get(458) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 << " "; print_char_vector(tree.subMap(157,776));std::cout << std::endl;
try{std::cout<<"Line no " << 116 <<  " " <<tree.floorEntry(654) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(498,'K')==true) << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(952)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(458)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(498)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(702,'F')==true) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<tree.floorEntry(810) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(149)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(659,'B')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(519)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(814,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
