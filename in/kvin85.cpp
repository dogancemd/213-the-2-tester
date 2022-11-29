#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(35,'E')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(584,'R')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(870,'Z')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(107,'E')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(286,'J')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(888,'Q')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(464,'F')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(405,'W')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(409,'V')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(779,'D')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(44,'E')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(591,'F')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(990,'N')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(344,'K')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(520,'T')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(824,'K')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(172,'Y')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(966,'X')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(287,'X')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(945,'P')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(79,'K')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(858,'F')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(868,'P')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(18,'S')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(455,'P')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(856,'S')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(342,'C')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(550,'D')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(313,'P')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(863,'M')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(455)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.get(550) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.floorEntry(945) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(582,'C')==true) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(44)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(342)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(124,'Y')==true) << std::endl;
std::cout<<"Line no " << 43 <<  " " <<(tree.update(701,'H')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(286)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(550)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 47 <<  " " <<(tree.update(215,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(858)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(868)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.ceilingEntry(409) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 << " "; print_char_vector(tree.subMap(35,870));std::cout << std::endl;
std::cout<<"Line no " << 54 <<  " " <<(tree.update(849,'C')==true) << std::endl;
std::cout<<"Line no " << 55 <<  " " <<(tree.update(938,'E')==false) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<tree.ceilingEntry(313) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 << " "; print_char_vector(tree.subMap(313,863));std::cout << std::endl;
std::cout<<"Line no " << 59 <<  " " <<(tree.update(909,'P')==true) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(750)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(79)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(617,'U')==true) << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<tree.get(464) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(779)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(287)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(856)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(215)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(701)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(965,'Z')==true) << std::endl;
std::cout<<"Line no " << 72 <<  " " <<(tree.update(991,'N')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(464)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(461,'G')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.floorEntry(591) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(870)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.ceilingEntry(591) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(281,'V')==true) << std::endl;
std::cout<<"Line no " << 81 <<  " " <<(tree.update(408,'G')==true) << std::endl;
std::cout<<"Line no " << 82 <<  " " <<(tree.update(183,'G')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.ceilingEntry(582) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.get(344) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(75,'Z')==true) << std::endl;
std::cout<<"Line no " << 88 <<  " " <<(tree.update(678,'D')==true) << std::endl;
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(408)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(475,'E')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(678)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 92 <<  " " <<(tree.update(743,'U')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(183)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(965)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(849)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(887,'A')==true) << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(888)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(547,'O')==true) << std::endl;
std::cout<<"Line no " << 103 << " "; print_char_vector(tree.subMap(75,172));std::cout << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<tree.floorEntry(520) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<(tree.pop(107)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<tree.floorEntry(591) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(939,'G')==true) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(281)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(743)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(708,'L')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<tree.get(887) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(645,'M')==true) << std::endl;
std::cout<<"Line no " << 116 <<  " " <<(tree.update(425,'B')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.floorEntry(945) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(799,'W')==true) << std::endl;
std::cout<<"Line no " << 120 << " "; print_char_vector(tree.subMap(547,824));std::cout << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<tree.ceilingEntry(313) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(542)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(492,'B')==true) << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(113,'R')==true) << std::endl;
std::cout<<"Line no " << 125 <<  " " <<(tree.update(231,'V')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.get(824) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(763,'M')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(617)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(824)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.get(708) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.ceilingEntry(582) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
