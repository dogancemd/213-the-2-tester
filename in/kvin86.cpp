#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(878,'Z')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(208,'Q')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(111,'I')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(663,'P')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(718,'I')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(667,'O')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(561,'I')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(842,'C')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(51,'M')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(495,'F')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(824,'R')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(790,'R')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(785,'B')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(641,'H')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(619,'J')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(284,'T')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(225,'Y')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(59,'G')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(464,'X')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(851,'K')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(668,'Z')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(969,'H')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(356,'N')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(702,'D')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(815,'H')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(397,'V')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(749,'K')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(981,'H')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(185,'W')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<tree.get(641) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 36 <<  " " <<(tree.pop(51)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.get(561) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(851)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(226,'F')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(718)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(802,'F')==false) << std::endl;
std::cout<<"Line no " << 43 <<  " " <<(tree.update(145,'W')==false) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(824)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 45 << " "; print_char_vector(tree.subMap(225,790));std::cout << std::endl;
std::cout<<"Line no " << 46 <<  " " <<(tree.update(263,'R')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(284)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(702)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(667)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.ceilingEntry(111) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(588,'Q')==true) << std::endl;
std::cout<<"Line no " << 56 <<  " " <<(tree.update(1,'J')==true) << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<tree.get(111) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(102,'S')==true) << std::endl;
std::cout<<"Line no " << 59 <<  " " <<(tree.update(715,'C')==false) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.floorEntry(561) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 63 <<  " " <<(tree.update(939,'C')==true) << std::endl;
try{std::cout<<"Line no " << 64 <<  " " <<tree.floorEntry(663) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(969)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(749)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(815)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 69 <<  " " <<(tree.update(444,'B')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(588)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 72 <<  " " <<(tree.update(679,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(185)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(896,'A')==true) << std::endl;
try{std::cout<<"Line no " << 75 <<  " " <<(tree.pop(878)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(356)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<tree.get(397) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 << " "; print_char_vector(tree.subMap(226,663));std::cout << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<tree.get(679) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(111)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 83 <<  " " <<(tree.update(878,'K')==true) << std::endl;
try{std::cout<<"Line no " << 84 <<  " " <<tree.get(896) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(258,'Y')==true) << std::endl;
std::cout<<"Line no " << 87 <<  " " <<(tree.update(181,'H')==false) << std::endl;
std::cout<<"Line no " << 88 << " "; print_char_vector(tree.subMap(679,896));std::cout << std::endl;
std::cout<<"Line no " << 89 <<  " " <<(tree.update(789,'T')==true) << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<tree.get(226) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 << " "; print_char_vector(tree.subMap(226,785));std::cout << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.floorEntry(641) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 93 <<  " " <<(tree.update(840,'K')==true) << std::endl;
try{std::cout<<"Line no " << 94 <<  " " <<(tree.pop(663)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(258)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 96 <<  " " <<tree.get(464) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 97 <<  " " <<(tree.pop(679)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(757,'X')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.get(785) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(444)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.ceilingEntry(878) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.get(464) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(919,'A')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 110 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 <<  " " <<(tree.update(222,'D')==true) << std::endl;
try{std::cout<<"Line no " << 112 <<  " " <<tree.get(495) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.ceilingEntry(397) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<(tree.pop(464)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 117 <<  " " <<(tree.update(505,'Z')==true) << std::endl;
std::cout<<"Line no " << 118 <<  " " <<(tree.update(513,'K')==true) << std::endl;
try{std::cout<<"Line no " << 119 <<  " " <<(tree.pop(619)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<tree.get(789) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<(tree.pop(460)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 122 <<  " " <<(tree.update(5,'P')==true) << std::endl;
try{std::cout<<"Line no " << 123 <<  " " <<(tree.pop(878)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(840)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.floorEntry(785) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.ceilingEntry(790) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<tree.ceilingEntry(757) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 129 <<  " " <<(tree.update(172,'T')==false) << std::endl;
std::cout<<"Line no " << 130 <<  " " <<(tree.update(73,'H')==true) << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(561)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(513)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
