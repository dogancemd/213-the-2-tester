#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(582,'I')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(830,'V')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(385,'E')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(74,'L')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(654,'I')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(266,'V')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(521,'X')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(423,'M')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(205,'Z')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(250,'L')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(268,'F')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(153,'T')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(595,'G')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(448,'S')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(204,'Q')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(19,'Y')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(968,'W')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(892,'C')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(135,'C')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(132,'T')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(989,'Q')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(947,'J')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(950,'W')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(466,'W')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(39,'F')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(908,'O')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(85,'S')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(118,'W')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(748,'T')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(274,'X')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 << " "; print_char_vector(tree.subMap(85,268));std::cout << std::endl;
std::cout<<"Line no " << 37 << " "; print_char_vector(tree.subMap(947,989));std::cout << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(153)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(595)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(132)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.get(274) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.get(250) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(410,'O')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.get(423) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.floorEntry(448) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.floorEntry(204) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(220)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(947)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.get(410) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.ceilingEntry(385) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(854,'R')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(657,'B')==true) << std::endl;
std::cout<<"Line no " << 60 <<  " " <<(tree.update(232,'A')==true) << std::endl;
std::cout<<"Line no " << 61 <<  " " <<(tree.update(951,'X')==true) << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(526)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(262,'X')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(891,'N')==true) << std::endl;
std::cout<<"Line no " << 66 << " "; print_char_vector(tree.subMap(135,908));std::cout << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<tree.get(448) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.get(274) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(6,'I')==true) << std::endl;
std::cout<<"Line no " << 70 <<  " " <<(tree.update(378,'C')==true) << std::endl;
std::cout<<"Line no " << 71 << " "; print_char_vector(tree.subMap(6,657));std::cout << std::endl;
std::cout<<"Line no " << 72 <<  " " <<(tree.update(54,'P')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(550,'T')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.floorEntry(550) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.floorEntry(951) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(340,'D')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<tree.ceilingEntry(951) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.get(268) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(423)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(718,'V')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(550)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(330,'Y')==true) << std::endl;
std::cout<<"Line no " << 85 <<  " " <<(tree.update(665,'X')==true) << std::endl;
try{std::cout<<"Line no " << 86 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(252,'W')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.floorEntry(135) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(4,'D')==true) << std::endl;
std::cout<<"Line no " << 90 <<  " " <<(tree.update(769,'N')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<tree.floorEntry(250) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(330)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.ceilingEntry(232) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(398,'G')==true) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(118)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.ceilingEntry(135) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(908)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.get(951) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(748)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(854)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(232)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.get(466) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(135)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(474,'U')==true) << std::endl;
std::cout<<"Line no " << 109 <<  " " <<(tree.update(433,'I')==true) << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(79,'U')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(654)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(657)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(448)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<(tree.pop(378)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.get(950) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(250)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.ceilingEntry(718) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 122 << " "; print_char_vector(tree.subMap(398,410));std::cout << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<tree.ceilingEntry(950) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(88,'T')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(978)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(476,'X')==true) << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<tree.ceilingEntry(385) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(476)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.floorEntry(769) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(371,'W')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(204)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(503,'R')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<(tree.pop(581)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
