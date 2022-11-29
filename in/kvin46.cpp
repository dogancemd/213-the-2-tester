#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(666,'G')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(896,'V')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(491,'D')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(269,'P')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(921,'K')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(535,'T')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(550,'O')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(9,'A')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(284,'O')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(433,'B')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(716,'T')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(560,'X')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(841,'F')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(785,'N')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(920,'U')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(410,'W')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(85,'D')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(986,'G')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(3,'U')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(756,'T')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(529,'Z')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(749,'R')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(935,'K')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(406,'K')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(961,'Q')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(804,'W')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(562,'Y')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(551,'N')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(735,'Y')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(82,'E')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(387,'H')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(550)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(535) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 << " "; print_char_vector(tree.subMap(716,920));std::cout << std::endl;
std::cout<<"Line no " << 40 <<  " " <<(tree.update(432,'U')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(749)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(551)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(951,'R')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(85)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(94,'S')==false) << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<tree.floorEntry(3) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(846,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(841)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 <<  " " <<(tree.update(894,'U')==true) << std::endl;
std::cout<<"Line no " << 51 <<  " " <<(tree.update(868,'L')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(735)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.get(785) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(529)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.ceilingEntry(894) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.floorEntry(868) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.get(935) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(189)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(274,'R')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(284)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(73,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 << " "; print_char_vector(tree.subMap(868,951));std::cout << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<tree.get(562) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(678,'O')==false) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(804)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.get(274) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.get(896) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(951)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(342,'M')==true) << std::endl;
std::cout<<"Line no " << 75 <<  " " <<(tree.update(114,'J')==true) << std::endl;
std::cout<<"Line no " << 76 <<  " " <<(tree.update(53,'W')==false) << std::endl;
std::cout<<"Line no " << 77 <<  " " <<(tree.update(995,'N')==true) << std::endl;
std::cout<<"Line no " << 78 << " "; print_char_vector(tree.subMap(82,387));std::cout << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<tree.floorEntry(785) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(73)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(682,'M')==true) << std::endl;
std::cout<<"Line no " << 82 <<  " " <<(tree.update(556,'J')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(410)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(682)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(93,'J')==true) << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(3)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(196,'I')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(894)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(45,'Z')==true) << std::endl;
std::cout<<"Line no " << 91 <<  " " <<(tree.update(942,'N')==true) << std::endl;
std::cout<<"Line no " << 92 <<  " " <<(tree.update(807,'F')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(82)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(387)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.floorEntry(433) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.get(560) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(920)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(921)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(54,'C')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<tree.get(196) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(932,'Y')==false) << std::endl;
std::cout<<"Line no " << 103 <<  " " <<(tree.update(408,'E')==true) << std::endl;
std::cout<<"Line no " << 104 <<  " " <<(tree.update(945,'L')==false) << std::endl;
std::cout<<"Line no " << 105 << " "; print_char_vector(tree.subMap(114,556));std::cout << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(942)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 <<  " " <<(tree.update(808,'R')==true) << std::endl;
try{std::cout<<"Line no " << 108 <<  " " <<tree.floorEntry(491) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(433)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(704)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(768,'S')==true) << std::endl;
std::cout<<"Line no " << 112 << " "; print_char_vector(tree.subMap(432,491));std::cout << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<tree.floorEntry(432) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(491)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(533,'V')==true) << std::endl;
std::cout<<"Line no " << 117 << " "; print_char_vector(tree.subMap(196,807));std::cout << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(135,'O')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.floorEntry(896) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 << " "; print_char_vector(tree.subMap(432,756));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(58,'J')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.get(807) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(660,'P')==true) << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(562)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(858,'U')==true) << std::endl;
std::cout<<"Line no " << 130 <<  " " <<(tree.update(423,'F')==true) << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(666)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.get(807) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(401,'M')==true) << std::endl;
std::cout<<"Line no " << 134 <<  " " <<(tree.update(606,'L')==false) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
