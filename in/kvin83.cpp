#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(541,'N')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(84,'B')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(545,'O')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(900,'J')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(327,'H')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(251,'I')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(901,'K')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(316,'N')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(213,'P')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(282,'Q')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(963,'K')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(505,'N')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(181,'Y')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(201,'J')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(581,'D')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(52,'P')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(650,'H')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(119,'T')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(381,'L')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(10,'K')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(388,'L')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(843,'I')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(130,'M')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(572,'Q')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(680,'K')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(978,'U')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(348,'R')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(198,'M')==true) << std::endl;
try{std::cout<<"Line no " << 33 <<  " " <<(tree.pop(327)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 34 <<  " " <<(tree.update(379,'G')==false) << std::endl;
try{std::cout<<"Line no " << 35 <<  " " <<(tree.pop(130)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(201)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 37 << " "; print_char_vector(tree.subMap(650,680));std::cout << std::endl;
try{std::cout<<"Line no " << 38 <<  " " <<tree.get(680) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(119)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.floorEntry(198) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.get(843) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(867,'V')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(251)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(381) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 << " "; print_char_vector(tree.subMap(181,680));std::cout << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.floorEntry(505) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.ceilingEntry(545) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(213)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.floorEntry(572) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(52)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 <<  " " <<(tree.update(351,'B')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.get(545) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(572)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(35,'A')==true) << std::endl;
std::cout<<"Line no " << 63 <<  " " <<(tree.update(831,'O')==true) << std::endl;
try{std::cout<<"Line no " << 64 <<  " " <<tree.floorEntry(316) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.ceilingEntry(650) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<tree.ceilingEntry(198) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(581)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 << " "; print_char_vector(tree.subMap(181,680));std::cout << std::endl;
std::cout<<"Line no " << 71 <<  " " <<(tree.update(586,'S')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 << " "; print_char_vector(tree.subMap(282,381));std::cout << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<tree.get(381) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(878,'R')==false) << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<tree.get(181) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(316)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 << " "; print_char_vector(tree.subMap(282,505));std::cout << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(282)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(545)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.get(388) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(4,'D')==true) << std::endl;
try{std::cout<<"Line no " << 85 <<  " " <<tree.get(4) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(505)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(650)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(388)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(75,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<tree.ceilingEntry(181) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(994,'F')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(381)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 << " "; print_char_vector(tree.subMap(84,181));std::cout << std::endl;
std::cout<<"Line no " << 99 <<  " " <<(tree.update(415,'Z')==true) << std::endl;
std::cout<<"Line no " << 100 <<  " " <<(tree.update(269,'X')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.get(269) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(793,'C')==true) << std::endl;
std::cout<<"Line no " << 104 <<  " " <<(tree.update(23,'S')==true) << std::endl;
std::cout<<"Line no " << 105 <<  " " <<(tree.update(389,'G')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 <<  " " <<(tree.update(589,'H')==true) << std::endl;
std::cout<<"Line no " << 108 <<  " " <<(tree.update(900,'J')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 <<  " " <<(tree.update(141,'M')==false) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(900)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(829)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(306,'U')==true) << std::endl;
std::cout<<"Line no " << 117 << " "; print_char_vector(tree.subMap(793,793));std::cout << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(389)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(793)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 122 << " "; print_char_vector(tree.subMap(198,589));std::cout << std::endl;
std::cout<<"Line no " << 123 <<  " " <<(tree.update(303,'X')==true) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(181)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.ceilingEntry(306) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.ceilingEntry(306) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(40,'P')==false) << std::endl;
std::cout<<"Line no " << 128 <<  " " <<(tree.update(385,'A')==true) << std::endl;
std::cout<<"Line no " << 129 <<  " " <<(tree.update(458,'L')==false) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<tree.ceilingEntry(589) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.ceilingEntry(198) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
