#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(700,'Q')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(302,'I')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(26,'W')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(102,'X')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(835,'Q')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(174,'Y')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(320,'A')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(243,'L')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(29,'S')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(510,'M')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(424,'F')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(985,'A')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(152,'P')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(30,'E')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(677,'P')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(554,'R')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(842,'T')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(68,'D')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(748,'X')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(317,'V')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(426,'S')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(221,'P')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(868,'B')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(451,'C')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(297,'U')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(981,'X')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(410,'Y')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(837,'H')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(623,'D')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(741,'C')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(789,'F')==true) << std::endl;
std::cout<<"Line no " << 36 << " "; print_char_vector(tree.subMap(174,243));std::cout << std::endl;
try{std::cout<<"Line no " << 37 <<  " " <<tree.ceilingEntry(451) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<(tree.pop(741)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 << " "; print_char_vector(tree.subMap(554,789));std::cout << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(510)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.ceilingEntry(221) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(29)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 44 <<  " " <<(tree.update(448,'G')==true) << std::endl;
std::cout<<"Line no " << 45 <<  " " <<(tree.update(5,'D')==true) << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<tree.ceilingEntry(448) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.get(985) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 << " "; print_char_vector(tree.subMap(410,410));std::cout << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(623)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.floorEntry(26) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(297)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(318)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 58 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(868)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(68)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.floorEntry(317) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(800,'O')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(985)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(221)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<tree.floorEntry(302) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(509,'M')==true) << std::endl;
try{std::cout<<"Line no " << 71 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(607,'U')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(243)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.floorEntry(842) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(940,'R')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.get(317) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.ceilingEntry(835) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<tree.floorEntry(426) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(835)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 << " "; print_char_vector(tree.subMap(102,320));std::cout << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(554)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(235,'V')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<tree.ceilingEntry(677) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<tree.floorEntry(940) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<tree.floorEntry(509) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(302)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(17,'S')==true) << std::endl;
std::cout<<"Line no " << 92 <<  " " <<(tree.update(791,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(451)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(944,'Z')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<(tree.pop(607)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.get(677) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.ceilingEntry(509) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(372,'G')==true) << std::endl;
std::cout<<"Line no " << 102 <<  " " <<(tree.update(228,'B')==true) << std::endl;
std::cout<<"Line no " << 103 << " "; print_char_vector(tree.subMap(320,789));std::cout << std::endl;
std::cout<<"Line no " << 104 <<  " " <<(tree.update(694,'Y')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 106 <<  " " <<(tree.update(529,'J')==true) << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(837)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(907,'L')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<tree.ceilingEntry(424) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(113,'Y')==true) << std::endl;
std::cout<<"Line no " << 111 <<  " " <<(tree.update(974,'J')==true) << std::endl;
std::cout<<"Line no " << 112 <<  " " <<(tree.update(323,'A')==true) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<tree.ceilingEntry(323) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(209,'T')==true) << std::endl;
std::cout<<"Line no " << 116 <<  " " <<(tree.update(453,'L')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(974)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(694)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(581)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(791)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(735,'T')==true) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(317)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(351,'I')==true) << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(279,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<(tree.pop(748)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(743,'L')==true) << std::endl;
try{std::cout<<"Line no " << 127 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.ceilingEntry(426) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 << " "; print_char_vector(tree.subMap(320,509));std::cout << std::endl;
std::cout<<"Line no " << 131 <<  " " <<(tree.update(747,'T')==true) << std::endl;
std::cout<<"Line no " << 132 <<  " " <<(tree.update(299,'W')==false) << std::endl;
try{std::cout<<"Line no " << 133 <<  " " <<tree.ceilingEntry(323) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<(tree.pop(655)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
