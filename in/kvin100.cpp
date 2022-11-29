#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(589,'N')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(795,'Q')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(607,'D')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(903,'J')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(847,'N')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(945,'F')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(817,'Y')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(643,'S')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(974,'U')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(541,'P')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(84,'G')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(330,'E')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(429,'E')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(8,'B')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(689,'J')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(678,'M')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(890,'H')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(120,'R')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(875,'O')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(88,'V')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(596,'Y')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(663,'V')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(347,'J')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(36,'G')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(168,'H')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(706,'F')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(178,'V')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(681,'L')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(359,'L')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(172,'F')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(230,'U')==true) << std::endl;
std::cout<<"Line no " << 36 <<  " " <<(tree.update(517,'O')==true) << std::endl;
std::cout<<"Line no " << 37 <<  " " <<(tree.update(652,'K')==true) << std::endl;
std::cout<<"Line no " << 38 <<  " " <<(tree.update(435,'X')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(100,'S')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<(tree.pop(347)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(615,'E')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<tree.ceilingEntry(678) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(706)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.ceilingEntry(643) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 <<  " " <<(tree.update(522,'P')==true) << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(359)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(178)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(912,'O')==true) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(88)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.get(795) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(208,'M')==true) << std::endl;
std::cout<<"Line no " << 59 <<  " " <<(tree.update(941,'Z')==true) << std::endl;
try{std::cout<<"Line no " << 60 <<  " " <<tree.floorEntry(795) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 62 <<  " " <<(tree.update(748,'N')==true) << std::endl;
std::cout<<"Line no " << 63 <<  " " <<(tree.update(60,'V')==true) << std::endl;
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(607)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 65 <<  " " <<tree.ceilingEntry(120) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<(tree.pop(230)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 <<  " " <<(tree.update(23,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(168)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<(tree.pop(678)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 70 <<  " " <<(tree.update(45,'E')==true) << std::endl;
try{std::cout<<"Line no " << 71 <<  " " <<(tree.pop(945)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 73 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 74 <<  " " <<(tree.update(461,'X')==true) << std::endl;
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(8,172));std::cout << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(689)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(287,'C')==true) << std::endl;
std::cout<<"Line no " << 78 <<  " " <<(tree.update(730,'N')==true) << std::endl;
std::cout<<"Line no " << 79 <<  " " <<(tree.update(655,'C')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(817)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(733,'V')==true) << std::endl;
std::cout<<"Line no " << 82 <<  " " <<(tree.update(560,'N')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(461)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(517)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 85 <<  " " <<(tree.pop(733)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(428)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(533,'S')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.floorEntry(890) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 89 <<  " " <<(tree.update(432,'Q')==true) << std::endl;
std::cout<<"Line no " << 90 <<  " " <<(tree.update(171,'G')==true) << std::endl;
try{std::cout<<"Line no " << 91 <<  " " <<(tree.pop(933)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<(tree.pop(172)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 94 <<  " " <<tree.ceilingEntry(330) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 95 <<  " " <<tree.ceilingEntry(875) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 << " "; print_char_vector(tree.subMap(208,655));std::cout << std::endl;
std::cout<<"Line no " << 97 <<  " " <<(tree.update(683,'F')==true) << std::endl;
try{std::cout<<"Line no " << 98 <<  " " <<(tree.pop(100)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(524)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<(tree.pop(147)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 101 <<  " " <<(tree.update(725,'I')==true) << std::endl;
std::cout<<"Line no " << 102 <<  " " <<(tree.update(933,'T')==false) << std::endl;
std::cout<<"Line no " << 103 <<  " " <<(tree.update(476,'E')==true) << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(533)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(941)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.get(903) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(730)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 109 <<  " " <<tree.floorEntry(725) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 110 <<  " " <<(tree.update(946,'U')==true) << std::endl;
try{std::cout<<"Line no " << 111 <<  " " <<(tree.pop(903)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 <<  " " <<(tree.update(646,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(60)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.ceilingEntry(208) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 116 <<  " " <<tree.floorEntry(663) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 117 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(875)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(847)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(918,'U')==true) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<tree.get(725) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 << " "; print_char_vector(tree.subMap(429,589));std::cout << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(734,'M')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<tree.ceilingEntry(330) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 <<  " " <<(tree.update(851,'T')==true) << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<(tree.pop(918)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 129 <<  " " <<(tree.pop(655)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(950,'K')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<(tree.pop(84)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 134 <<  " " <<(tree.update(816,'T')==false) << std::endl;
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
