#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(275,'Q')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(437,'E')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(734,'L')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(118,'P')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(171,'I')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(75,'R')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(543,'J')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(888,'M')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(526,'C')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(929,'I')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(909,'J')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(290,'N')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(88,'R')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(810,'R')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(625,'V')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(622,'Z')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(896,'P')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(79,'A')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(840,'L')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(967,'W')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(951,'K')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(952,'A')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(295,'W')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(345,'T')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(760,'Z')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(448,'M')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(452,'H')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(934,'Q')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(134,'G')==true) << std::endl;
std::cout<<"Line no " << 34 <<  " " <<(tree.update(842,'C')==true) << std::endl;
std::cout<<"Line no " << 35 <<  " " <<(tree.update(475,'Q')==true) << std::endl;
std::cout<<"Line no " << 36 << " "; print_char_vector(tree.subMap(452,896));std::cout << std::endl;
std::cout<<"Line no " << 37 <<  " " <<(tree.update(52,'G')==true) << std::endl;
std::cout<<"Line no " << 38 <<  " " <<(tree.update(54,'W')==true) << std::endl;
try{std::cout<<"Line no " << 39 <<  " " <<tree.ceilingEntry(290) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(429,'A')==true) << std::endl;
std::cout<<"Line no " << 41 <<  " " <<(tree.update(156,'O')==true) << std::endl;
try{std::cout<<"Line no " << 42 <<  " " <<(tree.pop(448)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 43 <<  " " <<(tree.pop(929)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<tree.get(543) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 46 <<  " " <<tree.floorEntry(290) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 47 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 48 << " "; print_char_vector(tree.subMap(543,810));std::cout << std::endl;
try{std::cout<<"Line no " << 49 <<  " " <<(tree.pop(275)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(75)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(295)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 53 <<  " " <<(tree.update(30,'R')==true) << std::endl;
try{std::cout<<"Line no " << 54 <<  " " <<(tree.pop(171)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 55 <<  " " <<(tree.update(767,'F')==true) << std::endl;
try{std::cout<<"Line no " << 56 <<  " " <<tree.floorEntry(842) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<tree.floorEntry(810) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 <<  " " <<(tree.update(925,'S')==true) << std::endl;
std::cout<<"Line no " << 61 <<  " " <<(tree.update(516,'C')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(581,'M')==false) << std::endl;
try{std::cout<<"Line no " << 66 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<tree.get(526) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(127,'A')==true) << std::endl;
try{std::cout<<"Line no " << 69 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 71 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<(tree.pop(266)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(666,'B')==true) << std::endl;
try{std::cout<<"Line no " << 74 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 75 <<  " " <<(tree.update(104,'A')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(88)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.get(118) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<tree.ceilingEntry(475) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 79 <<  " " <<tree.get(952) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 80 <<  " " <<(tree.update(495,'W')==true) << std::endl;
try{std::cout<<"Line no " << 81 <<  " " <<(tree.pop(606)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 82 <<  " " <<(tree.update(681,'C')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.floorEntry(290) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 85 <<  " " <<(tree.update(913,'P')==true) << std::endl;
try{std::cout<<"Line no " << 86 <<  " " <<(tree.pop(952)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 87 <<  " " <<(tree.update(457,'Y')==true) << std::endl;
std::cout<<"Line no " << 88 <<  " " <<(tree.update(22,'N')==true) << std::endl;
std::cout<<"Line no " << 89 << " "; print_char_vector(tree.subMap(767,896));std::cout << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 92 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(622)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(746,'F')==false) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(499,'M')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.get(429) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 98 <<  " " <<(tree.update(198,'R')==true) << std::endl;
try{std::cout<<"Line no " << 99 <<  " " <<(tree.pop(198)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 100 <<  " " <<tree.get(526) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(840)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<tree.ceilingEntry(888) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(181,'E')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(913)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 106 <<  " " <<tree.ceilingEntry(127) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 <<  " " <<(tree.update(862,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 108 <<  " " <<(tree.pop(760)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 109 <<  " " <<(tree.update(690,'A')==true) << std::endl;
try{std::cout<<"Line no " << 110 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 111 << " "; print_char_vector(tree.subMap(345,429));std::cout << std::endl;
std::cout<<"Line no " << 112 <<  " " <<(tree.update(870,'G')==true) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(499)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<tree.ceilingEntry(870) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 115 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 116 <<  " " <<(tree.update(221,'X')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<tree.floorEntry(681) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 118 <<  " " <<(tree.update(825,'W')==true) << std::endl;
std::cout<<"Line no " << 119 <<  " " <<(tree.update(27,'I')==false) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(681)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(357,'Y')==false) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(566,'O')==false) << std::endl;
try{std::cout<<"Line no " << 124 <<  " " <<(tree.pop(862)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 125 <<  " " <<tree.ceilingEntry(104) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 126 <<  " " <<(tree.pop(104)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 127 << " "; print_char_vector(tree.subMap(437,909));std::cout << std::endl;
try{std::cout<<"Line no " << 128 <<  " " <<tree.floorEntry(810) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 << " "; print_char_vector(tree.subMap(734,842));std::cout << std::endl;
try{std::cout<<"Line no " << 131 <<  " " <<(tree.pop(495)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(526)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 133 <<  " " <<(tree.update(171,'Q')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 136 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
