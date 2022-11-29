#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(645,'S')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(868,'X')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(44,'C')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(167,'E')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(220,'D')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(804,'Y')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(805,'P')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(60,'M')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(84,'S')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(485,'U')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(406,'R')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(930,'C')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(437,'Q')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(191,'W')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(815,'G')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(690,'R')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(124,'H')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(630,'Y')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(338,'P')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(291,'A')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(264,'M')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(208,'K')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(936,'S')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(98,'H')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(837,'L')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(597,'B')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(305,'B')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(154,'X')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(831,'Y')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(629,'X')==true) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(167)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.ceilingEntry(936) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(804)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(495,'L')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(936,'R')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(437)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(872,'A')==true) << std::endl;
std::cout<<"Line no " << 43 << " "; print_char_vector(tree.subMap(60,124));std::cout << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.ceilingEntry(338) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<(tree.pop(629)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.floorEntry(868) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 <<  " " <<(tree.update(174,'S')==true) << std::endl;
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(264)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(208)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.floorEntry(191) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(657,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(657)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 <<  " " <<(tree.update(340,'P')==true) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(645)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 61 <<  " " <<(tree.update(24,'F')==true) << std::endl;
try{std::cout<<"Line no " << 62 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(64,'S')==true) << std::endl;
std::cout<<"Line no " << 64 <<  " " <<(tree.update(425,'U')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 <<  " " <<(tree.update(58,'S')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(340)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<tree.get(831) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(709,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<tree.ceilingEntry(84) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(124)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(141,'R')==true) << std::endl;
std::cout<<"Line no " << 75 <<  " " <<(tree.update(319,'V')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(983,'M')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(566,'L')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(892)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(815)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(485)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.get(837) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(566)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(630)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 << " "; print_char_vector(tree.subMap(406,690));std::cout << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<tree.floorEntry(319) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 << " "; print_char_vector(tree.subMap(98,305));std::cout << std::endl;
std::cout<<"Line no " << 89 <<  " " <<(tree.update(73,'I')==true) << std::endl;
std::cout<<"Line no " << 90 <<  " " <<(tree.update(600,'X')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.floorEntry(837) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(399)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 <<  " " <<(tree.update(559,'T')==true) << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(690)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(305)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(174)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.ceilingEntry(805) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(98)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.ceilingEntry(559) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 106 << " "; print_char_vector(tree.subMap(73,338));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 << " "; print_char_vector(tree.subMap(154,709));std::cout << std::endl;
std::cout<<"Line no " << 109 <<  " " <<(tree.update(729,'L')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(494,'T')==true) << std::endl;
std::cout<<"Line no " << 112 <<  " " <<(tree.update(67,'D')==true) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(909,'V')==true) << std::endl;
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(154)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.get(805) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(809,'D')==true) << std::endl;
std::cout<<"Line no " << 120 <<  " " <<(tree.update(633,'A')==true) << std::endl;
std::cout<<"Line no " << 121 <<  " " <<(tree.update(900,'J')==true) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(597)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(559)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(618,'D')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.floorEntry(319) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(600)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<(tree.pop(73)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 128 <<  " " <<(tree.update(975,'Y')==true) << std::endl;
std::cout<<"Line no " << 129 <<  " " <<(tree.update(534,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.ceilingEntry(425) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 << " "; print_char_vector(tree.subMap(67,709));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
