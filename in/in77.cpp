#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
std::cout << (b->remove(79)) << std::endl;
std::cout << (a->insert(383)) << std::endl;
std::cout << (a->insert(383)) << std::endl;
std::cout << (b->insert(341)) << std::endl;
std::cout << (b->insert(449)) << std::endl;
a->printPretty();
std::cout << (b->remove(321)) << std::endl;
std::cout << (b->remove(82)) << std::endl;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*b);
ScapegoatTree<int> *d=new ScapegoatTree<int>(*c);
ScapegoatTree<int> *e=new ScapegoatTree<int>(*d);
*a=*c;
std::cout << (c->insert(449)) << std::endl;
c->printPretty();
std::cout << (a->remove(157)) << std::endl;
*c=*b;
std::cout << (c->insert(62)) << std::endl;
std::cout << (e->insert(341)) << std::endl;
std::cout << (e->insert(341)) << std::endl;
std::cout << (d->remove(449)) << std::endl;
d->printPretty();
std::cout << (c->insert(32)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << (a->remove(262)) << std::endl;
b->printPretty();
*b=*b;
*e=*d;
std::cout << (c->remove(32)) << std::endl;
std::cout << (c->insert(289)) << std::endl;
*c=*d;
d->printPretty();
*e=*d;
*c=*a;
std::cout << (d->remove(119)) << std::endl;
c->printPretty();
std::cout << (e->remove(341)) << std::endl;
std::cout << (a->insert(51)) << std::endl;
e->printPretty();
e->printPretty();
std::cout << (a->remove(341)) << std::endl;
std::cout << (a->remove(449)) << std::endl;
e->printPretty();
std::cout << (e->remove(126)) << std::endl;
std::cout << (b->remove(449)) << std::endl;
*e=*c;
std::cout << (c->insert(450)) << std::endl;
std::cout << (e->insert(476)) << std::endl;
*e=*c;
*a=*a;
std::cout << (c->insert(181)) << std::endl;
*d=*c;
std::cout << (c->insert(353)) << std::endl;
std::cout << (d->remove(450)) << std::endl;
std::cout << (b->insert(144)) << std::endl;
std::cout << (e->remove(337)) << std::endl;
std::cout << (b->insert(381)) << std::endl;
std::cout << (e->insert(34)) << std::endl;
std::cout << (b->insert(381)) << std::endl;
std::cout << (d->remove(449)) << std::endl;
std::cout << (c->insert(468)) << std::endl;
d->printPretty();
*c=*a;
std::cout << (a->insert(51)) << std::endl;
std::cout << (a->remove(246)) << std::endl;
a->printPretty();
c->printPretty();
std::cout << (e->remove(449)) << std::endl;
std::cout << (c->insert(435)) << std::endl;
e->printPretty();
d->printPretty();
std::cout << (c->remove(435)) << std::endl;
std::cout << (c->remove(230)) << std::endl;
*a=*c;
d->printPretty();
c->printPretty();
std::cout << (e->remove(170)) << std::endl;
std::cout << (a->remove(51)) << std::endl;
std::cout << (b->remove(381)) << std::endl;
b->printPretty();
std::cout << (d->insert(341)) << std::endl;
*d=*b;
std::cout << (b->remove(144)) << std::endl;
std::cout << (e->insert(34)) << std::endl;
std::cout << (e->insert(34)) << std::endl;
*d=*d;
std::cout << (e->insert(341)) << std::endl;
std::cout << (a->insert(362)) << std::endl;
std::cout << (d->remove(341)) << std::endl;
std::cout << (d->remove(386)) << std::endl;
std::cout << (b->remove(87)) << std::endl;
std::cout << (d->insert(144)) << std::endl;
std::cout << (e->remove(143)) << std::endl;
std::cout << (d->insert(34)) << std::endl;
b->printPretty();
std::cout << (e->remove(196)) << std::endl;
std::cout << (d->remove(34)) << std::endl;
std::cout << (b->remove(341)) << std::endl;
std::cout << (c->insert(51)) << std::endl;
b->printPretty();
std::cout << (c->remove(294)) << std::endl;
std::cout << (a->insert(204)) << std::endl;
*c=*e;
std::cout << (e->insert(34)) << std::endl;
std::cout << (e->remove(231)) << std::endl;
std::cout << (b->insert(26)) << std::endl;
std::cout << (e->insert(341)) << std::endl;
b->printPretty();
*b=*b;
*e=*e;
std::cout << (e->insert(386)) << std::endl;
std::cout << (c->insert(293)) << std::endl;
std::cout << (b->insert(26)) << std::endl;
std::cout << (b->remove(26)) << std::endl;
std::cout << (a->insert(362)) << std::endl;
std::cout << (b->insert(431)) << std::endl;
std::cout << (c->remove(341)) << std::endl;
std::cout << (d->remove(109)) << std::endl;
e->printPretty();
a->printPretty();
*e=*d;
std::cout << (e->remove(456)) << std::endl;
*b=*d;
a->printPretty();
std::cout << (d->remove(255)) << std::endl;
*b=*c;
std::cout << (b->remove(162)) << std::endl;
std::cout << (d->remove(109)) << std::endl;
std::cout << (e->insert(144)) << std::endl;
e->printPretty();
std::cout << (e->remove(424)) << std::endl;
a->printPretty();
std::cout << (a->remove(431)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (b->remove(450)) << std::endl;
*b=*e;
std::cout << (d->insert(326)) << std::endl;
std::cout << (e->remove(201)) << std::endl;
std::cout << (e->insert(144)) << std::endl;
std::cout << (c->remove(34)) << std::endl;
std::cout << (d->insert(326)) << std::endl;
a->printPretty();
*a=*e;
*e=*d;
std::cout << (b->remove(144)) << std::endl;
*b=*a;
d->printPretty();
std::cout << (d->remove(326)) << std::endl;
std::cout << (b->insert(144)) << std::endl;
std::cout << (d->remove(497)) << std::endl;
std::cout << (a->remove(144)) << std::endl;
std::cout << (c->remove(448)) << std::endl;
std::cout << (c->insert(450)) << std::endl;
std::cout << (d->remove(486)) << std::endl;
std::cout << (e->insert(43)) << std::endl;
c->printPretty();
*b=*e;
std::cout << (d->remove(144)) << std::endl;
std::cout << (e->remove(326)) << std::endl;
a->printPretty();
std::cout << (b->insert(287)) << std::endl;
*b=*d;
c->printPretty();
*a=*b;
b->printPretty();
*a=*a;
std::cout << (d->remove(4)) << std::endl;
e->printPretty();
b->printPretty();
*c=*c;
std::cout << (e->insert(144)) << std::endl;
b->printPretty();
std::cout << (c->insert(293)) << std::endl;
std::cout << (b->insert(185)) << std::endl;
std::cout << (e->insert(144)) << std::endl;
std::cout << (c->insert(450)) << std::endl;
*a=*d;
std::cout << (e->insert(43)) << std::endl;
std::cout << (b->remove(185)) << std::endl;
std::cout << (b->remove(376)) << std::endl;
a->printPretty();
std::cout << (c->remove(488)) << std::endl;
a->printPretty();
std::cout << (c->insert(293)) << std::endl;
std::cout << (e->remove(85)) << std::endl;
std::cout << (e->remove(257)) << std::endl;
std::cout << (e->insert(144)) << std::endl;
std::cout << (c->remove(474)) << std::endl;
c->printPretty();
e->printPretty();
std::cout << (e->remove(77)) << std::endl;
b->printPretty();
std::cout << (c->remove(68)) << std::endl;
a->printPretty();
*d=*a;
std::cout << (e->insert(43)) << std::endl;
std::cout << (c->remove(450)) << std::endl;
d->printPretty();
*a=*b;
*a=*c;
std::cout << (c->insert(326)) << std::endl;
std::cout << (d->insert(190)) << std::endl;
*e=*a;
e->printPretty();
d->printPretty();
*d=*e;
std::cout << (e->remove(293)) << std::endl;
std::cout << (b->remove(14)) << std::endl;
std::cout << (a->insert(293)) << std::endl;
std::cout << (b->insert(324)) << std::endl;
std::cout << (d->remove(481)) << std::endl;
e->printPretty();
std::cout << (d->remove(293)) << std::endl;
e->printPretty();
std::cout << (e->remove(168)) << std::endl;
b->printPretty();
std::cout << (a->remove(293)) << std::endl;
std::cout << (d->insert(431)) << std::endl;
*b=*b;
a->printPretty();
std::cout << (b->insert(31)) << std::endl;
std::cout << (b->remove(324)) << std::endl;
std::cout << (b->remove(401)) << std::endl;
std::cout << (a->insert(182)) << std::endl;
*d=*b;
std::cout << (d->insert(31)) << std::endl;
std::cout << (b->insert(31)) << std::endl;
std::cout << (b->remove(31)) << std::endl;
*c=*b;
b->printPretty();
*d=*a;
std::cout << (c->insert(480)) << std::endl;
d->printPretty();
*a=*c;
std::cout << (d->remove(119)) << std::endl;
std::cout << (a->insert(480)) << std::endl;
*e=*e;
a->printPretty();
std::cout << (c->remove(480)) << std::endl;
b->printPretty();
*c=*a;
a->printPretty();
std::cout << (e->remove(118)) << std::endl;
std::cout << (c->insert(480)) << std::endl;
std::cout << (e->remove(278)) << std::endl;
std::cout << (c->remove(480)) << std::endl;
std::cout << (a->remove(206)) << std::endl;
a->printPretty();
std::cout << (a->insert(480)) << std::endl;
std::cout << (b->remove(93)) << std::endl;
std::cout << (a->remove(379)) << std::endl;
*e=*d;
std::cout << (e->insert(469)) << std::endl;
d->printPretty();
std::cout << (a->insert(138)) << std::endl;
*d=*b;
c->printPretty();
std::cout << (e->insert(182)) << std::endl;
*c=*e;
std::cout << (b->remove(72)) << std::endl;
*a=*c;
*e=*c;
*a=*b;
c->printPretty();
std::cout << (a->remove(470)) << std::endl;
std::cout << (c->remove(469)) << std::endl;
std::cout << (a->insert(84)) << std::endl;
std::cout << (a->insert(27)) << std::endl;
std::cout << (d->insert(48)) << std::endl;
*b=*a;
std::cout << (e->insert(320)) << std::endl;
std::cout << (a->remove(27)) << std::endl;
std::cout << (a->insert(84)) << std::endl;
std::cout << (b->remove(27)) << std::endl;
b->printPretty();
*a=*c;
std::cout << (d->remove(165)) << std::endl;
*e=*c;
std::cout << (b->remove(216)) << std::endl;
std::cout << (c->insert(301)) << std::endl;
std::cout << (a->insert(182)) << std::endl;
std::cout << (b->remove(206)) << std::endl;
*b=*c;
std::cout << (d->insert(336)) << std::endl;
std::cout << (b->insert(97)) << std::endl;
b->printPretty();
std::cout << (d->remove(92)) << std::endl;
std::cout << (e->insert(182)) << std::endl;
std::cout << (d->remove(48)) << std::endl;
std::cout << (c->remove(182)) << std::endl;
std::cout << (c->insert(228)) << std::endl;
*a=*b;
std::cout << (e->remove(182)) << std::endl;
std::cout << (a->insert(301)) << std::endl;
std::cout << (c->remove(228)) << std::endl;
a->printPretty();
std::cout << (c->remove(442)) << std::endl;
std::cout << (d->remove(109)) << std::endl;
*e=*d;
std::cout << (b->remove(97)) << std::endl;
std::cout << (a->remove(124)) << std::endl;
std::cout << (e->insert(30)) << std::endl;
std::cout << (a->remove(451)) << std::endl;
std::cout << (b->insert(343)) << std::endl;
std::cout << (c->insert(197)) << std::endl;
std::cout << (e->insert(336)) << std::endl;
std::cout << (d->insert(336)) << std::endl;
std::cout << (b->insert(301)) << std::endl;
std::cout << (d->remove(336)) << std::endl;
std::cout << (a->insert(161)) << std::endl;
b->printPretty();
e->printPretty();
e->printPretty();
std::cout << (b->remove(301)) << std::endl;
std::cout << (c->insert(197)) << std::endl;
std::cout << (e->insert(199)) << std::endl;
a->printPretty();
std::cout << (b->remove(481)) << std::endl;
*c=*b;
std::cout << (c->remove(343)) << std::endl;
std::cout << (c->remove(87)) << std::endl;
std::cout << (b->insert(343)) << std::endl;
std::cout << (a->remove(301)) << std::endl;
std::cout << (b->insert(69)) << std::endl;
std::cout << (b->insert(343)) << std::endl;
e->printPretty();
std::cout << (c->remove(50)) << std::endl;
std::cout << (c->remove(182)) << std::endl;
std::cout << (c->insert(273)) << std::endl;
std::cout << (e->remove(199)) << std::endl;
*a=*c;
e->printPretty();
std::cout << (a->remove(273)) << std::endl;
std::cout << (d->remove(191)) << std::endl;
std::cout << (c->remove(273)) << std::endl;
b->printPretty();
std::cout << (e->insert(30)) << std::endl;
std::cout << (b->remove(23)) << std::endl;
std::cout << (e->insert(336)) << std::endl;
c->printPretty();
std::cout << (e->insert(336)) << std::endl;
std::cout << (b->remove(69)) << std::endl;
std::cout << (a->remove(327)) << std::endl;
std::cout << (b->remove(182)) << std::endl;
std::cout << (a->remove(476)) << std::endl;
std::cout << (d->remove(413)) << std::endl;
std::cout << (c->insert(262)) << std::endl;
std::cout << (a->insert(414)) << std::endl;
std::cout << (b->insert(343)) << std::endl;
std::cout << (b->insert(441)) << std::endl;
a->printPretty();
std::cout << (c->remove(227)) << std::endl;
std::cout << (c->remove(262)) << std::endl;
std::cout << (b->insert(441)) << std::endl;
std::cout << (a->insert(414)) << std::endl;
std::cout << (b->remove(21)) << std::endl;
std::cout << (a->insert(414)) << std::endl;
std::cout << (d->remove(31)) << std::endl;
std::cout << (c->remove(210)) << std::endl;
*e=*d;
*b=*b;
std::cout << (b->remove(441)) << std::endl;
d->printPretty();
std::cout << (d->insert(274)) << std::endl;
*a=*c;
*e=*c;
std::cout << (d->insert(274)) << std::endl;
std::cout << (b->remove(336)) << std::endl;
std::cout << (e->insert(93)) << std::endl;
std::cout << (d->insert(274)) << std::endl;
std::cout << (d->remove(274)) << std::endl;
std::cout << (c->insert(270)) << std::endl;
std::cout << (a->remove(218)) << std::endl;
std::cout << (e->remove(260)) << std::endl;
e->printPretty();
d->printPretty();
std::cout << (d->remove(386)) << std::endl;
std::cout << (b->remove(187)) << std::endl;
std::cout << (a->remove(423)) << std::endl;
a->printPretty();
std::cout << (e->remove(93)) << std::endl;
d->printPretty();
std::cout << (c->insert(462)) << std::endl;
d->printPretty();
*c=*a;
c->printPretty();
std::cout << (a->insert(234)) << std::endl;
std::cout << (b->insert(218)) << std::endl;
std::cout << (a->remove(234)) << std::endl;
std::cout << (e->insert(171)) << std::endl;
std::cout << (e->insert(452)) << std::endl;
std::cout << (e->insert(28)) << std::endl;
e->printPretty();
std::cout << (d->insert(382)) << std::endl;
std::cout << (e->remove(201)) << std::endl;
std::cout << (d->insert(265)) << std::endl;
std::cout << (a->remove(35)) << std::endl;
d->printPretty();
std::cout << (e->remove(171)) << std::endl;
a->printPretty();
std::cout << (d->insert(382)) << std::endl;
*a=*b;
std::cout << (b->remove(218)) << std::endl;
*c=*a;
std::cout << (a->remove(343)) << std::endl;
std::cout << (e->remove(28)) << std::endl;
*d=*c;
std::cout << (b->insert(343)) << std::endl;
std::cout << (b->remove(343)) << std::endl;
*d=*d;
std::cout << (b->remove(422)) << std::endl;
std::cout << (a->insert(319)) << std::endl;
*a=*d;
e->printPretty();
std::cout << (a->insert(26)) << std::endl;
std::cout << (c->remove(218)) << std::endl;
*e=*d;
std::cout << (d->remove(131)) << std::endl;
std::cout << (d->insert(297)) << std::endl;
*c=*d;
*c=*c;
std::cout << (d->remove(218)) << std::endl;
std::cout << (e->remove(343)) << std::endl;
std::cout << (c->insert(297)) << std::endl;
*d=*a;
a->printPretty();
std::cout << (b->remove(252)) << std::endl;
std::cout << (c->insert(409)) << std::endl;
std::cout << (e->remove(218)) << std::endl;
*e=*c;
*d=*a;
std::cout << (a->remove(478)) << std::endl;
std::cout << (c->insert(297)) << std::endl;
std::cout << (a->remove(26)) << std::endl;
a->printPretty();
*b=*a;
std::cout << (e->remove(343)) << std::endl;
std::cout << (c->insert(297)) << std::endl;
std::cout << (d->insert(444)) << std::endl;
std::cout << (c->remove(409)) << std::endl;
std::cout << (e->remove(331)) << std::endl;
std::cout << (d->insert(1)) << std::endl;
*b=*d;
e->printPretty();
b->printPretty();
*d=*b;
std::cout << (c->remove(218)) << std::endl;
std::cout << (d->insert(46)) << std::endl;
std::cout << (b->remove(26)) << std::endl;
std::cout << (e->insert(218)) << std::endl;
std::cout << (a->insert(218)) << std::endl;
std::cout << (a->remove(451)) << std::endl;
e->printPretty();
std::cout << (c->remove(95)) << std::endl;
std::cout << (a->remove(464)) << std::endl;
std::cout << (b->remove(431)) << std::endl;
std::cout << (b->insert(311)) << std::endl;
std::cout << (c->remove(297)) << std::endl;
*d=*c;
*d=*b;
std::cout << (b->insert(1)) << std::endl;
std::cout << (a->remove(343)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (c->insert(188)) << std::endl;
std::cout << (a->insert(218)) << std::endl;
*a=*c;
std::cout << (b->remove(311)) << std::endl;
std::cout << (e->insert(74)) << std::endl;
*e=*c;
b->printPretty();
std::cout << (b->remove(31)) << std::endl;
std::cout << (d->insert(490)) << std::endl;
std::cout << (d->insert(207)) << std::endl;
std::cout << (b->remove(32)) << std::endl;
*c=*e;
*a=*c;
*d=*d;
std::cout << (e->remove(348)) << std::endl;
*b=*c;
*a=*a;
std::cout << (e->insert(343)) << std::endl;
*b=*c;
std::cout << (e->remove(362)) << std::endl;
*a=*b;
c->printPretty();
*b=*d;
std::cout << (e->insert(211)) << std::endl;
std::cout << (a->insert(104)) << std::endl;
std::cout << (c->insert(343)) << std::endl;
std::cout << (b->remove(218)) << std::endl;
std::cout << (e->remove(321)) << std::endl;
std::cout << (e->insert(211)) << std::endl;
std::cout << (a->remove(104)) << std::endl;
std::cout << (c->remove(188)) << std::endl;
std::cout << (b->remove(469)) << std::endl;
std::cout << (c->remove(343)) << std::endl;
std::cout << (e->insert(108)) << std::endl;
std::cout << (e->remove(23)) << std::endl;
*c=*d;
*b=*d;
*b=*c;
*c=*e;
b->printPretty();
std::cout << (c->remove(343)) << std::endl;
c->printPretty();
std::cout << (a->insert(343)) << std::endl;
std::cout << (c->insert(396)) << std::endl;
std::cout << (d->remove(1)) << std::endl;
std::cout << (e->insert(108)) << std::endl;
*d=*a;
*e=*c;
*a=*a;
std::cout << (e->insert(419)) << std::endl;
std::cout << (d->insert(248)) << std::endl;
std::cout << (e->remove(364)) << std::endl;
std::cout << (d->insert(188)) << std::endl;
std::cout << (b->remove(444)) << std::endl;
std::cout << (b->insert(207)) << std::endl;
std::cout << (c->insert(188)) << std::endl;
std::cout << (d->remove(343)) << std::endl;
std::cout << (d->insert(88)) << std::endl;
std::cout << (b->insert(449)) << std::endl;
std::cout << (a->insert(449)) << std::endl;
a->printPretty();
std::cout << (c->remove(167)) << std::endl;
*d=*b;
std::cout << (d->insert(490)) << std::endl;
c->printPretty();
std::cout << (d->remove(340)) << std::endl;
std::cout << (d->insert(350)) << std::endl;
std::cout << (b->remove(363)) << std::endl;
std::cout << (b->insert(343)) << std::endl;
std::cout << (c->remove(86)) << std::endl;
std::cout << (e->insert(22)) << std::endl;
std::cout << (e->remove(284)) << std::endl;
std::cout << (c->insert(108)) << std::endl;
std::cout << (a->insert(449)) << std::endl;
std::cout << (b->remove(182)) << std::endl;
b->printPretty();
std::cout << (b->remove(94)) << std::endl;
std::cout << (d->remove(50)) << std::endl;
std::cout << (a->insert(188)) << std::endl;
std::cout << (d->remove(449)) << std::endl;
e->printPretty();
std::cout << (b->remove(218)) << std::endl;
std::cout << (d->insert(458)) << std::endl;
*e=*d;
std::cout << (e->remove(207)) << std::endl;
*d=*b;
std::cout << (d->insert(387)) << std::endl;
std::cout << (b->insert(449)) << std::endl;
e->printPretty();
std::cout << (e->remove(343)) << std::endl;
std::cout << (a->remove(449)) << std::endl;
std::cout << (d->insert(490)) << std::endl;
std::cout << (e->remove(431)) << std::endl;
std::cout << (c->remove(211)) << std::endl;
*c=*e;
*c=*c;
std::cout << (a->remove(315)) << std::endl;
*e=*e;
std::cout << (e->remove(350)) << std::endl;
std::cout << (d->insert(405)) << std::endl;
std::cout << (d->insert(258)) << std::endl;
std::cout << (c->insert(499)) << std::endl;
e->printPretty();
std::cout << (d->insert(43)) << std::endl;
std::cout << (d->insert(43)) << std::endl;
std::cout << (b->insert(292)) << std::endl;
std::cout << (b->remove(171)) << std::endl;
std::cout << (e->insert(490)) << std::endl;
std::cout << (b->remove(207)) << std::endl;
std::cout << (c->remove(458)) << std::endl;
std::cout << (b->insert(1)) << std::endl;
e->printPretty();
c->printPretty();
std::cout << (e->remove(458)) << std::endl;
std::cout << (b->remove(61)) << std::endl;
std::cout << (e->insert(198)) << std::endl;
std::cout << (e->remove(218)) << std::endl;
std::cout << (b->remove(420)) << std::endl;
std::cout << (c->remove(350)) << std::endl;
std::cout << (a->remove(343)) << std::endl;
std::cout << (d->insert(258)) << std::endl;
*d=*c;
b->printPretty();
a->printPretty();
a->printPretty();
*b=*b;
std::cout << (d->insert(490)) << std::endl;
std::cout << (b->insert(102)) << std::endl;
*e=*b;
d->printPretty();
std::cout << (d->insert(295)) << std::endl;
std::cout << (c->insert(311)) << std::endl;
std::cout << (e->insert(478)) << std::endl;
std::cout << (c->insert(153)) << std::endl;
c->printPretty();
std::cout << (b->remove(311)) << std::endl;
std::cout << (a->remove(188)) << std::endl;
std::cout << (d->insert(311)) << std::endl;
std::cout << (a->insert(253)) << std::endl;
std::cout << (a->remove(118)) << std::endl;
a->printPretty();
e->printPretty();
std::cout << (c->remove(317)) << std::endl;
std::cout << (e->remove(327)) << std::endl;
std::cout << (b->insert(198)) << std::endl;
std::cout << (e->insert(255)) << std::endl;
std::cout << (b->remove(59)) << std::endl;
c->printPretty();
std::cout << (a->remove(117)) << std::endl;
e->printPretty();
std::cout << (b->remove(1)) << std::endl;
std::cout << (e->insert(367)) << std::endl;
std::cout << (e->remove(115)) << std::endl;
std::cout << (a->remove(253)) << std::endl;
std::cout << (c->remove(92)) << std::endl;
std::cout << (d->insert(1)) << std::endl;
a->printPretty();
std::cout << (b->insert(277)) << std::endl;
std::cout << (b->remove(89)) << std::endl;
std::cout << (c->remove(322)) << std::endl;
c->printPretty();
c->printPretty();
e->printPretty();
std::cout << (d->remove(499)) << std::endl;
*d=*c;
std::cout << (d->insert(218)) << std::endl;
c->printPretty();
std::cout << (c->remove(318)) << std::endl;
std::cout << (a->insert(346)) << std::endl;
std::cout << (c->remove(49)) << std::endl;
std::cout << (e->insert(442)) << std::endl;
e->printPretty();
std::cout << (a->remove(328)) << std::endl;
std::cout << (c->insert(48)) << std::endl;
std::cout << (c->remove(438)) << std::endl;
*a=*b;
std::cout << (a->remove(292)) << std::endl;
std::cout << (b->remove(490)) << std::endl;
std::cout << (e->remove(102)) << std::endl;
std::cout << (b->insert(343)) << std::endl;
std::cout << (b->remove(198)) << std::endl;
d->printPretty();
std::cout << (a->remove(21)) << std::endl;
std::cout << (b->remove(409)) << std::endl;
std::cout << (d->insert(151)) << std::endl;
d->printPretty();
a->printPretty();
e->printPretty();
std::cout << (a->remove(277)) << std::endl;
std::cout << (d->insert(153)) << std::endl;
c->printPretty();
std::cout << (d->remove(356)) << std::endl;
c->printPretty();
std::cout << (c->insert(388)) << std::endl;
std::cout << (d->remove(260)) << std::endl;
*a=*a;
std::cout << (b->insert(340)) << std::endl;
*e=*c;
b->printPretty();
std::cout << (e->insert(125)) << std::endl;
*b=*c;
std::cout << (c->insert(89)) << std::endl;
std::cout << (e->insert(407)) << std::endl;
std::cout << (d->remove(1)) << std::endl;
a->printPretty();
std::cout << (a->remove(348)) << std::endl;
d->printPretty();
std::cout << (e->remove(311)) << std::endl;
e->printPretty();
*e=*c;
c->printPretty();
std::cout << (d->insert(490)) << std::endl;
std::cout << (b->remove(388)) << std::endl;
*b=*b;
*e=*e;
std::cout << (d->remove(311)) << std::endl;
std::cout << (c->insert(381)) << std::endl;
std::cout << (d->remove(193)) << std::endl;
std::cout << (c->remove(388)) << std::endl;
std::cout << (d->remove(328)) << std::endl;
std::cout << (a->remove(348)) << std::endl;
*b=*e;
std::cout << (d->remove(490)) << std::endl;
return 0;
}
