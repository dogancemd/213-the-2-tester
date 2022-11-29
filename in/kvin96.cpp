#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(215,'B')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(711,'M')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(213,'O')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(404,'V')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(808,'I')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(947,'U')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(589,'Q')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(911,'G')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(902,'N')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(880,'H')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(908,'J')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(958,'B')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(339,'F')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(480,'Q')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(761,'X')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(513,'F')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(960,'F')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(613,'P')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(150,'R')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(179,'N')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(40,'V')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(641,'J')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(422,'J')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(230,'E')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(299,'R')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(672,'T')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(992,'R')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(525,'Z')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(517,'I')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(661,'Y')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(177,'M')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<tree.floorEntry(513) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 38 << " "; print_char_vector(tree.subMap(661,947));std::cout << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(808)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(902)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.ceilingEntry(215) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(525)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(177)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(911)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 51 << " "; print_char_vector(tree.subMap(213,613));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(142,'O')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 <<  " " <<(tree.update(22,'F')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(517)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(300,'Q')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(681,'M')==false) << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(589)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(200,'O')==true) << std::endl;
try{std::cout<<"Line no " << 64 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(802,'O')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<(tree.pop(215)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 << " "; print_char_vector(tree.subMap(404,661));std::cout << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(480)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<tree.ceilingEntry(422) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(613)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 << " "; print_char_vector(tree.subMap(404,672));std::cout << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(142)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 76 <<  " " <<(tree.update(712,'Y')==true) << std::endl;
std::cout<<"Line no " << 77 << " "; print_char_vector(tree.subMap(299,422));std::cout << std::endl;
std::cout<<"Line no " << 78 <<  " " <<(tree.update(527,'F')==true) << std::endl;
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(300)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(672)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 82 <<  " " <<tree.floorEntry(527) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(712)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.ceilingEntry(230) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(682,'X')==true) << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<tree.ceilingEntry(641) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(299)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<tree.ceilingEntry(404) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(44,'E')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.floorEntry(513) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(422)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(661)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 95 << " "; print_char_vector(tree.subMap(513,641));std::cout << std::endl;
try{std::cout<<"Line no " << 96 <<  " " <<tree.get(641) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<tree.get(682) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 100 <<  " " <<(tree.update(610,'J')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 102 << " "; print_char_vector(tree.subMap(527,610));std::cout << std::endl;
try{std::cout<<"Line no " << 103 <<  " " <<(tree.pop(527)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(404)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 106 << " "; print_char_vector(tree.subMap(610,641));std::cout << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<tree.floorEntry(682) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(682)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 << " "; print_char_vector(tree.subMap(513,641));std::cout << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<tree.floorEntry(610) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 112 <<  " " <<(tree.pop(513)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 113 <<  " " <<(tree.update(825,'S')==true) << std::endl;
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(610)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.ceilingEntry(825) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.ceilingEntry(825) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<tree.get(825) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 119 <<  " " <<tree.floorEntry(825) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 120 <<  " " <<(tree.update(450,'G')==true) << std::endl;
std::cout<<"Line no " << 121 <<  " " <<(tree.update(895,'U')==true) << std::endl;
std::cout<<"Line no " << 122 <<  " " <<(tree.update(116,'D')==true) << std::endl;
std::cout<<"Line no " << 123 <<  " " <<(tree.update(30,'V')==true) << std::endl;
std::cout<<"Line no " << 124 << " "; print_char_vector(tree.subMap(30,895));std::cout << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(895)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(450)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(378)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 132 <<  " " <<(tree.update(493,'T')==true) << std::endl;
std::cout<<"Line no " << 133 <<  " " <<(tree.update(59,'V')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
