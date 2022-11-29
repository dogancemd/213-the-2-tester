#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(538,'L')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(483,'Y')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(129,'D')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(9,'Q')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(520,'I')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(725,'A')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(990,'O')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(982,'T')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(118,'I')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(468,'B')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(902,'J')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(894,'O')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(658,'N')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(671,'I')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(860,'O')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(429,'L')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(248,'P')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(318,'X')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(279,'A')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(978,'W')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(551,'A')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(41,'V')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(673,'B')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(368,'R')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(532,'B')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(893,'T')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(339,'O')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(917,'W')==true) << std::endl;
std::cout<<"Line no " << 33 << " "; print_char_vector(tree.subMap(41,532));std::cout << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(139,'B')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(917)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 36 <<  " " <<(tree.update(151,'Z')==false) << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(860)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(247,'R')==true) << std::endl;
std::cout<<"Line no " << 40 <<  " " <<(tree.update(484,'I')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(129)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.ceilingEntry(893) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.floorEntry(483) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(118)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(291,'A')==true) << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(864,'O')==true) << std::endl;
std::cout<<"Line no " << 50 <<  " " <<(tree.update(418,'F')==true) << std::endl;
std::cout<<"Line no " << 51 <<  " " <<(tree.update(50,'V')==true) << std::endl;
std::cout<<"Line no " << 52 << " "; print_char_vector(tree.subMap(248,538));std::cout << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(339)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(864)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(35,'V')==true) << std::endl;
std::cout<<"Line no " << 56 <<  " " <<(tree.update(421,'G')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(41)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(532)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(893)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.get(725) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.ceilingEntry(982) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(673)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(882,'L')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<tree.get(671) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(94,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(285,'C')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.ceilingEntry(368) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(50)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.ceilingEntry(484) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.ceilingEntry(139) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(671)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(725)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.ceilingEntry(94) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(468)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(248)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(350,'C')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.get(247) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 <<  " " <<(tree.update(943,'Q')==true) << std::endl;
std::cout<<"Line no " << 86 <<  " " <<(tree.update(270,'M')==true) << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(53,'W')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(765,'V')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.ceilingEntry(285) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(211)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(575,'X')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.ceilingEntry(765) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(85,'F')==true) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<tree.ceilingEntry(270) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(894)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(94)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(323,'H')==true) << std::endl;
std::cout<<"Line no " << 102 <<  " " <<(tree.update(895,'F')==true) << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<tree.floorEntry(35) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(895)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(882)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(350)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.get(658) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.ceilingEntry(765) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(421)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(575)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(168,'O')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.get(368) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.ceilingEntry(270) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(368)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(318)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(247)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(484)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.ceilingEntry(429) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 << " "; print_char_vector(tree.subMap(139,168));std::cout << std::endl;
std::cout<<"Line no " << 125 <<  " " <<(tree.update(384,'M')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(168)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.get(279) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(239,'M')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.floorEntry(520) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(85)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(848,'J')==false) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
