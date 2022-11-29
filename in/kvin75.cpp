#include <iostream>
#include "../your_code/TreeMap.cpp"
int main() {
TreeMap<int, char> tree;
std::cout<<"Line no " << 5 <<  " " <<(tree.update(613,'X')==true) << std::endl;
std::cout<<"Line no " << 6 <<  " " <<(tree.update(658,'J')==true) << std::endl;
std::cout<<"Line no " << 7 <<  " " <<(tree.update(961,'L')==true) << std::endl;
std::cout<<"Line no " << 8 <<  " " <<(tree.update(109,'L')==true) << std::endl;
std::cout<<"Line no " << 9 <<  " " <<(tree.update(563,'D')==true) << std::endl;
std::cout<<"Line no " << 10 <<  " " <<(tree.update(128,'F')==true) << std::endl;
std::cout<<"Line no " << 11 <<  " " <<(tree.update(384,'O')==true) << std::endl;
std::cout<<"Line no " << 12 <<  " " <<(tree.update(346,'C')==true) << std::endl;
std::cout<<"Line no " << 13 <<  " " <<(tree.update(561,'A')==true) << std::endl;
std::cout<<"Line no " << 14 <<  " " <<(tree.update(843,'N')==true) << std::endl;
std::cout<<"Line no " << 15 <<  " " <<(tree.update(887,'Z')==true) << std::endl;
std::cout<<"Line no " << 16 <<  " " <<(tree.update(638,'R')==true) << std::endl;
std::cout<<"Line no " << 17 <<  " " <<(tree.update(363,'Q')==true) << std::endl;
std::cout<<"Line no " << 18 <<  " " <<(tree.update(272,'L')==true) << std::endl;
std::cout<<"Line no " << 19 <<  " " <<(tree.update(642,'H')==true) << std::endl;
std::cout<<"Line no " << 20 <<  " " <<(tree.update(208,'N')==true) << std::endl;
std::cout<<"Line no " << 21 <<  " " <<(tree.update(620,'Y')==true) << std::endl;
std::cout<<"Line no " << 22 <<  " " <<(tree.update(60,'L')==true) << std::endl;
std::cout<<"Line no " << 23 <<  " " <<(tree.update(53,'N')==true) << std::endl;
std::cout<<"Line no " << 24 <<  " " <<(tree.update(723,'L')==true) << std::endl;
std::cout<<"Line no " << 25 <<  " " <<(tree.update(133,'B')==true) << std::endl;
std::cout<<"Line no " << 26 <<  " " <<(tree.update(32,'O')==true) << std::endl;
std::cout<<"Line no " << 27 <<  " " <<(tree.update(912,'X')==true) << std::endl;
std::cout<<"Line no " << 28 <<  " " <<(tree.update(579,'P')==true) << std::endl;
std::cout<<"Line no " << 29 <<  " " <<(tree.update(41,'P')==true) << std::endl;
std::cout<<"Line no " << 30 <<  " " <<(tree.update(902,'U')==true) << std::endl;
std::cout<<"Line no " << 31 <<  " " <<(tree.update(693,'S')==true) << std::endl;
std::cout<<"Line no " << 32 <<  " " <<(tree.update(464,'N')==true) << std::endl;
std::cout<<"Line no " << 33 <<  " " <<(tree.update(556,'L')==true) << std::endl;
try{std::cout<<"Line no " << 34 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 35 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 37 <<  " " <<(tree.pop(563)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 38 <<  " " <<tree.get(109) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 39 <<  " " <<(tree.pop(693)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 40 <<  " " <<(tree.update(844,'N')==true) << std::endl;
try{std::cout<<"Line no " << 41 <<  " " <<tree.ceilingEntry(53) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 42 <<  " " <<(tree.update(637,'O')==true) << std::endl;
try{std::cout<<"Line no " << 43 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 44 <<  " " <<(tree.pop(637)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 45 <<  " " <<(tree.pop(133)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 46 <<  " " <<(tree.update(396,'U')==true) << std::endl;
try{std::cout<<"Line no " << 47 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 48 <<  " " <<(tree.pop(620)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 49 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 50 <<  " " <<(tree.pop(109)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 51 <<  " " <<(tree.pop(478)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 52 <<  " " <<(tree.pop(843)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 53 <<  " " <<tree.floorEntry(346) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 54 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 55 <<  " " <<tree.floorEntry(208) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 56 <<  " " <<(tree.pop(902)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 57 <<  " " <<(tree.pop(41)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 58 <<  " " <<(tree.update(101,'A')==true) << std::endl;
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 60 <<  " " <<tree.get(844) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 61 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 62 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 63 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 64 <<  " " <<(tree.pop(346)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 65 <<  " " <<(tree.update(907,'D')==true) << std::endl;
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 67 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 68 <<  " " <<(tree.update(564,'V')==true) << std::endl;
std::cout<<"Line no " << 69 <<  " " <<(tree.update(209,'L')==true) << std::endl;
std::cout<<"Line no " << 70 <<  " " <<(tree.update(622,'E')==true) << std::endl;
try{std::cout<<"Line no " << 71 <<  " " <<tree.ceilingEntry(396) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 72 <<  " " <<tree.ceilingEntry(622) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 73 <<  " " <<(tree.update(809,'F')==true) << std::endl;
std::cout<<"Line no " << 74 <<  " " <<(tree.update(660,'B')==true) << std::endl;
std::cout<<"Line no " << 75 <<  " " <<(tree.update(70,'K')==true) << std::endl;
try{std::cout<<"Line no " << 76 <<  " " <<(tree.pop(579)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 77 <<  " " <<(tree.update(517,'K')==true) << std::endl;
try{std::cout<<"Line no " << 78 <<  " " <<(tree.pop(638)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 79 <<  " " <<(tree.update(318,'E')==true) << std::endl;
try{std::cout<<"Line no " << 80 <<  " " <<(tree.pop(642)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 81 <<  " " <<(tree.update(433,'D')==true) << std::endl;
try{std::cout<<"Line no " << 82 <<  " " <<(tree.pop(180)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 83 <<  " " <<(tree.pop(723)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 84 <<  " " <<(tree.pop(128)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 86 <<  " " <<(tree.update(732,'U')==true) << std::endl;
std::cout<<"Line no " << 87 <<  " " <<(tree.update(725,'G')==true) << std::endl;
try{std::cout<<"Line no " << 88 <<  " " <<tree.get(70) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 89 <<  " " <<(tree.pop(907)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 90 <<  " " <<(tree.pop(561)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 91 <<  " " <<(tree.update(663,'A')==true) << std::endl;
try{std::cout<<"Line no " << 92 <<  " " <<tree.get(564) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 93 <<  " " <<(tree.pop(504)==false) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 94 <<  " " <<(tree.update(413,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 95 <<  " " <<tree.ceilingEntry(660) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 96 <<  " " <<(tree.update(128,'N')==true) << std::endl;
std::cout<<"Line no " << 97 << " "; print_char_vector(tree.subMap(613,844));std::cout << std::endl;
std::cout<<"Line no " << 98 <<  " " <<(tree.update(901,'W')==true) << std::endl;
std::cout<<"Line no " << 99 <<  " " <<(tree.update(276,'C')==true) << std::endl;
std::cout<<"Line no " << 100 <<  " " <<(tree.update(440,'S')==true) << std::endl;
try{std::cout<<"Line no " << 101 <<  " " <<(tree.pop(276)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 103 <<  " " <<(tree.update(470,'R')==true) << std::endl;
try{std::cout<<"Line no " << 104 <<  " " <<(tree.pop(384)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 105 <<  " " <<tree.get(101) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 107 <<  " " <<(tree.update(578,'R')==true) << std::endl;
std::cout<<"Line no " << 108 <<  " " <<(tree.update(8,'F')==true) << std::endl;
try{std::cout<<"Line no " << 109 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 111 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 112 << " "; print_char_vector(tree.subMap(440,556));std::cout << std::endl;
try{std::cout<<"Line no " << 113 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 114 <<  " " <<(tree.pop(413)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 115 <<  " " <<(tree.update(625,'Y')==true) << std::endl;
std::cout<<"Line no " << 116 <<  " " <<(tree.update(598,'B')==true) << std::endl;
std::cout<<"Line no " << 117 <<  " " <<(tree.update(795,'W')==true) << std::endl;
try{std::cout<<"Line no " << 118 <<  " " <<tree.ceilingEntry(433) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 119 <<  " " <<(tree.update(161,'F')==true) << std::endl;
try{std::cout<<"Line no " << 120 <<  " " <<tree.floorEntry(663) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 121 <<  " " <<tree.ceilingEntry(613) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 122 <<  " " <<(tree.pop(598)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 123 <<  " " <<tree.floorEntry(613) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 124 <<  " " <<(tree.update(506,'T')==true) << std::endl;
try{std::cout<<"Line no " << 125 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 126 <<  " " <<(tree.update(435,'Z')==true) << std::endl;
std::cout<<"Line no " << 127 <<  " " <<(tree.update(245,'H')==true) << std::endl;
std::cout<<"Line no " << 128 <<  " " <<(tree.update(812,'N')==true) << std::endl;
try{std::cout<<"Line no " << 129 <<  " " <<tree.get(435) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 130 <<  " " <<(tree.pop(440)==true) << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
std::cout<<"Line no " << 131 <<  " " <<(tree.update(403,'F')==false) << std::endl;
std::cout<<"Line no " << 132 <<  " " <<(tree.update(432,'A')==false) << std::endl;
std::cout<<"Line no " << 133 <<  " " <<(tree.update(168,'Y')==true) << std::endl;
try{std::cout<<"Line no " << 134 <<  " " <<tree.firstEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{std::cout<<"Line no " << 135 <<  " " <<tree.lastEntry() << std::endl;}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollFirstEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
try{tree.pollLastEntry();}catch(NoSuchItemException a){ std::cout << "No such item" << std::endl ;}
return 0;
}
