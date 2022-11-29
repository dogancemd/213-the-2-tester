#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(631,'A')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(685,'D')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(301,'Y')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(37,'A')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(60,'T')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(164,'P')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(296,'F')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(474,'G')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(455,'S')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(536,'F')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(658,'G')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(670,'Q')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(818,'M')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(311,'I')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(988,'U')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(499,'H')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(36,'R')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(531,'Z')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(84,'K')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(655,'Q')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(753,'Q')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(651,'P')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(847,'H')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(300,'Y')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(892,'D')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(924,'I')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(559,'C')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(953,'Y')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(797,'L')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<(tree.pop(658)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 35 <<  " " <<(tree.update(607,'B')==true) << std::endl;
try{std::cout<<"Line no " << 36 <<  " " <<tree.get(847) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 39 << " "; print_char_vector(tree.subMap(60,818));std::cout << std::endl;
try{std::cout<<"Line no " << 40 <<  " " <<(tree.pop(988)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 41 <<  " " <<tree.ceilingEntry(607) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 42 <<  " " <<tree.get(84) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 43 <<  " " <<(tree.update(145,'U')==true) << std::endl;
try{std::cout<<"Line no " << 44 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(797)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(602,'J')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<(tree.pop(924)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<tree.ceilingEntry(300) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 49 <<  " " <<(tree.update(866,'I')==true) << std::endl;
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(296)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(531)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 52 << " "; print_char_vector(tree.subMap(499,866));std::cout << std::endl;
try{std::cout<<"Line no " << 53 <<  " " <<(tree.pop(311)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.floorEntry(818) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<(tree.pop(847)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(602)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 57 <<  " " <<(tree.update(56,'A')==false) << std::endl;
try{std::cout<<"Line no " << 58 <<  " " <<(tree.pop(301)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 59 <<  " " <<(tree.pop(892)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 60 << " "; print_char_vector(tree.subMap(60,651));std::cout << std::endl;
try{std::cout<<"Line no " << 61 <<  " " <<(tree.pop(300)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.floorEntry(655) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 64 <<  " " <<(tree.update(841,'A')==true) << std::endl;
try{std::cout<<"Line no " << 65 <<  " " <<(tree.pop(474)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 66 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 67 << " "; print_char_vector(tree.subMap(499,651));std::cout << std::endl;
try{std::cout<<"Line no " << 68 <<  " " <<(tree.pop(866)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 69 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 70 <<  " " <<(tree.pop(559)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 71 <<  " " <<(tree.update(955,'K')==true) << std::endl;
std::cout<<"Line no " << 72 <<  " " <<(tree.update(857,'U')==true) << std::endl;
std::cout<<"Line no " << 73 << " "; print_char_vector(tree.subMap(455,955));std::cout << std::endl;
std::cout<<"Line no " << 74 << " "; print_char_vector(tree.subMap(536,536));std::cout << std::endl;
std::cout<<"Line no " << 75 << " "; print_char_vector(tree.subMap(455,857));std::cout << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<tree.floorEntry(818) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 77 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(685)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 80 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 << " "; print_char_vector(tree.subMap(84,841));std::cout << std::endl;
std::cout<<"Line no " << 82 <<  " " <<(tree.update(169,'O')==true) << std::endl;
try{std::cout<<"Line no " << 83 <<  " " <<tree.ceilingEntry(651) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 84 <<  " " <<(tree.update(915,'C')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 << " "; print_char_vector(tree.subMap(536,655));std::cout << std::endl;
try{std::cout<<"Line no " << 87 <<  " " <<(tree.pop(169)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 88 <<  " " <<(tree.pop(753)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<tree.ceilingEntry(670) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(296,'C')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.ceilingEntry(670) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(857)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(350,'D')==true) << std::endl;
std::cout<<"Line no " << 95 <<  " " <<(tree.update(656,'H')==true) << std::endl;
std::cout<<"Line no " << 96 <<  " " <<(tree.update(542,'S')==true) << std::endl;
try{std::cout<<"Line no " << 97 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 98 <<  " " <<tree.ceilingEntry(955) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 99 <<  " " <<(tree.update(76,'N')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 101 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 102 <<  " " <<(tree.pop(836)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 103 <<  " " <<tree.get(651) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 104 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<(tree.pop(499)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 106 <<  " " <<(tree.update(307,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 107 <<  " " <<(tree.pop(350)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 108 <<  " " <<(tree.update(245,'B')==true) << std::endl;
std::cout<<"Line no " << 109 <<  " " <<(tree.update(897,'D')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.ceilingEntry(296) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 <<  " " <<(tree.update(13,'M')==true) << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<(tree.pop(13)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 114 <<  " " <<(tree.update(146,'S')==true) << std::endl;
std::cout<<"Line no " << 115 <<  " " <<(tree.update(825,'Q')==true) << std::endl;
std::cout<<"Line no " << 116 <<  " " <<(tree.update(533,'B')==true) << std::endl;
try{std::cout<<"Line no " << 117 <<  " " <<(tree.pop(825)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 118 <<  " " <<(tree.pop(533)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 120 <<  " " <<(tree.pop(670)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 121 <<  " " <<(tree.update(670,'E')==true) << std::endl;
try{std::cout<<"Line no " << 122 <<  " " <<tree.get(542) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 123 <<  " " <<(tree.update(960,'M')==true) << std::endl;
std::cout<<"Line no " << 124 <<  " " <<(tree.update(216,'W')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.floorEntry(307) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(130,'R')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(10,'O')==true) << std::endl;
std::cout<<"Line no " << 128 <<  " " <<(tree.update(281,'I')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 130 << " "; print_char_vector(tree.subMap(651,841));std::cout << std::endl;
std::cout<<"Line no " << 131 << " "; print_char_vector(tree.subMap(631,915));std::cout << std::endl;
try{std::cout<<"Line no " << 132 <<  " " <<(tree.pop(296)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 133 <<  " " <<tree.floorEntry(631) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
