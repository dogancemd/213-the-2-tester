#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(905,'S')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(688,'P')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(832,'I')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(330,'O')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(353,'G')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(606,'I')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(721,'K')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(150,'J')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(639,'N')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(70,'M')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(689,'Z')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(413,'W')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(742,'I')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(315,'L')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(769,'C')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(682,'G')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(205,'T')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(900,'W')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(663,'M')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(228,'L')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(472,'I')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(235,'N')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(8,'I')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(800,'D')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(570,'I')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(2,'K')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(545,'Z')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(221,'S')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(321,'L')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(554,'Z')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<tree.get(330) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.get(742) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.get(2) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.floorEntry(545) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(800)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.ceilingEntry(742) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(214,'J')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 << " "; print_char_vector(tree.subMap(228,689));std::cout << std::endl;
std::cout<<"Line no " << 49 << " "; print_char_vector(tree.subMap(214,315));std::cout << std::endl;
std::cout<<"Line no " << 50 <<  " " <<(tree.update(492,'A')==true) << std::endl;
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(639)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(472)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 << " "; print_char_vector(tree.subMap(330,492));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(663)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 <<  " " <<(tree.update(576,'V')==true) << std::endl;
std::cout<<"Line no " << 57 << " "; print_char_vector(tree.subMap(545,721));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 59 << " "; print_char_vector(tree.subMap(205,235));std::cout << std::endl;
std::cout<<"Line no " << 60 <<  " " <<(tree.update(392,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(492)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(180,'R')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.ceilingEntry(545) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 66 << " "; print_char_vector(tree.subMap(576,688));std::cout << std::endl;
std::cout<<"Line no " << 67 << " "; print_char_vector(tree.subMap(214,353));std::cout << std::endl;
std::cout<<"Line no " << 68 << " "; print_char_vector(tree.subMap(180,769));std::cout << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(638,'R')==true) << std::endl;
try{std::cout<<"Line no " << 71 <<  " " <<tree.get(576) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(570)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<tree.get(742) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(721)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 << " "; print_char_vector(tree.subMap(392,576));std::cout << std::endl;
std::cout<<"Line no " << 77 <<  " " <<(tree.update(155,'M')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(353)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(900,'H')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(769)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(638)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(103,'E')==true) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(155)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(228)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(387,'L')==false) << std::endl;
std::cout<<"Line no " << 87 <<  " " <<(tree.update(278,'W')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 90 <<  " " <<(tree.update(164,'Z')==true) << std::endl;
std::cout<<"Line no " << 91 <<  " " <<(tree.update(643,'C')==true) << std::endl;
std::cout<<"Line no " << 92 <<  " " <<(tree.update(465,'G')==true) << std::endl;
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(235)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(392)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.floorEntry(278) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(103)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(577)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(966,'F')==true) << std::endl;
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(60)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(221)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.get(554) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 <<  " " <<(tree.update(516,'R')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(767,'E')==true) << std::endl;
std::cout<<"Line no " << 110 <<  " " <<(tree.update(235,'A')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(688)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(392,'N')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.ceilingEntry(235) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 << " "; print_char_vector(tree.subMap(235,465));std::cout << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(232,'J')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 <<  " " <<(tree.update(374,'T')==true) << std::endl;
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(767)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(374)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(93,'F')==true) << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(569,'A')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(696,'S')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(25,'W')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(243,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(321)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(214)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(450,'H')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
