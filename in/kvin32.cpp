#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(256,'P')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(351,'M')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(889,'E')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(13,'V')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(647,'N')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(685,'C')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(225,'W')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(835,'D')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(525,'O')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(490,'L')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(962,'P')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(154,'M')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(381,'S')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(419,'D')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(345,'Y')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(80,'C')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(198,'I')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(356,'J')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(33,'L')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(343,'R')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(639,'Y')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(878,'X')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(48,'V')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(879,'B')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(771,'C')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(2,'I')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(701,'Z')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(660,'T')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(634,'J')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(465,'B')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(295,'I')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 << " "; print_char_vector(tree.subMap(639,660));std::cout << std::endl;
std::cout<<"Line no " << 40 << " "; print_char_vector(tree.subMap(2,639));std::cout << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(419)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.ceilingEntry(343) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(771)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 << " "; print_char_vector(tree.subMap(490,639));std::cout << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(647)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(546,'I')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(634)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 << " "; print_char_vector(tree.subMap(13,198));std::cout << std::endl;
std::cout<<"Line no " << 54 <<  " " <<(tree.update(593,'J')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 <<  " " <<(tree.update(330,'N')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(295)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(275,'X')==true) << std::endl;
std::cout<<"Line no " << 59 <<  " " <<(tree.update(555,'T')==false) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(330)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.get(660) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<(tree.pop(835)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.ceilingEntry(660) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(525)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(660)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(372,'R')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(709,'V')==true) << std::endl;
try{std::cout<<"Line no " << 70 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.floorEntry(465) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(343)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(627,'D')==true) << std::endl;
std::cout<<"Line no " << 75 <<  " " <<(tree.update(169,'N')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 << " "; print_char_vector(tree.subMap(169,225));std::cout << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(225)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(442,'G')==false) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(685)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(356)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.ceilingEntry(709) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(268,'I')==true) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(198)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(593)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(389,'G')==false) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(154)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(275)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(102,'G')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(169)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(627)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.get(256) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.floorEntry(351) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 97 <<  " " <<(tree.update(117,'I')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<tree.get(381) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 <<  " " <<(tree.update(361,'O')==true) << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<tree.ceilingEntry(490) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.ceilingEntry(465) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.ceilingEntry(465) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(282,'D')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<tree.ceilingEntry(351) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(268)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(701)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.get(372) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(490)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(846)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(361)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.ceilingEntry(465) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 << " "; print_char_vector(tree.subMap(351,351));std::cout << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(171,'F')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(381)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.get(546) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(256)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.floorEntry(465) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(849,'O')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(530,'P')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<tree.get(372) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<tree.ceilingEntry(530) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(593,'A')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 << " "; print_char_vector(tree.subMap(282,530));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
