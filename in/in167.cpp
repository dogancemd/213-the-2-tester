#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << (a->remove(48)) << std::endl;
std::cout << (a->remove(312)) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
b->printPretty();
std::cout << (b->remove(264)) << std::endl;
ScapegoatTree<int> *c=new ScapegoatTree<int>;
ScapegoatTree<int> *d=new ScapegoatTree<int>;
ScapegoatTree<int> *e=new ScapegoatTree<int>(*a);
std::cout << (e->insert(103)) << std::endl;
e->printPretty();
*d=*b;
d->printPretty();
std::cout << (e->remove(103)) << std::endl;
e->printPretty();
*e=*b;
b->printPretty();
std::cout << (d->insert(466)) << std::endl;
std::cout << (b->remove(85)) << std::endl;
std::cout << (d->insert(327)) << std::endl;
std::cout << (e->remove(183)) << std::endl;
std::cout << (b->insert(203)) << std::endl;
std::cout << (e->remove(315)) << std::endl;
std::cout << (d->remove(466)) << std::endl;
std::cout << (d->insert(417)) << std::endl;
*e=*e;
c->printPretty();
std::cout << (b->remove(203)) << std::endl;
std::cout << (e->remove(123)) << std::endl;
e->printPretty();
b->printPretty();
std::cout << (a->remove(290)) << std::endl;
std::cout << (e->insert(136)) << std::endl;
std::cout << (e->remove(136)) << std::endl;
std::cout << (c->insert(407)) << std::endl;
std::cout << (c->insert(188)) << std::endl;
std::cout << (a->insert(221)) << std::endl;
c->printPretty();
std::cout << (c->insert(90)) << std::endl;
*b=*c;
*d=*a;
std::cout << (b->remove(328)) << std::endl;
std::cout << (b->remove(311)) << std::endl;
c->printPretty();
*b=*d;
std::cout << (b->remove(347)) << std::endl;
d->printPretty();
std::cout << (d->insert(221)) << std::endl;
c->printPretty();
std::cout << (a->insert(112)) << std::endl;
std::cout << (a->remove(221)) << std::endl;
std::cout << (d->insert(221)) << std::endl;
std::cout << (a->remove(112)) << std::endl;
std::cout << (b->insert(125)) << std::endl;
a->printPretty();
std::cout << (d->remove(5)) << std::endl;
d->printPretty();
d->printPretty();
*a=*e;
std::cout << (b->remove(211)) << std::endl;
*e=*d;
*e=*e;
std::cout << (b->insert(237)) << std::endl;
std::cout << (e->insert(234)) << std::endl;
b->printPretty();
e->printPretty();
c->printPretty();
*c=*c;
std::cout << (d->insert(376)) << std::endl;
std::cout << (b->insert(237)) << std::endl;
d->printPretty();
std::cout << (b->insert(171)) << std::endl;
std::cout << (e->remove(236)) << std::endl;
std::cout << (a->insert(437)) << std::endl;
std::cout << (e->insert(234)) << std::endl;
std::cout << (c->remove(139)) << std::endl;
std::cout << (a->insert(437)) << std::endl;
e->printPretty();
std::cout << (b->remove(171)) << std::endl;
c->printPretty();
*b=*c;
std::cout << (c->insert(90)) << std::endl;
std::cout << (a->insert(423)) << std::endl;
std::cout << (b->insert(236)) << std::endl;
std::cout << (c->remove(261)) << std::endl;
std::cout << (d->insert(350)) << std::endl;
d->printPretty();
*e=*d;
std::cout << (c->insert(407)) << std::endl;
b->printPretty();
std::cout << (e->insert(221)) << std::endl;
e->printPretty();
std::cout << (a->insert(423)) << std::endl;
*d=*b;
std::cout << (e->remove(112)) << std::endl;
std::cout << (a->insert(437)) << std::endl;
std::cout << (e->insert(362)) << std::endl;
std::cout << (a->remove(300)) << std::endl;
std::cout << (e->remove(220)) << std::endl;
std::cout << (d->remove(422)) << std::endl;
std::cout << (a->remove(437)) << std::endl;
*b=*b;
std::cout << (b->insert(2)) << std::endl;
std::cout << (d->remove(409)) << std::endl;
std::cout << (d->insert(90)) << std::endl;
d->printPretty();
*a=*c;
std::cout << (e->insert(376)) << std::endl;
std::cout << (e->remove(41)) << std::endl;
std::cout << (a->remove(90)) << std::endl;
std::cout << (b->insert(407)) << std::endl;
std::cout << (e->remove(155)) << std::endl;
*c=*e;
*d=*b;
std::cout << (a->insert(188)) << std::endl;
d->printPretty();
std::cout << (a->remove(188)) << std::endl;
std::cout << (d->remove(188)) << std::endl;
*a=*d;
std::cout << (e->remove(91)) << std::endl;
*a=*a;
*c=*d;
d->printPretty();
e->printPretty();
std::cout << (c->remove(194)) << std::endl;
std::cout << (b->insert(60)) << std::endl;
b->printPretty();
*b=*a;
b->printPretty();
c->printPretty();
std::cout << (b->insert(236)) << std::endl;
std::cout << (c->insert(295)) << std::endl;
*a=*e;
std::cout << (b->remove(377)) << std::endl;
std::cout << (b->insert(380)) << std::endl;
std::cout << (b->remove(423)) << std::endl;
*d=*e;
e->printPretty();
a->printPretty();
a->printPretty();
d->printPretty();
a->printPretty();
std::cout << (b->remove(182)) << std::endl;
std::cout << (a->insert(143)) << std::endl;
e->printPretty();
std::cout << (a->insert(468)) << std::endl;
std::cout << (c->remove(442)) << std::endl;
std::cout << (d->insert(211)) << std::endl;
std::cout << (a->remove(362)) << std::endl;
std::cout << (a->insert(478)) << std::endl;
std::cout << (d->remove(218)) << std::endl;
std::cout << (b->remove(2)) << std::endl;
std::cout << (d->remove(221)) << std::endl;
d->printPretty();
std::cout << (e->remove(221)) << std::endl;
std::cout << (d->remove(376)) << std::endl;
a->printPretty();
std::cout << (b->remove(90)) << std::endl;
std::cout << (b->remove(380)) << std::endl;
std::cout << (b->remove(236)) << std::endl;
std::cout << (a->remove(288)) << std::endl;
e->printPretty();
std::cout << (c->insert(187)) << std::endl;
std::cout << (a->insert(233)) << std::endl;
std::cout << (d->remove(362)) << std::endl;
a->printPretty();
c->printPretty();
std::cout << (b->remove(4)) << std::endl;
*b=*a;
std::cout << (b->remove(221)) << std::endl;
std::cout << (b->insert(468)) << std::endl;
std::cout << (e->insert(350)) << std::endl;
std::cout << (b->insert(350)) << std::endl;
std::cout << (d->insert(303)) << std::endl;
std::cout << (e->remove(19)) << std::endl;
std::cout << (b->insert(233)) << std::endl;
std::cout << (d->remove(455)) << std::endl;
std::cout << (c->remove(72)) << std::endl;
*e=*a;
std::cout << (e->remove(143)) << std::endl;
*d=*a;
*d=*b;
std::cout << (d->remove(144)) << std::endl;
std::cout << (b->remove(478)) << std::endl;
std::cout << (e->insert(468)) << std::endl;
std::cout << (a->remove(233)) << std::endl;
std::cout << (b->insert(166)) << std::endl;
std::cout << (b->insert(119)) << std::endl;
*c=*e;
std::cout << (b->remove(233)) << std::endl;
std::cout << (b->remove(461)) << std::endl;
b->printPretty();
*c=*c;
std::cout << (b->insert(84)) << std::endl;
std::cout << (c->insert(478)) << std::endl;
*b=*e;
std::cout << (c->insert(478)) << std::endl;
*a=*e;
c->printPretty();
std::cout << (d->remove(319)) << std::endl;
std::cout << (b->remove(221)) << std::endl;
std::cout << (e->remove(468)) << std::endl;
std::cout << (e->remove(221)) << std::endl;
std::cout << (e->insert(478)) << std::endl;
std::cout << (a->remove(346)) << std::endl;
*a=*b;
std::cout << (c->remove(478)) << std::endl;
std::cout << (b->remove(468)) << std::endl;
d->printPretty();
*b=*b;
e->printPretty();
std::cout << (a->remove(335)) << std::endl;
std::cout << (e->remove(431)) << std::endl;
std::cout << (e->remove(376)) << std::endl;
*c=*d;
e->printPretty();
std::cout << (a->remove(268)) << std::endl;
std::cout << (b->remove(427)) << std::endl;
std::cout << (e->insert(478)) << std::endl;
std::cout << (a->remove(350)) << std::endl;
b->printPretty();
*e=*c;
std::cout << (a->insert(233)) << std::endl;
c->printPretty();
a->printPretty();
std::cout << (e->remove(143)) << std::endl;
b->printPretty();
std::cout << (d->insert(478)) << std::endl;
*c=*a;
std::cout << (d->remove(476)) << std::endl;
a->printPretty();
std::cout << (b->insert(58)) << std::endl;
std::cout << (b->insert(376)) << std::endl;
std::cout << (a->remove(468)) << std::endl;
*b=*e;
std::cout << (d->remove(343)) << std::endl;
*a=*c;
std::cout << (a->insert(230)) << std::endl;
std::cout << (c->insert(433)) << std::endl;
e->printPretty();
std::cout << (b->remove(350)) << std::endl;
std::cout << (d->insert(166)) << std::endl;
std::cout << (e->remove(383)) << std::endl;
std::cout << (e->remove(233)) << std::endl;
std::cout << (b->insert(478)) << std::endl;
std::cout << (d->remove(166)) << std::endl;
std::cout << (c->insert(234)) << std::endl;
std::cout << (e->insert(350)) << std::endl;
std::cout << (c->remove(181)) << std::endl;
std::cout << (d->insert(478)) << std::endl;
std::cout << (b->insert(338)) << std::endl;
std::cout << (a->insert(445)) << std::endl;
std::cout << (c->remove(36)) << std::endl;
std::cout << (c->remove(435)) << std::endl;
std::cout << (a->insert(316)) << std::endl;
std::cout << (b->insert(233)) << std::endl;
std::cout << (c->insert(478)) << std::endl;
std::cout << (a->remove(488)) << std::endl;
std::cout << (c->insert(478)) << std::endl;
std::cout << (a->remove(117)) << std::endl;
c->printPretty();
std::cout << (d->remove(57)) << std::endl;
*b=*d;
*b=*e;
std::cout << (c->insert(376)) << std::endl;
std::cout << (b->remove(175)) << std::endl;
std::cout << (e->insert(376)) << std::endl;
*d=*a;
std::cout << (d->insert(433)) << std::endl;
std::cout << (b->remove(448)) << std::endl;
std::cout << (b->insert(350)) << std::endl;
std::cout << (a->insert(180)) << std::endl;
std::cout << (b->insert(154)) << std::endl;
std::cout << (b->insert(94)) << std::endl;
e->printPretty();
std::cout << (b->insert(94)) << std::endl;
std::cout << (d->remove(489)) << std::endl;
std::cout << (b->insert(409)) << std::endl;
d->printPretty();
std::cout << (a->insert(468)) << std::endl;
std::cout << (e->remove(376)) << std::endl;
std::cout << (e->insert(142)) << std::endl;
*b=*d;
b->printPretty();
std::cout << (e->remove(468)) << std::endl;
e->printPretty();
std::cout << (b->insert(67)) << std::endl;
std::cout << (e->remove(79)) << std::endl;
std::cout << (a->insert(299)) << std::endl;
std::cout << (c->insert(468)) << std::endl;
std::cout << (c->insert(324)) << std::endl;
std::cout << (e->remove(142)) << std::endl;
std::cout << (c->remove(433)) << std::endl;
std::cout << (c->remove(233)) << std::endl;
e->printPretty();
std::cout << (b->insert(33)) << std::endl;
b->printPretty();
*a=*a;
*c=*e;
std::cout << (e->insert(143)) << std::endl;
std::cout << (e->insert(287)) << std::endl;
std::cout << (e->remove(143)) << std::endl;
*b=*e;
std::cout << (b->remove(458)) << std::endl;
d->printPretty();
std::cout << (b->insert(285)) << std::endl;
*a=*b;
std::cout << (e->insert(418)) << std::endl;
c->printPretty();
std::cout << (a->insert(480)) << std::endl;
*d=*d;
std::cout << (d->remove(376)) << std::endl;
std::cout << (c->insert(350)) << std::endl;
std::cout << (e->insert(287)) << std::endl;
std::cout << (c->insert(350)) << std::endl;
std::cout << (c->remove(111)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << (d->remove(500)) << std::endl;
*b=*c;
std::cout << (a->insert(350)) << std::endl;
std::cout << (d->remove(15)) << std::endl;
std::cout << (e->remove(418)) << std::endl;
b->printPretty();
std::cout << (b->remove(341)) << std::endl;
std::cout << (b->insert(500)) << std::endl;
std::cout << (a->remove(478)) << std::endl;
*a=*b;
std::cout << (b->remove(478)) << std::endl;
std::cout << (e->insert(478)) << std::endl;
d->printPretty();
std::cout << (e->remove(350)) << std::endl;
std::cout << (b->remove(359)) << std::endl;
std::cout << (e->insert(287)) << std::endl;
std::cout << (e->insert(196)) << std::endl;
std::cout << (b->remove(500)) << std::endl;
std::cout << (b->insert(89)) << std::endl;
std::cout << (a->insert(350)) << std::endl;
std::cout << (b->remove(350)) << std::endl;
std::cout << (e->insert(475)) << std::endl;
std::cout << (e->insert(14)) << std::endl;
d->printPretty();
std::cout << (b->remove(437)) << std::endl;
e->printPretty();
std::cout << (a->remove(233)) << std::endl;
std::cout << (e->insert(287)) << std::endl;
*e=*a;
a->printPretty();
std::cout << (b->insert(89)) << std::endl;
std::cout << (a->insert(456)) << std::endl;
std::cout << (c->insert(474)) << std::endl;
*a=*c;
std::cout << (a->insert(205)) << std::endl;
std::cout << (b->remove(89)) << std::endl;
std::cout << (d->insert(433)) << std::endl;
*e=*a;
std::cout << (c->insert(474)) << std::endl;
*a=*b;
*e=*a;
std::cout << (d->insert(316)) << std::endl;
std::cout << (c->insert(478)) << std::endl;
*c=*a;
std::cout << (b->insert(189)) << std::endl;
std::cout << (e->insert(135)) << std::endl;
std::cout << (e->remove(135)) << std::endl;
*e=*e;
*e=*c;
std::cout << (e->remove(300)) << std::endl;
std::cout << (a->remove(418)) << std::endl;
a->printPretty();
*e=*b;
std::cout << (b->insert(189)) << std::endl;
std::cout << (c->insert(212)) << std::endl;
std::cout << (e->remove(109)) << std::endl;
std::cout << (c->remove(212)) << std::endl;
b->printPretty();
*d=*a;
*b=*b;
std::cout << (e->insert(189)) << std::endl;
c->printPretty();
*a=*c;
std::cout << (e->insert(25)) << std::endl;
std::cout << (e->insert(189)) << std::endl;
std::cout << (e->remove(269)) << std::endl;
c->printPretty();
std::cout << (c->remove(121)) << std::endl;
*e=*b;
std::cout << (a->remove(117)) << std::endl;
std::cout << (e->insert(189)) << std::endl;
std::cout << (e->remove(487)) << std::endl;
b->printPretty();
std::cout << (a->remove(2)) << std::endl;
std::cout << (a->remove(296)) << std::endl;
std::cout << (e->insert(399)) << std::endl;
*b=*d;
*d=*a;
std::cout << (e->insert(415)) << std::endl;
std::cout << (b->insert(180)) << std::endl;
std::cout << (d->insert(448)) << std::endl;
std::cout << (c->insert(196)) << std::endl;
std::cout << (e->insert(456)) << std::endl;
std::cout << (c->insert(45)) << std::endl;
d->printPretty();
*c=*b;
std::cout << (d->insert(448)) << std::endl;
std::cout << (d->insert(485)) << std::endl;
std::cout << (d->insert(202)) << std::endl;
std::cout << (d->insert(10)) << std::endl;
std::cout << (e->insert(473)) << std::endl;
std::cout << (c->remove(98)) << std::endl;
*a=*d;
*e=*e;
std::cout << (b->remove(180)) << std::endl;
*a=*c;
std::cout << (c->remove(28)) << std::endl;
std::cout << (c->insert(180)) << std::endl;
d->printPretty();
std::cout << (e->remove(47)) << std::endl;
c->printPretty();
std::cout << (c->remove(323)) << std::endl;
std::cout << (e->remove(232)) << std::endl;
std::cout << (d->insert(445)) << std::endl;
std::cout << (d->insert(1)) << std::endl;
std::cout << (d->insert(11)) << std::endl;
std::cout << (a->remove(24)) << std::endl;
std::cout << (c->remove(377)) << std::endl;
std::cout << (e->remove(290)) << std::endl;
std::cout << (b->insert(464)) << std::endl;
std::cout << (a->remove(256)) << std::endl;
std::cout << (e->remove(426)) << std::endl;
std::cout << (c->insert(191)) << std::endl;
std::cout << (a->insert(31)) << std::endl;
d->printPretty();
std::cout << (a->insert(98)) << std::endl;
std::cout << (e->insert(147)) << std::endl;
d->printPretty();
std::cout << (c->insert(484)) << std::endl;
std::cout << (a->remove(324)) << std::endl;
*b=*e;
std::cout << (d->remove(253)) << std::endl;
std::cout << (e->remove(420)) << std::endl;
std::cout << (d->insert(216)) << std::endl;
std::cout << (e->insert(415)) << std::endl;
*b=*e;
*c=*d;
e->printPretty();
std::cout << (a->insert(180)) << std::endl;
std::cout << (d->remove(1)) << std::endl;
std::cout << (c->remove(12)) << std::endl;
std::cout << (e->insert(456)) << std::endl;
std::cout << (b->insert(78)) << std::endl;
std::cout << (b->insert(360)) << std::endl;
std::cout << (a->remove(98)) << std::endl;
std::cout << (d->remove(216)) << std::endl;
std::cout << (b->remove(189)) << std::endl;
std::cout << (a->remove(321)) << std::endl;
std::cout << (b->insert(399)) << std::endl;
c->printPretty();
std::cout << (d->insert(465)) << std::endl;
std::cout << (e->remove(399)) << std::endl;
*e=*e;
*c=*a;
std::cout << (c->insert(246)) << std::endl;
std::cout << (e->remove(325)) << std::endl;
e->printPretty();
std::cout << (e->insert(189)) << std::endl;
std::cout << (d->insert(5)) << std::endl;
std::cout << (b->remove(456)) << std::endl;
*e=*b;
*b=*d;
d->printPretty();
std::cout << (e->insert(16)) << std::endl;
d->printPretty();
std::cout << (d->insert(485)) << std::endl;
b->printPretty();
*a=*d;
d->printPretty();
std::cout << (d->remove(202)) << std::endl;
std::cout << (d->remove(484)) << std::endl;
a->printPretty();
std::cout << (d->insert(497)) << std::endl;
std::cout << (c->remove(180)) << std::endl;
*c=*e;
std::cout << (d->insert(500)) << std::endl;
std::cout << (c->insert(473)) << std::endl;
std::cout << (c->insert(78)) << std::endl;
*e=*d;
c->printPretty();
*b=*e;
std::cout << (a->insert(263)) << std::endl;
std::cout << (c->insert(78)) << std::endl;
std::cout << (e->remove(224)) << std::endl;
*b=*a;
std::cout << (c->insert(344)) << std::endl;
std::cout << (d->insert(10)) << std::endl;
*a=*a;
*a=*d;
std::cout << (a->insert(213)) << std::endl;
std::cout << (d->remove(11)) << std::endl;
*c=*a;
*c=*b;
c->printPretty();
*b=*b;
std::cout << (e->remove(476)) << std::endl;
std::cout << (c->insert(11)) << std::endl;
b->printPretty();
*c=*d;
std::cout << (b->remove(109)) << std::endl;
*d=*e;
std::cout << (d->remove(497)) << std::endl;
std::cout << (e->insert(213)) << std::endl;
*a=*c;
std::cout << (d->remove(332)) << std::endl;
std::cout << (a->insert(407)) << std::endl;
std::cout << (c->insert(417)) << std::endl;
std::cout << (d->remove(11)) << std::endl;
std::cout << (a->insert(390)) << std::endl;
std::cout << (c->insert(485)) << std::endl;
std::cout << (d->remove(445)) << std::endl;
std::cout << (d->remove(386)) << std::endl;
std::cout << (b->insert(202)) << std::endl;
std::cout << (b->insert(235)) << std::endl;
std::cout << (d->remove(154)) << std::endl;
std::cout << (d->remove(225)) << std::endl;
d->printPretty();
a->printPretty();
b->printPretty();
std::cout << (e->insert(213)) << std::endl;
d->printPretty();
std::cout << (d->insert(423)) << std::endl;
std::cout << (e->remove(448)) << std::endl;
std::cout << (b->remove(43)) << std::endl;
*d=*d;
d->printPretty();
std::cout << (a->insert(500)) << std::endl;
*c=*b;
*c=*d;
*b=*c;
std::cout << (e->remove(21)) << std::endl;
*d=*b;
*b=*b;
std::cout << (e->insert(465)) << std::endl;
std::cout << (a->insert(4)) << std::endl;
std::cout << (b->remove(423)) << std::endl;
std::cout << (b->insert(465)) << std::endl;
*a=*e;
c->printPretty();
std::cout << (e->insert(317)) << std::endl;
*a=*c;
*a=*e;
*c=*e;
e->printPretty();
std::cout << (c->remove(11)) << std::endl;
std::cout << (a->remove(485)) << std::endl;
*a=*a;
std::cout << (e->insert(11)) << std::endl;
*d=*a;
std::cout << (c->remove(445)) << std::endl;
std::cout << (e->remove(480)) << std::endl;
std::cout << (d->insert(177)) << std::endl;
std::cout << (a->remove(11)) << std::endl;
c->printPretty();
std::cout << (b->insert(10)) << std::endl;
*d=*c;
std::cout << (e->insert(485)) << std::endl;
std::cout << (d->remove(317)) << std::endl;
std::cout << (a->remove(317)) << std::endl;
std::cout << (a->remove(261)) << std::endl;
std::cout << (b->remove(58)) << std::endl;
std::cout << (a->remove(398)) << std::endl;
std::cout << (c->remove(86)) << std::endl;
*a=*a;
std::cout << (b->remove(5)) << std::endl;
*a=*b;
std::cout << (c->insert(75)) << std::endl;
a->printPretty();
d->printPretty();
e->printPretty();
*c=*a;
std::cout << (a->insert(432)) << std::endl;
std::cout << (c->remove(485)) << std::endl;
std::cout << (b->insert(500)) << std::endl;
*d=*e;
std::cout << (c->remove(500)) << std::endl;
std::cout << (d->insert(10)) << std::endl;
std::cout << (c->insert(465)) << std::endl;
std::cout << (a->remove(500)) << std::endl;
std::cout << (b->insert(469)) << std::endl;
std::cout << (a->remove(297)) << std::endl;
std::cout << (a->remove(34)) << std::endl;
std::cout << (a->insert(465)) << std::endl;
std::cout << (b->insert(437)) << std::endl;
std::cout << (b->remove(437)) << std::endl;
std::cout << (a->remove(262)) << std::endl;
std::cout << (e->insert(497)) << std::endl;
std::cout << (d->insert(380)) << std::endl;
std::cout << (d->insert(445)) << std::endl;
std::cout << (e->remove(317)) << std::endl;
std::cout << (b->remove(485)) << std::endl;
std::cout << (e->insert(10)) << std::endl;
std::cout << (a->remove(448)) << std::endl;
std::cout << (d->remove(58)) << std::endl;
std::cout << (d->remove(437)) << std::endl;
std::cout << (d->insert(10)) << std::endl;
std::cout << (e->insert(10)) << std::endl;
e->printPretty();
std::cout << (d->remove(5)) << std::endl;
std::cout << (e->remove(465)) << std::endl;
std::cout << (c->remove(448)) << std::endl;
std::cout << (a->remove(22)) << std::endl;
std::cout << (c->insert(213)) << std::endl;
std::cout << (e->insert(440)) << std::endl;
std::cout << (a->insert(485)) << std::endl;
std::cout << (a->remove(280)) << std::endl;
c->printPretty();
std::cout << (d->remove(317)) << std::endl;
std::cout << (d->insert(213)) << std::endl;
*d=*a;
d->printPretty();
std::cout << (b->remove(412)) << std::endl;
*b=*b;
*e=*d;
std::cout << (b->insert(243)) << std::endl;
std::cout << (d->remove(432)) << std::endl;
e->printPretty();
std::cout << (d->insert(205)) << std::endl;
*e=*e;
std::cout << (a->insert(154)) << std::endl;
*c=*a;
e->printPretty();
std::cout << (b->insert(465)) << std::endl;
*b=*b;
e->printPretty();
std::cout << (a->insert(485)) << std::endl;
std::cout << (a->remove(355)) << std::endl;
std::cout << (e->insert(154)) << std::endl;
*d=*a;
std::cout << (a->remove(485)) << std::endl;
*b=*c;
b->printPretty();
std::cout << (a->insert(388)) << std::endl;
d->printPretty();
d->printPretty();
*a=*e;
*c=*d;
std::cout << (a->insert(375)) << std::endl;
std::cout << (a->insert(455)) << std::endl;
std::cout << (e->remove(405)) << std::endl;
std::cout << (e->insert(37)) << std::endl;
std::cout << (d->insert(432)) << std::endl;
std::cout << (e->insert(56)) << std::endl;
std::cout << (b->insert(465)) << std::endl;
*d=*c;
std::cout << (b->insert(465)) << std::endl;
std::cout << (e->insert(432)) << std::endl;
*e=*b;
*c=*d;
std::cout << (d->insert(111)) << std::endl;
std::cout << (c->remove(115)) << std::endl;
std::cout << (b->insert(465)) << std::endl;
d->printPretty();
std::cout << (c->insert(366)) << std::endl;
*c=*b;
std::cout << (a->insert(154)) << std::endl;
std::cout << (e->remove(10)) << std::endl;
std::cout << (e->remove(215)) << std::endl;
std::cout << (e->insert(243)) << std::endl;
std::cout << (c->insert(41)) << std::endl;
b->printPretty();
std::cout << (c->insert(154)) << std::endl;
std::cout << (a->insert(375)) << std::endl;
std::cout << (a->remove(465)) << std::endl;
std::cout << (d->remove(111)) << std::endl;
std::cout << (a->insert(418)) << std::endl;
std::cout << (a->remove(444)) << std::endl;
std::cout << (b->remove(432)) << std::endl;
std::cout << (c->insert(135)) << std::endl;
std::cout << (d->insert(453)) << std::endl;
std::cout << (a->remove(238)) << std::endl;
std::cout << (b->remove(10)) << std::endl;
std::cout << (b->remove(483)) << std::endl;
std::cout << (b->insert(154)) << std::endl;
*b=*d;
c->printPretty();
std::cout << (d->remove(78)) << std::endl;
std::cout << (c->remove(10)) << std::endl;
std::cout << (a->remove(431)) << std::endl;
d->printPretty();
*d=*e;
std::cout << (b->remove(10)) << std::endl;
std::cout << (b->insert(333)) << std::endl;
std::cout << (a->insert(154)) << std::endl;
*c=*c;
std::cout << (a->insert(404)) << std::endl;
*c=*e;
std::cout << (e->remove(243)) << std::endl;
d->printPretty();
*d=*a;
std::cout << (e->insert(432)) << std::endl;
std::cout << (b->remove(330)) << std::endl;
std::cout << (c->remove(100)) << std::endl;
*d=*e;
*a=*a;
*a=*e;
std::cout << (c->insert(432)) << std::endl;
std::cout << (a->remove(195)) << std::endl;
std::cout << (c->remove(465)) << std::endl;
std::cout << (a->remove(34)) << std::endl;
std::cout << (c->remove(168)) << std::endl;
std::cout << (a->insert(485)) << std::endl;
e->printPretty();
*b=*d;
*c=*e;
std::cout << (d->insert(485)) << std::endl;
std::cout << (c->insert(154)) << std::endl;
std::cout << (d->remove(465)) << std::endl;
std::cout << (c->insert(266)) << std::endl;
std::cout << (b->remove(403)) << std::endl;
std::cout << (b->remove(432)) << std::endl;
std::cout << (d->insert(356)) << std::endl;
std::cout << (a->insert(480)) << std::endl;
std::cout << (a->insert(480)) << std::endl;
std::cout << (e->insert(229)) << std::endl;
*a=*e;
a->printPretty();
b->printPretty();
*a=*e;
d->printPretty();
std::cout << (c->remove(485)) << std::endl;
d->printPretty();
*d=*c;
std::cout << (a->insert(465)) << std::endl;
*b=*a;
std::cout << (e->remove(123)) << std::endl;
std::cout << (e->insert(465)) << std::endl;
std::cout << (a->insert(31)) << std::endl;
std::cout << (e->insert(485)) << std::endl;
e->printPretty();
*c=*c;
std::cout << (c->insert(430)) << std::endl;
std::cout << (c->remove(9)) << std::endl;
std::cout << (c->remove(270)) << std::endl;
std::cout << (b->remove(27)) << std::endl;
std::cout << (c->remove(266)) << std::endl;
std::cout << (c->insert(76)) << std::endl;
e->printPretty();
c->printPretty();
std::cout << (b->insert(485)) << std::endl;
std::cout << (d->insert(278)) << std::endl;
std::cout << (a->insert(465)) << std::endl;
std::cout << (b->insert(465)) << std::endl;
std::cout << (d->remove(432)) << std::endl;
std::cout << (c->insert(430)) << std::endl;
std::cout << (b->remove(432)) << std::endl;
std::cout << (b->remove(465)) << std::endl;
std::cout << (a->remove(229)) << std::endl;
std::cout << (c->insert(76)) << std::endl;
*d=*a;
std::cout << (a->insert(154)) << std::endl;
return 0;
}
