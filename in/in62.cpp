#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
*a=*a;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*a);
*b=*b;
ScapegoatTree<int> *d=new ScapegoatTree<int>(*a);
ScapegoatTree<int> *e=new ScapegoatTree<int>(*c);
std::cout << (a->remove(298)) << std::endl;
std::cout << (e->remove(79)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << (e->remove(500)) << std::endl;
*b=*b;
*e=*b;
*a=*d;
std::cout << (c->remove(14)) << std::endl;
std::cout << (b->remove(321)) << std::endl;
std::cout << (d->remove(385)) << std::endl;
std::cout << (a->remove(171)) << std::endl;
c->printPretty();
std::cout << (c->remove(449)) << std::endl;
*c=*a;
*d=*d;
std::cout << (e->insert(214)) << std::endl;
std::cout << (d->insert(433)) << std::endl;
std::cout << (c->remove(154)) << std::endl;
b->printPretty();
e->printPretty();
*b=*b;
std::cout << (e->insert(214)) << std::endl;
std::cout << (a->remove(294)) << std::endl;
std::cout << (a->insert(393)) << std::endl;
std::cout << (a->remove(393)) << std::endl;
std::cout << (a->remove(488)) << std::endl;
std::cout << (d->remove(362)) << std::endl;
std::cout << (d->insert(433)) << std::endl;
a->printPretty();
std::cout << (c->insert(163)) << std::endl;
std::cout << (e->remove(214)) << std::endl;
std::cout << (d->remove(48)) << std::endl;
std::cout << (b->remove(311)) << std::endl;
*d=*b;
std::cout << (c->remove(163)) << std::endl;
std::cout << (d->insert(135)) << std::endl;
c->printPretty();
std::cout << (a->remove(314)) << std::endl;
c->printPretty();
std::cout << (d->remove(22)) << std::endl;
*a=*d;
std::cout << (c->insert(475)) << std::endl;
std::cout << (a->insert(470)) << std::endl;
std::cout << (a->insert(135)) << std::endl;
std::cout << (c->insert(475)) << std::endl;
*a=*e;
std::cout << (c->insert(28)) << std::endl;
std::cout << (c->insert(28)) << std::endl;
std::cout << (d->remove(135)) << std::endl;
std::cout << (a->remove(351)) << std::endl;
*e=*b;
b->printPretty();
*e=*a;
std::cout << (d->insert(76)) << std::endl;
std::cout << (d->insert(259)) << std::endl;
std::cout << (b->insert(3)) << std::endl;
d->printPretty();
c->printPretty();
std::cout << (b->remove(289)) << std::endl;
std::cout << (a->insert(167)) << std::endl;
std::cout << (c->remove(28)) << std::endl;
b->printPretty();
b->printPretty();
*e=*d;
std::cout << (a->insert(472)) << std::endl;
std::cout << (a->remove(167)) << std::endl;
std::cout << (c->remove(422)) << std::endl;
*b=*b;
a->printPretty();
std::cout << (c->insert(475)) << std::endl;
b->printPretty();
d->printPretty();
std::cout << (d->remove(259)) << std::endl;
std::cout << (d->remove(77)) << std::endl;
c->printPretty();
*d=*e;
*a=*c;
std::cout << (d->insert(76)) << std::endl;
std::cout << (b->remove(148)) << std::endl;
*e=*e;
*e=*b;
a->printPretty();
std::cout << (c->insert(475)) << std::endl;
std::cout << (a->remove(475)) << std::endl;
*a=*e;
*a=*c;
std::cout << (e->remove(3)) << std::endl;
std::cout << (c->insert(143)) << std::endl;
std::cout << (e->insert(465)) << std::endl;
std::cout << (a->remove(360)) << std::endl;
*d=*d;
std::cout << (b->remove(3)) << std::endl;
*b=*c;
std::cout << (e->insert(465)) << std::endl;
std::cout << (c->insert(475)) << std::endl;
std::cout << (c->insert(143)) << std::endl;
std::cout << (a->insert(475)) << std::endl;
std::cout << (a->remove(1)) << std::endl;
std::cout << (c->remove(185)) << std::endl;
std::cout << (a->insert(475)) << std::endl;
a->printPretty();
*d=*d;
*b=*e;
std::cout << (b->remove(270)) << std::endl;
std::cout << (e->insert(465)) << std::endl;
a->printPretty();
std::cout << (a->insert(475)) << std::endl;
std::cout << (c->insert(472)) << std::endl;
std::cout << (e->remove(465)) << std::endl;
std::cout << (a->insert(475)) << std::endl;
std::cout << (c->insert(416)) << std::endl;
std::cout << (c->remove(143)) << std::endl;
std::cout << (c->insert(472)) << std::endl;
*b=*e;
std::cout << (c->remove(416)) << std::endl;
*b=*d;
std::cout << (d->remove(259)) << std::endl;
std::cout << (b->remove(259)) << std::endl;
std::cout << (d->remove(76)) << std::endl;
*d=*d;
std::cout << (b->insert(76)) << std::endl;
std::cout << (c->insert(472)) << std::endl;
std::cout << (b->insert(453)) << std::endl;
std::cout << (e->insert(214)) << std::endl;
*b=*d;
d->printPretty();
b->printPretty();
std::cout << (b->insert(179)) << std::endl;
std::cout << (c->remove(475)) << std::endl;
*c=*d;
std::cout << (e->insert(53)) << std::endl;
std::cout << (d->insert(129)) << std::endl;
b->printPretty();
std::cout << (a->insert(475)) << std::endl;
std::cout << (b->insert(150)) << std::endl;
*b=*d;
std::cout << (e->insert(15)) << std::endl;
std::cout << (e->insert(214)) << std::endl;
*a=*a;
std::cout << (e->insert(328)) << std::endl;
std::cout << (a->insert(475)) << std::endl;
std::cout << (e->remove(362)) << std::endl;
b->printPretty();
std::cout << (d->remove(129)) << std::endl;
std::cout << (a->insert(475)) << std::endl;
c->printPretty();
*d=*e;
std::cout << (b->remove(129)) << std::endl;
std::cout << (a->insert(321)) << std::endl;
std::cout << (c->insert(189)) << std::endl;
*a=*e;
std::cout << (d->insert(328)) << std::endl;
std::cout << (d->insert(214)) << std::endl;
d->printPretty();
std::cout << (a->remove(340)) << std::endl;
std::cout << (c->remove(145)) << std::endl;
std::cout << (e->remove(341)) << std::endl;
std::cout << (a->remove(34)) << std::endl;
std::cout << (a->insert(353)) << std::endl;
std::cout << (b->remove(449)) << std::endl;
std::cout << (b->insert(372)) << std::endl;
std::cout << (c->remove(323)) << std::endl;
std::cout << (e->insert(328)) << std::endl;
std::cout << (d->remove(235)) << std::endl;
std::cout << (d->insert(15)) << std::endl;
std::cout << (d->insert(53)) << std::endl;
std::cout << (c->insert(189)) << std::endl;
std::cout << (e->remove(328)) << std::endl;
std::cout << (b->remove(372)) << std::endl;
std::cout << (d->remove(53)) << std::endl;
std::cout << (e->insert(214)) << std::endl;
e->printPretty();
std::cout << (e->insert(53)) << std::endl;
*e=*a;
a->printPretty();
std::cout << (c->remove(61)) << std::endl;
std::cout << (e->insert(459)) << std::endl;
*a=*b;
std::cout << (d->insert(328)) << std::endl;
std::cout << (b->remove(397)) << std::endl;
*e=*c;
b->printPretty();
std::cout << (c->remove(189)) << std::endl;
std::cout << (d->remove(15)) << std::endl;
std::cout << (e->insert(22)) << std::endl;
std::cout << (e->remove(31)) << std::endl;
*d=*a;
std::cout << (c->insert(14)) << std::endl;
d->printPretty();
*d=*d;
std::cout << (a->remove(89)) << std::endl;
std::cout << (a->insert(416)) << std::endl;
std::cout << (e->remove(64)) << std::endl;
c->printPretty();
std::cout << (a->remove(213)) << std::endl;
*c=*e;
*d=*d;
std::cout << (e->insert(22)) << std::endl;
*c=*b;
d->printPretty();
std::cout << (a->insert(47)) << std::endl;
std::cout << (a->remove(47)) << std::endl;
*e=*c;
*a=*b;
a->printPretty();
std::cout << (d->insert(323)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << (b->insert(379)) << std::endl;
std::cout << (e->remove(456)) << std::endl;
std::cout << (d->insert(323)) << std::endl;
d->printPretty();
std::cout << (b->remove(379)) << std::endl;
std::cout << (e->remove(471)) << std::endl;
c->printPretty();
std::cout << (e->insert(350)) << std::endl;
a->printPretty();
*c=*e;
*c=*e;
*b=*a;
std::cout << (c->insert(241)) << std::endl;
std::cout << (c->remove(293)) << std::endl;
*a=*e;
std::cout << (e->insert(35)) << std::endl;
std::cout << (a->insert(350)) << std::endl;
a->printPretty();
std::cout << (a->remove(350)) << std::endl;
std::cout << (d->remove(323)) << std::endl;
std::cout << (b->remove(474)) << std::endl;
std::cout << (a->insert(256)) << std::endl;
std::cout << (c->remove(350)) << std::endl;
c->printPretty();
std::cout << (e->insert(350)) << std::endl;
std::cout << (c->insert(24)) << std::endl;
std::cout << (a->remove(220)) << std::endl;
std::cout << (c->remove(344)) << std::endl;
std::cout << (d->insert(47)) << std::endl;
std::cout << (b->remove(288)) << std::endl;
std::cout << (d->remove(280)) << std::endl;
std::cout << (d->remove(410)) << std::endl;
c->printPretty();
std::cout << (d->remove(47)) << std::endl;
std::cout << (d->insert(400)) << std::endl;
std::cout << (d->insert(400)) << std::endl;
std::cout << (c->remove(241)) << std::endl;
std::cout << (d->remove(400)) << std::endl;
std::cout << (b->insert(67)) << std::endl;
std::cout << (b->remove(1)) << std::endl;
std::cout << (e->insert(273)) << std::endl;
std::cout << (c->insert(24)) << std::endl;
std::cout << (d->remove(217)) << std::endl;
*c=*e;
std::cout << (a->remove(351)) << std::endl;
std::cout << (e->remove(195)) << std::endl;
std::cout << (b->insert(67)) << std::endl;
*a=*a;
std::cout << (e->insert(397)) << std::endl;
std::cout << (c->insert(273)) << std::endl;
std::cout << (b->insert(398)) << std::endl;
e->printPretty();
std::cout << (c->remove(273)) << std::endl;
d->printPretty();
d->printPretty();
b->printPretty();
std::cout << (d->insert(44)) << std::endl;
std::cout << (d->insert(494)) << std::endl;
std::cout << (b->insert(210)) << std::endl;
d->printPretty();
std::cout << (e->insert(290)) << std::endl;
std::cout << (d->insert(172)) << std::endl;
c->printPretty();
std::cout << (d->insert(44)) << std::endl;
std::cout << (c->insert(211)) << std::endl;
std::cout << (c->remove(468)) << std::endl;
*d=*c;
*d=*c;
*d=*b;
*c=*c;
std::cout << (d->insert(67)) << std::endl;
std::cout << (d->remove(207)) << std::endl;
std::cout << (a->insert(256)) << std::endl;
e->printPretty();
std::cout << (b->remove(398)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (e->insert(350)) << std::endl;
std::cout << (b->insert(93)) << std::endl;
std::cout << (d->insert(398)) << std::endl;
std::cout << (d->insert(398)) << std::endl;
std::cout << (e->insert(290)) << std::endl;
std::cout << (e->insert(273)) << std::endl;
std::cout << (d->remove(240)) << std::endl;
std::cout << (b->remove(67)) << std::endl;
std::cout << (d->insert(210)) << std::endl;
std::cout << (b->remove(93)) << std::endl;
std::cout << (e->remove(290)) << std::endl;
std::cout << (d->insert(67)) << std::endl;
e->printPretty();
std::cout << (c->remove(215)) << std::endl;
std::cout << (a->insert(256)) << std::endl;
std::cout << (e->insert(341)) << std::endl;
*b=*b;
std::cout << (e->insert(151)) << std::endl;
std::cout << (c->insert(211)) << std::endl;
std::cout << (c->remove(86)) << std::endl;
std::cout << (c->remove(380)) << std::endl;
std::cout << (d->remove(36)) << std::endl;
std::cout << (e->insert(323)) << std::endl;
*c=*b;
std::cout << (a->remove(256)) << std::endl;
e->printPretty();
a->printPretty();
*b=*b;
std::cout << (b->remove(210)) << std::endl;
b->printPretty();
std::cout << (e->remove(241)) << std::endl;
std::cout << (c->remove(210)) << std::endl;
c->printPretty();
c->printPretty();
*c=*b;
*a=*d;
std::cout << (b->insert(333)) << std::endl;
std::cout << (a->remove(437)) << std::endl;
std::cout << (a->insert(210)) << std::endl;
c->printPretty();
*e=*e;
std::cout << (a->remove(68)) << std::endl;
std::cout << (a->insert(398)) << std::endl;
std::cout << (a->insert(398)) << std::endl;
std::cout << (b->remove(266)) << std::endl;
std::cout << (e->remove(350)) << std::endl;
std::cout << (d->insert(38)) << std::endl;
std::cout << (a->remove(398)) << std::endl;
std::cout << (d->remove(398)) << std::endl;
e->printPretty();
std::cout << (c->remove(75)) << std::endl;
std::cout << (e->remove(323)) << std::endl;
e->printPretty();
std::cout << (e->insert(252)) << std::endl;
std::cout << (c->insert(402)) << std::endl;
*d=*a;
std::cout << (a->remove(210)) << std::endl;
std::cout << (d->remove(385)) << std::endl;
std::cout << (b->remove(333)) << std::endl;
*d=*b;
std::cout << (b->remove(31)) << std::endl;
*c=*b;
*e=*e;
std::cout << (e->remove(439)) << std::endl;
std::cout << (a->insert(208)) << std::endl;
e->printPretty();
std::cout << (e->remove(204)) << std::endl;
a->printPretty();
std::cout << (a->insert(208)) << std::endl;
std::cout << (e->insert(474)) << std::endl;
std::cout << (d->remove(221)) << std::endl;
std::cout << (b->remove(443)) << std::endl;
c->printPretty();
*c=*e;
std::cout << (e->remove(188)) << std::endl;
*e=*a;
std::cout << (a->remove(67)) << std::endl;
std::cout << (c->insert(397)) << std::endl;
*e=*e;
*a=*c;
std::cout << (e->remove(208)) << std::endl;
c->printPretty();
std::cout << (a->insert(280)) << std::endl;
std::cout << (c->insert(252)) << std::endl;
std::cout << (a->remove(474)) << std::endl;
std::cout << (e->insert(67)) << std::endl;
*e=*a;
b->printPretty();
e->printPretty();
std::cout << (a->insert(273)) << std::endl;
d->printPretty();
d->printPretty();
a->printPretty();
*d=*b;
std::cout << (e->insert(252)) << std::endl;
std::cout << (e->insert(262)) << std::endl;
d->printPretty();
std::cout << (a->remove(341)) << std::endl;
*d=*d;
*c=*d;
std::cout << (b->insert(198)) << std::endl;
*c=*e;
std::cout << (b->insert(370)) << std::endl;
std::cout << (e->insert(473)) << std::endl;
std::cout << (e->insert(209)) << std::endl;
std::cout << (d->insert(366)) << std::endl;
*c=*c;
std::cout << (e->remove(151)) << std::endl;
std::cout << (c->insert(62)) << std::endl;
std::cout << (b->insert(198)) << std::endl;
std::cout << (d->insert(366)) << std::endl;
d->printPretty();
c->printPretty();
c->printPretty();
*a=*b;
std::cout << (b->remove(193)) << std::endl;
std::cout << (a->remove(198)) << std::endl;
std::cout << (d->remove(366)) << std::endl;
std::cout << (d->insert(75)) << std::endl;
std::cout << (b->insert(2)) << std::endl;
std::cout << (a->insert(370)) << std::endl;
*c=*a;
std::cout << (b->remove(135)) << std::endl;
std::cout << (b->insert(198)) << std::endl;
std::cout << (d->remove(421)) << std::endl;
std::cout << (b->remove(115)) << std::endl;
*d=*d;
std::cout << (d->remove(496)) << std::endl;
b->printPretty();
a->printPretty();
*b=*b;
std::cout << (e->remove(209)) << std::endl;
std::cout << (c->insert(370)) << std::endl;
d->printPretty();
c->printPretty();
std::cout << (c->remove(296)) << std::endl;
std::cout << (b->remove(370)) << std::endl;
std::cout << (b->remove(337)) << std::endl;
std::cout << (d->remove(322)) << std::endl;
std::cout << (e->insert(341)) << std::endl;
std::cout << (c->insert(95)) << std::endl;
std::cout << (a->insert(370)) << std::endl;
std::cout << (b->remove(427)) << std::endl;
e->printPretty();
std::cout << (c->insert(370)) << std::endl;
std::cout << (b->insert(341)) << std::endl;
std::cout << (a->insert(370)) << std::endl;
std::cout << (c->remove(246)) << std::endl;
std::cout << (c->remove(370)) << std::endl;
std::cout << (a->remove(370)) << std::endl;
std::cout << (d->insert(79)) << std::endl;
*e=*e;
std::cout << (e->remove(432)) << std::endl;
b->printPretty();
std::cout << (b->insert(198)) << std::endl;
c->printPretty();
e->printPretty();
std::cout << (d->remove(264)) << std::endl;
std::cout << (b->remove(2)) << std::endl;
*c=*c;
std::cout << (c->remove(95)) << std::endl;
std::cout << (b->insert(277)) << std::endl;
c->printPretty();
*d=*a;
std::cout << (b->insert(198)) << std::endl;
std::cout << (a->insert(203)) << std::endl;
c->printPretty();
std::cout << (a->remove(185)) << std::endl;
a->printPretty();
std::cout << (b->insert(312)) << std::endl;
std::cout << (b->insert(246)) << std::endl;
*c=*c;
c->printPretty();
std::cout << (b->remove(249)) << std::endl;
*e=*a;
std::cout << (b->insert(277)) << std::endl;
std::cout << (b->remove(414)) << std::endl;
*b=*d;
std::cout << (d->insert(484)) << std::endl;
std::cout << (d->insert(174)) << std::endl;
c->printPretty();
std::cout << (e->insert(203)) << std::endl;
*b=*e;
std::cout << (d->remove(484)) << std::endl;
std::cout << (d->insert(174)) << std::endl;
std::cout << (e->remove(230)) << std::endl;
std::cout << (c->remove(280)) << std::endl;
*a=*a;
std::cout << (e->insert(203)) << std::endl;
std::cout << (a->insert(203)) << std::endl;
std::cout << (b->insert(77)) << std::endl;
std::cout << (a->remove(335)) << std::endl;
c->printPretty();
std::cout << (e->insert(482)) << std::endl;
std::cout << (d->remove(492)) << std::endl;
*a=*b;
std::cout << (d->insert(174)) << std::endl;
std::cout << (b->remove(203)) << std::endl;
std::cout << (d->insert(21)) << std::endl;
std::cout << (e->insert(289)) << std::endl;
std::cout << (e->remove(482)) << std::endl;
std::cout << (a->insert(77)) << std::endl;
std::cout << (d->remove(21)) << std::endl;
std::cout << (a->insert(136)) << std::endl;
std::cout << (b->insert(175)) << std::endl;
std::cout << (d->insert(347)) << std::endl;
a->printPretty();
*d=*a;
std::cout << (e->remove(203)) << std::endl;
std::cout << (c->remove(115)) << std::endl;
*a=*a;
std::cout << (a->remove(77)) << std::endl;
std::cout << (c->insert(157)) << std::endl;
std::cout << (e->remove(391)) << std::endl;
std::cout << (c->remove(491)) << std::endl;
std::cout << (d->remove(342)) << std::endl;
std::cout << (e->remove(493)) << std::endl;
*e=*b;
b->printPretty();
*a=*d;
*c=*b;
std::cout << (e->insert(13)) << std::endl;
std::cout << (e->insert(27)) << std::endl;
b->printPretty();
std::cout << (d->remove(136)) << std::endl;
std::cout << (d->insert(203)) << std::endl;
d->printPretty();
*b=*e;
std::cout << (a->insert(189)) << std::endl;
std::cout << (a->remove(311)) << std::endl;
a->printPretty();
*a=*d;
a->printPretty();
*b=*a;
e->printPretty();
std::cout << (e->insert(13)) << std::endl;
a->printPretty();
std::cout << (a->insert(203)) << std::endl;
*c=*a;
a->printPretty();
std::cout << (d->remove(203)) << std::endl;
std::cout << (b->insert(337)) << std::endl;
std::cout << (e->remove(150)) << std::endl;
std::cout << (c->remove(382)) << std::endl;
std::cout << (c->insert(225)) << std::endl;
std::cout << (c->insert(203)) << std::endl;
std::cout << (a->insert(77)) << std::endl;
*a=*e;
*d=*b;
std::cout << (e->remove(298)) << std::endl;
std::cout << (b->remove(203)) << std::endl;
std::cout << (a->remove(13)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (a->remove(272)) << std::endl;
std::cout << (b->remove(498)) << std::endl;
std::cout << (c->remove(203)) << std::endl;
std::cout << (b->insert(337)) << std::endl;
b->printPretty();
*c=*e;
std::cout << (c->remove(65)) << std::endl;
*e=*b;
*e=*b;
std::cout << (a->remove(77)) << std::endl;
std::cout << (a->insert(27)) << std::endl;
std::cout << (d->insert(337)) << std::endl;
std::cout << (c->remove(175)) << std::endl;
std::cout << (e->insert(77)) << std::endl;
a->printPretty();
std::cout << (a->insert(372)) << std::endl;
std::cout << (b->insert(337)) << std::endl;
std::cout << (d->insert(307)) << std::endl;
d->printPretty();
std::cout << (e->remove(337)) << std::endl;
std::cout << (a->remove(27)) << std::endl;
std::cout << (b->insert(209)) << std::endl;
std::cout << (a->remove(372)) << std::endl;
std::cout << (a->remove(175)) << std::endl;
c->printPretty();
d->printPretty();
std::cout << (c->insert(37)) << std::endl;
std::cout << (e->remove(77)) << std::endl;
std::cout << (d->insert(239)) << std::endl;
std::cout << (a->remove(202)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (d->insert(239)) << std::endl;
e->printPretty();
b->printPretty();
*b=*c;
a->printPretty();
*b=*a;
std::cout << (d->insert(215)) << std::endl;
*a=*b;
std::cout << (d->insert(337)) << std::endl;
std::cout << (d->insert(239)) << std::endl;
c->printPretty();
std::cout << (c->remove(40)) << std::endl;
std::cout << (d->remove(55)) << std::endl;
*b=*e;
*e=*c;
std::cout << (e->remove(440)) << std::endl;
std::cout << (a->remove(187)) << std::endl;
*b=*a;
d->printPretty();
std::cout << (d->insert(77)) << std::endl;
*b=*d;
*d=*c;
std::cout << (c->remove(262)) << std::endl;
std::cout << (b->insert(203)) << std::endl;
std::cout << (c->remove(289)) << std::endl;
std::cout << (a->remove(237)) << std::endl;
std::cout << (d->insert(77)) << std::endl;
std::cout << (d->insert(37)) << std::endl;
std::cout << (a->remove(389)) << std::endl;
*b=*d;
std::cout << (c->insert(27)) << std::endl;
std::cout << (d->insert(77)) << std::endl;
std::cout << (d->insert(77)) << std::endl;
std::cout << (c->insert(13)) << std::endl;
*e=*d;
a->printPretty();
*e=*a;
std::cout << (c->remove(27)) << std::endl;
e->printPretty();
std::cout << (b->insert(180)) << std::endl;
d->printPretty();
std::cout << (e->remove(354)) << std::endl;
*e=*a;
*c=*e;
std::cout << (d->remove(276)) << std::endl;
std::cout << (d->insert(301)) << std::endl;
std::cout << (d->insert(111)) << std::endl;
d->printPretty();
std::cout << (a->remove(26)) << std::endl;
std::cout << (d->insert(13)) << std::endl;
std::cout << (b->insert(27)) << std::endl;
e->printPretty();
e->printPretty();
std::cout << (b->insert(13)) << std::endl;
std::cout << (d->remove(171)) << std::endl;
std::cout << (b->insert(386)) << std::endl;
*b=*c;
a->printPretty();
d->printPretty();
*c=*c;
d->printPretty();
d->printPretty();
std::cout << (c->insert(106)) << std::endl;
std::cout << (d->insert(271)) << std::endl;
e->printPretty();
std::cout << (d->remove(301)) << std::endl;
std::cout << (c->remove(410)) << std::endl;
std::cout << (d->remove(37)) << std::endl;
std::cout << (c->remove(352)) << std::endl;
std::cout << (d->remove(131)) << std::endl;
*d=*b;
d->printPretty();
std::cout << (b->remove(267)) << std::endl;
std::cout << (c->remove(42)) << std::endl;
std::cout << (c->remove(50)) << std::endl;
std::cout << (b->insert(403)) << std::endl;
*a=*c;
std::cout << (c->insert(106)) << std::endl;
std::cout << (e->remove(210)) << std::endl;
std::cout << (b->remove(403)) << std::endl;
b->printPretty();
d->printPretty();
c->printPretty();
std::cout << (d->insert(20)) << std::endl;
a->printPretty();
std::cout << (a->remove(276)) << std::endl;
a->printPretty();
std::cout << (d->insert(20)) << std::endl;
d->printPretty();
std::cout << (b->insert(29)) << std::endl;
std::cout << (b->remove(29)) << std::endl;
std::cout << (d->insert(474)) << std::endl;
std::cout << (b->remove(47)) << std::endl;
std::cout << (d->insert(20)) << std::endl;
*a=*a;
std::cout << (c->remove(170)) << std::endl;
std::cout << (a->remove(179)) << std::endl;
*c=*e;
*d=*e;
std::cout << (c->insert(154)) << std::endl;
std::cout << (b->insert(93)) << std::endl;
b->printPretty();
std::cout << (a->insert(261)) << std::endl;
return 0;
}