#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(338,'Z')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(249,'V')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(334,'U')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(784,'T')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(417,'N')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(739,'P')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(515,'I')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(954,'P')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(264,'W')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(731,'V')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(45,'T')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(377,'V')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(266,'L')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(445,'M')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(882,'V')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(566,'L')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(783,'N')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(577,'E')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(757,'C')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(890,'T')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(37,'C')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(136,'S')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(162,'H')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(350,'F')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(442,'U')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(61,'J')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(505,'F')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(710,'W')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(748,'A')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(268,'Z')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(208,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<tree.get(208) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.floorEntry(442) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 <<  " " <<(tree.update(673,'T')==true) << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<tree.floorEntry(61) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 41 <<  " " <<(tree.update(130,'I')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(673)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 << " "; print_char_vector(tree.subMap(61,882));std::cout << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(334)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.floorEntry(954) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(739) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.get(264) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.floorEntry(890) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<tree.ceilingEntry(37) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 << " "; print_char_vector(tree.subMap(249,890));std::cout << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(577)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(61)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(417)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 56 << " "; print_char_vector(tree.subMap(264,268));std::cout << std::endl;
try{std::cout<<"Line no " << 57 <<  " " <<tree.floorEntry(748) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(995,'F')==true) << std::endl;
try{std::cout<<"Line no " << 59 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<(tree.pop(748)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(710)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(833,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 63 <<  " " <<tree.get(37) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(355)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(757)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(769,'X')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(783)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(377)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(924)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(338)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<(tree.pop(784)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 74 <<  " " <<(tree.pop(882)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(45,162));std::cout << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.ceilingEntry(136) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(786,'P')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(515)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<(tree.pop(739)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.ceilingEntry(130) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(954)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(259,'P')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(350)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(786)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(249)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 88 <<  " " <<(tree.update(199,'O')==true) << std::endl;
std::cout<<"Line no " << 89 << " "; print_char_vector(tree.subMap(130,259));std::cout << std::endl;
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(986)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 91 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(731)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(130)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 << " "; print_char_vector(tree.subMap(264,769));std::cout << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<(tree.pop(393)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(278,'G')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.floorEntry(259) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 << " "; print_char_vector(tree.subMap(445,995));std::cout << std::endl;
std::cout<<"Line no " << 99 <<  " " <<(tree.update(192,'K')==false) << std::endl;
try{std::cout<<"Line no " << 100 <<  " " <<tree.get(199) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(162)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.ceilingEntry(208) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 104 << " "; print_char_vector(tree.subMap(445,445));std::cout << std::endl;
std::cout<<"Line no " << 105 <<  " " <<(tree.update(122,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 106 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(136)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 << " "; print_char_vector(tree.subMap(505,833));std::cout << std::endl;
std::cout<<"Line no " << 109 <<  " " <<(tree.update(808,'J')==true) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<(tree.pop(264)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.get(808) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 <<  " " <<(tree.update(542,'S')==true) << std::endl;
std::cout<<"Line no " << 113 << " "; print_char_vector(tree.subMap(442,995));std::cout << std::endl;
std::cout<<"Line no " << 114 <<  " " <<(tree.update(195,'J')==false) << std::endl;
try{std::cout<<"Line no " << 115 <<  " " <<tree.ceilingEntry(833) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.floorEntry(769) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.floorEntry(278) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(12,'T')==true) << std::endl;
std::cout<<"Line no " << 119 <<  " " <<(tree.update(652,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(208)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<tree.get(995) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(36,'D')==true) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 125 <<  " " <<(tree.update(888,'H')==true) << std::endl;
try{std::cout<<"Line no " << 126 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 127 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(652)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 <<  " " <<(tree.update(857,'T')==true) << std::endl;
std::cout<<"Line no " << 131 <<  " " <<(tree.update(37,'I')==true) << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(442)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
