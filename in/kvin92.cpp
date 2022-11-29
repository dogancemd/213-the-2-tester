#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(343,'A')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(821,'D')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(438,'J')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(379,'D')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(559,'B')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(539,'L')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(807,'O')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(581,'B')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(586,'V')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(321,'W')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(18,'T')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(893,'L')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(886,'X')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(195,'W')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(295,'Z')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(554,'U')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(978,'M')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(549,'H')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(943,'U')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(608,'P')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(174,'D')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(328,'G')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(831,'H')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(433,'H')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(329,'R')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(156,'C')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(941,'E')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(944,'U')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(647,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<tree.ceilingEntry(295) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 35 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(295)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 <<  " " <<(tree.update(448,'T')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(328)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(581)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.ceilingEntry(554) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<tree.get(554) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(807)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 <<  " " <<(tree.update(464,'G')==true) << std::endl;
try{std::cout<<"Line no " << 46 <<  " " <<tree.floorEntry(559) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(533,'V')==true) << std::endl;
std::cout<<"Line no " << 49 <<  " " <<(tree.update(508,'O')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(533)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 <<  " " <<(tree.update(523,'S')==true) << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(943)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 54 << " "; print_char_vector(tree.subMap(329,608));std::cout << std::endl;
try{std::cout<<"Line no " << 55 <<  " " <<tree.ceilingEntry(549) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 << " "; print_char_vector(tree.subMap(343,978));std::cout << std::endl;
std::cout<<"Line no " << 57 <<  " " <<(tree.update(416,'S')==true) << std::endl;
std::cout<<"Line no " << 58 <<  " " <<(tree.update(501,'E')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.ceilingEntry(586) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.get(559) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(28,'B')==true) << std::endl;
try{std::cout<<"Line no " << 64 <<  " " <<tree.floorEntry(321) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(342,'X')==true) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(438)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(343)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(508)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 << " "; print_char_vector(tree.subMap(174,831));std::cout << std::endl;
try{std::cout<<"Line no " << 72 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(617,'G')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(559,941));std::cout << std::endl;
std::cout<<"Line no " << 76 <<  " " <<(tree.update(13,'I')==true) << std::endl;
try{std::cout<<"Line no " << 77 <<  " " <<(tree.pop(831)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 78 <<  " " <<(tree.update(407,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 << " "; print_char_vector(tree.subMap(608,893));std::cout << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(13)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<tree.floorEntry(433) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 << " "; print_char_vector(tree.subMap(433,464));std::cout << std::endl;
std::cout<<"Line no " << 85 << " "; print_char_vector(tree.subMap(195,586));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(617)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(195)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(448)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(464)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<tree.get(174) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.ceilingEntry(342) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(420,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(416)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(400,'D')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(407)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 << " "; print_char_vector(tree.subMap(379,647));std::cout << std::endl;
std::cout<<"Line no " << 103 <<  " " <<(tree.update(312,'F')==true) << std::endl;
std::cout<<"Line no " << 104 <<  " " <<(tree.update(742,'U')==true) << std::endl;
std::cout<<"Line no " << 105 <<  " " <<(tree.update(609,'S')==true) << std::endl;
std::cout<<"Line no " << 106 <<  " " <<(tree.update(74,'D')==true) << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(554)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(312)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<(tree.pop(549)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(342)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.ceilingEntry(174) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(609)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 << " "; print_char_vector(tree.subMap(539,608));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.ceilingEntry(539) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(586)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(400)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(821)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 122 <<  " " <<(tree.update(924,'D')==true) << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(329)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 << " "; print_char_vector(tree.subMap(501,559));std::cout << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(647)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 << " "; print_char_vector(tree.subMap(321,608));std::cout << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(433)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(507,'A')==true) << std::endl;
std::cout<<"Line no " << 132 <<  " " <<(tree.update(402,'D')==false) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
