#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(109,'E')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(594,'G')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(606,'L')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(204,'V')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(265,'L')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(40,'L')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(395,'D')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(535,'W')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(142,'O')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(887,'X')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(990,'P')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(155,'K')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(255,'R')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(275,'R')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(997,'Q')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(355,'T')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(865,'G')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(556,'A')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(156,'P')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(566,'C')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(23,'Q')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(740,'J')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(782,'P')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(86,'R')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(534,'K')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(548,'E')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(314,'X')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(824,'E')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(520,'S')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(436,'O')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<tree.floorEntry(782) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.floorEntry(865) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 <<  " " <<(tree.update(464,'W')==true) << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<tree.ceilingEntry(594) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(34,'F')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.floorEntry(355) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(109)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(79,'H')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(464)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(599,'M')==true) << std::endl;
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(86)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 <<  " " <<(tree.update(438,'P')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(314)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(275)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(466,'Q')==true) << std::endl;
std::cout<<"Line no " << 53 <<  " " <<(tree.update(950,'O')==true) << std::endl;
std::cout<<"Line no " << 54 <<  " " <<(tree.update(362,'U')==true) << std::endl;
std::cout<<"Line no " << 55 <<  " " <<(tree.update(215,'B')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.floorEntry(215) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(894)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(215)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(594)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(707,'U')==true) << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<tree.ceilingEntry(466) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<(tree.pop(566)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(782)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(740)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(199,'A')==true) << std::endl;
std::cout<<"Line no " << 69 << " "; print_char_vector(tree.subMap(155,204));std::cout << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.ceilingEntry(155) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(265)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.get(534) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(717)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(782,'S')==true) << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<tree.get(204) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(887)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<tree.floorEntry(556) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(204)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(155)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(746,'N')==false) << std::endl;
std::cout<<"Line no " << 82 << " "; print_char_vector(tree.subMap(436,535));std::cout << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(79)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(534)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(113,'I')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(199)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(310,'W')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(262)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<tree.get(355) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(707)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.floorEntry(865) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.floorEntry(438) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 << " "; print_char_vector(tree.subMap(556,824));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(735,'P')==false) << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<tree.get(438) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(371,'R')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.floorEntry(556) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(375,'R')==true) << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(466)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<tree.floorEntry(438) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.floorEntry(535) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(327)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 << " "; print_char_vector(tree.subMap(362,599));std::cout << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(608,'F')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(535)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(599)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(257,'W')==true) << std::endl;
std::cout<<"Line no " << 130 <<  " " <<(tree.update(305,'R')==true) << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(355)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(556)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.floorEntry(606) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
