#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(118,'N')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(804,'G')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(223,'J')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(209,'R')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(348,'L')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(325,'F')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(877,'K')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(997,'S')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(645,'J')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(593,'M')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(663,'R')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(354,'V')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(584,'V')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(211,'Q')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(855,'M')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(945,'I')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(736,'G')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(301,'L')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(993,'G')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(240,'X')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(723,'M')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(443,'T')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(199,'D')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(868,'S')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(587,'I')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(865,'U')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(517,'F')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(185,'I')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(665,'B')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(344,'W')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(228,'J')==true) << std::endl;
std::cout<<"Line no " << 36 <<  " " <<(tree.update(641,'B')==true) << std::endl;
std::cout<<"Line no " << 37 <<  " " <<(tree.update(689,'O')==true) << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<tree.ceilingEntry(804) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(565,'E')==true) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(804)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.floorEntry(565) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(877)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(376,'E')==true) << std::endl;
std::cout<<"Line no " << 44 <<  " " <<(tree.update(658,'R')==true) << std::endl;
try{std::cout<<"Line no " << 45 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(466,'B')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(689) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(749,'F')==false) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 50 << " "; print_char_vector(tree.subMap(376,665));std::cout << std::endl;
std::cout<<"Line no " << 51 <<  " " <<(tree.update(854,'B')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<tree.ceilingEntry(645) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 <<  " " <<(tree.update(76,'S')==true) << std::endl;
std::cout<<"Line no " << 55 << " "; print_char_vector(tree.subMap(223,997));std::cout << std::endl;
std::cout<<"Line no " << 56 <<  " " <<(tree.update(215,'A')==true) << std::endl;
std::cout<<"Line no " << 57 <<  " " <<(tree.update(588,'F')==true) << std::endl;
std::cout<<"Line no " << 58 <<  " " <<(tree.update(852,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(658)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.ceilingEntry(240) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(301)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(143,'X')==true) << std::endl;
std::cout<<"Line no " << 65 << " "; print_char_vector(tree.subMap(723,945));std::cout << std::endl;
std::cout<<"Line no " << 66 << " "; print_char_vector(tree.subMap(118,443));std::cout << std::endl;
try{std::cout<<"Line no " << 67 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(868)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(655,'J')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(587)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(584)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(185)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(223,466));std::cout << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(783,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(674)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(908,'F')==true) << std::endl;
std::cout<<"Line no " << 80 <<  " " <<(tree.update(459,'P')==true) << std::endl;
try{std::cout<<"Line no " << 81 <<  " " <<tree.floorEntry(118) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(854)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(183)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 <<  " " <<(tree.update(916,'E')==true) << std::endl;
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(223)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(855)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(118)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(583,'K')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(459)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.get(865) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(889,'S')==true) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(783)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 << " "; print_char_vector(tree.subMap(215,945));std::cout << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.ceilingEntry(565) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(904,'Y')==true) << std::endl;
std::cout<<"Line no " << 99 <<  " " <<(tree.update(932,'L')==true) << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(240)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(395)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(348)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(932)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.floorEntry(143) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 << " "; print_char_vector(tree.subMap(215,443));std::cout << std::endl;
std::cout<<"Line no " << 109 <<  " " <<(tree.update(664,'G')==true) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(325)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.get(209) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.floorEntry(215) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 << " "; print_char_vector(tree.subMap(199,466));std::cout << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(393)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 << " "; print_char_vector(tree.subMap(443,736));std::cout << std::endl;
std::cout<<"Line no " << 116 <<  " " <<(tree.update(997,'O')==true) << std::endl;
std::cout<<"Line no " << 117 <<  " " <<(tree.update(45,'Z')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(229)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(689)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.get(916) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(215)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.get(997) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(443)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.ceilingEntry(588) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(641)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.floorEntry(376) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(663)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(371,'F')==false) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
