#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
std::cout << (a->remove(129)) << std::endl;
*a=*b;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*b);
b->printPretty();
ScapegoatTree<int> *d=new ScapegoatTree<int>;
ScapegoatTree<int> *e=new ScapegoatTree<int>(*d);
*d=*e;
std::cout << (d->remove(465)) << std::endl;
*a=*c;
d->printPretty();
b->printPretty();
*a=*a;
std::cout << (d->insert(306)) << std::endl;
std::cout << (d->remove(182)) << std::endl;
c->printPretty();
std::cout << (d->remove(138)) << std::endl;
std::cout << (c->remove(423)) << std::endl;
*d=*d;
std::cout << (b->remove(409)) << std::endl;
*c=*c;
e->printPretty();
a->printPretty();
std::cout << (e->insert(31)) << std::endl;
std::cout << (d->insert(117)) << std::endl;
*a=*d;
std::cout << (d->remove(71)) << std::endl;
std::cout << (e->remove(426)) << std::endl;
std::cout << (c->insert(219)) << std::endl;
std::cout << (a->insert(117)) << std::endl;
std::cout << (e->remove(341)) << std::endl;
std::cout << (e->remove(31)) << std::endl;
std::cout << (e->remove(208)) << std::endl;
*c=*c;
std::cout << (c->insert(133)) << std::endl;
*b=*a;
std::cout << (a->insert(303)) << std::endl;
std::cout << (d->remove(364)) << std::endl;
c->printPretty();
d->printPretty();
*a=*a;
std::cout << (c->insert(449)) << std::endl;
std::cout << (d->insert(126)) << std::endl;
e->printPretty();
e->printPretty();
std::cout << (a->insert(306)) << std::endl;
std::cout << (e->remove(220)) << std::endl;
*e=*a;
std::cout << (c->remove(133)) << std::endl;
std::cout << (a->insert(460)) << std::endl;
*e=*e;
*b=*e;
*a=*d;
a->printPretty();
b->printPretty();
std::cout << (c->remove(470)) << std::endl;
std::cout << (d->remove(249)) << std::endl;
std::cout << (d->remove(354)) << std::endl;
std::cout << (b->remove(117)) << std::endl;
std::cout << (e->remove(371)) << std::endl;
std::cout << (e->remove(285)) << std::endl;
*d=*b;
std::cout << (c->remove(449)) << std::endl;
std::cout << (c->remove(88)) << std::endl;
*a=*b;
std::cout << (a->remove(97)) << std::endl;
std::cout << (e->insert(306)) << std::endl;
std::cout << (e->remove(36)) << std::endl;
std::cout << (d->remove(483)) << std::endl;
std::cout << (a->remove(236)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << (c->remove(219)) << std::endl;
std::cout << (d->insert(303)) << std::endl;
std::cout << (d->insert(303)) << std::endl;
std::cout << (d->remove(306)) << std::endl;
std::cout << (e->remove(148)) << std::endl;
std::cout << (a->remove(493)) << std::endl;
std::cout << (e->remove(306)) << std::endl;
*d=*a;
*d=*e;
std::cout << (e->remove(286)) << std::endl;
c->printPretty();
*c=*c;
std::cout << (e->insert(303)) << std::endl;
std::cout << (e->remove(344)) << std::endl;
std::cout << (d->insert(117)) << std::endl;
std::cout << (a->insert(345)) << std::endl;
std::cout << (d->remove(271)) << std::endl;
std::cout << (e->remove(331)) << std::endl;
std::cout << (b->remove(339)) << std::endl;
std::cout << (b->remove(306)) << std::endl;
*c=*e;
std::cout << (a->remove(297)) << std::endl;
std::cout << (a->insert(306)) << std::endl;
*e=*d;
std::cout << (c->insert(279)) << std::endl;
std::cout << (d->insert(376)) << std::endl;
std::cout << (c->remove(369)) << std::endl;
c->printPretty();
std::cout << (d->remove(117)) << std::endl;
*c=*e;
std::cout << (b->remove(202)) << std::endl;
std::cout << (d->remove(376)) << std::endl;
std::cout << (d->remove(303)) << std::endl;
*b=*e;
std::cout << (e->insert(435)) << std::endl;
std::cout << (e->remove(435)) << std::endl;
std::cout << (b->remove(496)) << std::endl;
std::cout << (b->insert(402)) << std::endl;
std::cout << (b->remove(79)) << std::endl;
c->printPretty();
std::cout << (b->remove(385)) << std::endl;
c->printPretty();
std::cout << (e->remove(303)) << std::endl;
std::cout << (a->remove(15)) << std::endl;
*d=*c;
std::cout << (a->remove(306)) << std::endl;
std::cout << (c->remove(117)) << std::endl;
std::cout << (d->remove(238)) << std::endl;
std::cout << (a->insert(392)) << std::endl;
d->printPretty();
e->printPretty();
std::cout << (b->insert(117)) << std::endl;
std::cout << (b->insert(402)) << std::endl;
std::cout << (d->insert(53)) << std::endl;
std::cout << (e->remove(475)) << std::endl;
std::cout << (d->insert(188)) << std::endl;
std::cout << (c->remove(484)) << std::endl;
*c=*d;
std::cout << (d->insert(420)) << std::endl;
std::cout << (b->remove(303)) << std::endl;
c->printPretty();
*b=*d;
std::cout << (b->insert(1)) << std::endl;
e->printPretty();
*e=*a;
c->printPretty();
b->printPretty();
std::cout << (b->remove(178)) << std::endl;
std::cout << (a->insert(363)) << std::endl;
std::cout << (e->remove(158)) << std::endl;
std::cout << (b->remove(53)) << std::endl;
std::cout << (b->insert(399)) << std::endl;
std::cout << (b->insert(117)) << std::endl;
std::cout << (c->remove(361)) << std::endl;
std::cout << (a->remove(392)) << std::endl;
std::cout << (c->remove(117)) << std::endl;
std::cout << (e->insert(345)) << std::endl;
a->printPretty();
std::cout << (b->remove(420)) << std::endl;
std::cout << (c->remove(188)) << std::endl;
*e=*c;
std::cout << (c->remove(358)) << std::endl;
*d=*c;
std::cout << (b->remove(460)) << std::endl;
std::cout << (e->insert(53)) << std::endl;
d->printPretty();
std::cout << (a->insert(345)) << std::endl;
*b=*a;
*a=*c;
std::cout << (a->insert(86)) << std::endl;
std::cout << (e->insert(69)) << std::endl;
std::cout << (a->insert(86)) << std::endl;
*a=*a;
std::cout << (b->remove(303)) << std::endl;
*d=*d;
std::cout << (b->insert(472)) << std::endl;
std::cout << (e->remove(490)) << std::endl;
std::cout << (b->remove(273)) << std::endl;
std::cout << (b->remove(345)) << std::endl;
*a=*d;
*a=*c;
std::cout << (a->insert(303)) << std::endl;
std::cout << (b->remove(363)) << std::endl;
std::cout << (d->remove(394)) << std::endl;
std::cout << (e->insert(476)) << std::endl;
std::cout << (a->insert(195)) << std::endl;
std::cout << (b->insert(472)) << std::endl;
std::cout << (a->remove(303)) << std::endl;
std::cout << (d->remove(348)) << std::endl;
std::cout << (e->insert(69)) << std::endl;
*a=*c;
e->printPretty();
c->printPretty();
std::cout << (c->insert(303)) << std::endl;
c->printPretty();
std::cout << (e->remove(476)) << std::endl;
std::cout << (a->insert(267)) << std::endl;
std::cout << (d->insert(303)) << std::endl;
std::cout << (d->insert(53)) << std::endl;
std::cout << (b->remove(282)) << std::endl;
std::cout << (e->insert(303)) << std::endl;
*e=*c;
std::cout << (d->insert(220)) << std::endl;
std::cout << (b->insert(472)) << std::endl;
d->printPretty();
c->printPretty();
e->printPretty();
a->printPretty();
std::cout << (d->remove(103)) << std::endl;
std::cout << (c->remove(42)) << std::endl;
std::cout << (a->remove(191)) << std::endl;
std::cout << (c->remove(425)) << std::endl;
a->printPretty();
std::cout << (d->remove(473)) << std::endl;
std::cout << (e->remove(303)) << std::endl;
std::cout << (d->remove(458)) << std::endl;
*c=*b;
std::cout << (a->remove(53)) << std::endl;
d->printPretty();
std::cout << (e->remove(53)) << std::endl;
*a=*c;
std::cout << (c->remove(207)) << std::endl;
std::cout << (c->insert(472)) << std::endl;
std::cout << (d->remove(457)) << std::endl;
std::cout << (a->insert(472)) << std::endl;
std::cout << (b->insert(240)) << std::endl;
std::cout << (b->insert(272)) << std::endl;
std::cout << (b->insert(472)) << std::endl;
d->printPretty();
std::cout << (c->remove(78)) << std::endl;
std::cout << (b->remove(272)) << std::endl;
c->printPretty();
*c=*b;
std::cout << (d->insert(493)) << std::endl;
std::cout << (d->remove(240)) << std::endl;
std::cout << (b->insert(472)) << std::endl;
std::cout << (d->insert(488)) << std::endl;
std::cout << (b->remove(294)) << std::endl;
std::cout << (e->insert(462)) << std::endl;
std::cout << (a->remove(472)) << std::endl;
std::cout << (c->insert(107)) << std::endl;
std::cout << (b->insert(6)) << std::endl;
b->printPretty();
std::cout << (c->remove(324)) << std::endl;
*e=*d;
c->printPretty();
std::cout << (c->remove(86)) << std::endl;
*d=*d;
std::cout << (c->remove(100)) << std::endl;
*e=*d;
std::cout << (b->insert(6)) << std::endl;
std::cout << (b->remove(306)) << std::endl;
std::cout << (d->insert(220)) << std::endl;
*a=*c;
std::cout << (c->insert(107)) << std::endl;
std::cout << (a->remove(404)) << std::endl;
*e=*e;
*e=*b;
std::cout << (e->remove(240)) << std::endl;
std::cout << (d->remove(303)) << std::endl;
std::cout << (d->remove(448)) << std::endl;
std::cout << (d->remove(473)) << std::endl;
std::cout << (d->insert(231)) << std::endl;
std::cout << (e->insert(472)) << std::endl;
std::cout << (d->remove(219)) << std::endl;
d->printPretty();
std::cout << (e->insert(466)) << std::endl;
std::cout << (a->remove(73)) << std::endl;
std::cout << (b->remove(472)) << std::endl;
std::cout << (a->remove(240)) << std::endl;
std::cout << (d->remove(220)) << std::endl;
a->printPretty();
std::cout << (a->remove(386)) << std::endl;
std::cout << (b->insert(49)) << std::endl;
std::cout << (a->remove(107)) << std::endl;
std::cout << (e->insert(309)) << std::endl;
std::cout << (a->insert(110)) << std::endl;
std::cout << (e->remove(6)) << std::endl;
std::cout << (e->insert(472)) << std::endl;
std::cout << (e->remove(266)) << std::endl;
std::cout << (e->remove(309)) << std::endl;
std::cout << (c->remove(239)) << std::endl;
std::cout << (e->remove(324)) << std::endl;
std::cout << (e->remove(466)) << std::endl;
*a=*c;
std::cout << (e->remove(135)) << std::endl;
std::cout << (a->insert(393)) << std::endl;
std::cout << (c->insert(472)) << std::endl;
d->printPretty();
std::cout << (d->remove(32)) << std::endl;
b->printPretty();
std::cout << (e->insert(41)) << std::endl;
std::cout << (d->insert(488)) << std::endl;
std::cout << (c->insert(240)) << std::endl;
std::cout << (b->remove(6)) << std::endl;
std::cout << (d->remove(423)) << std::endl;
b->printPretty();
std::cout << (c->remove(357)) << std::endl;
std::cout << (d->insert(298)) << std::endl;
std::cout << (b->remove(115)) << std::endl;
std::cout << (a->insert(472)) << std::endl;
std::cout << (b->insert(240)) << std::endl;
std::cout << (a->remove(472)) << std::endl;
*b=*b;
std::cout << (e->insert(472)) << std::endl;
std::cout << (e->insert(472)) << std::endl;
std::cout << (c->insert(107)) << std::endl;
b->printPretty();
std::cout << (c->remove(182)) << std::endl;
std::cout << (d->remove(489)) << std::endl;
std::cout << (d->insert(450)) << std::endl;
std::cout << (b->remove(138)) << std::endl;
std::cout << (b->insert(120)) << std::endl;
std::cout << (d->remove(121)) << std::endl;
std::cout << (c->insert(266)) << std::endl;
d->printPretty();
std::cout << (d->remove(188)) << std::endl;
std::cout << (d->insert(469)) << std::endl;
d->printPretty();
b->printPretty();
a->printPretty();
e->printPretty();
std::cout << (c->remove(160)) << std::endl;
std::cout << (e->insert(207)) << std::endl;
e->printPretty();
e->printPretty();
c->printPretty();
std::cout << (a->insert(240)) << std::endl;
std::cout << (e->remove(41)) << std::endl;
std::cout << (e->insert(472)) << std::endl;
std::cout << (e->remove(464)) << std::endl;
std::cout << (e->insert(207)) << std::endl;
std::cout << (b->remove(283)) << std::endl;
d->printPretty();
std::cout << (e->remove(38)) << std::endl;
std::cout << (d->insert(353)) << std::endl;
std::cout << (e->remove(472)) << std::endl;
std::cout << (d->insert(469)) << std::endl;
*d=*a;
*d=*b;
std::cout << (d->insert(49)) << std::endl;
std::cout << (c->remove(325)) << std::endl;
std::cout << (a->remove(240)) << std::endl;
b->printPretty();
std::cout << (c->insert(472)) << std::endl;
d->printPretty();
std::cout << (d->remove(327)) << std::endl;
*e=*e;
e->printPretty();
*d=*e;
d->printPretty();
std::cout << (a->insert(393)) << std::endl;
std::cout << (b->insert(108)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (a->insert(391)) << std::endl;
*a=*e;
*c=*e;
std::cout << (e->insert(207)) << std::endl;
std::cout << (c->insert(64)) << std::endl;
std::cout << (e->remove(200)) << std::endl;
b->printPretty();
std::cout << (a->remove(116)) << std::endl;
std::cout << (b->insert(49)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (b->remove(458)) << std::endl;
a->printPretty();
d->printPretty();
std::cout << (c->insert(42)) << std::endl;
*c=*e;
*b=*c;
std::cout << (e->remove(200)) << std::endl;
std::cout << (a->remove(409)) << std::endl;
std::cout << (e->remove(207)) << std::endl;
std::cout << (c->insert(207)) << std::endl;
a->printPretty();
std::cout << (c->insert(207)) << std::endl;
std::cout << (c->remove(207)) << std::endl;
*b=*d;
*d=*a;
std::cout << (d->remove(207)) << std::endl;
std::cout << (a->insert(428)) << std::endl;
d->printPretty();
std::cout << (b->remove(207)) << std::endl;
std::cout << (e->insert(469)) << std::endl;
std::cout << (a->insert(207)) << std::endl;
c->printPretty();
*a=*c;
std::cout << (c->insert(87)) << std::endl;
*e=*d;
std::cout << (e->insert(400)) << std::endl;
std::cout << (c->remove(87)) << std::endl;
*e=*a;
std::cout << (a->remove(302)) << std::endl;
std::cout << (a->insert(303)) << std::endl;
std::cout << (a->insert(303)) << std::endl;
std::cout << (a->insert(303)) << std::endl;
std::cout << (c->insert(94)) << std::endl;
std::cout << (b->insert(323)) << std::endl;
std::cout << (c->insert(436)) << std::endl;
std::cout << (e->insert(39)) << std::endl;
*e=*d;
std::cout << (d->remove(61)) << std::endl;
std::cout << (d->insert(269)) << std::endl;
std::cout << (a->insert(208)) << std::endl;
a->printPretty();
std::cout << (a->remove(483)) << std::endl;
b->printPretty();
std::cout << (b->remove(323)) << std::endl;
*a=*b;
e->printPretty();
std::cout << (c->insert(94)) << std::endl;
*a=*d;
std::cout << (d->insert(167)) << std::endl;
std::cout << (c->remove(436)) << std::endl;
std::cout << (a->insert(269)) << std::endl;
std::cout << (e->insert(434)) << std::endl;
std::cout << (d->remove(38)) << std::endl;
std::cout << (a->remove(269)) << std::endl;
std::cout << (c->insert(274)) << std::endl;
d->printPretty();
std::cout << (e->insert(434)) << std::endl;
d->printPretty();
std::cout << (e->insert(445)) << std::endl;
std::cout << (c->remove(221)) << std::endl;
std::cout << (b->insert(213)) << std::endl;
*b=*a;
std::cout << (c->insert(420)) << std::endl;
std::cout << (a->insert(487)) << std::endl;
*e=*d;
std::cout << (b->remove(254)) << std::endl;
std::cout << (d->remove(269)) << std::endl;
*a=*a;
c->printPretty();
std::cout << (b->remove(101)) << std::endl;
std::cout << (a->remove(487)) << std::endl;
c->printPretty();
*a=*b;
*c=*b;
std::cout << (b->insert(322)) << std::endl;
std::cout << (c->remove(297)) << std::endl;
std::cout << (e->remove(269)) << std::endl;
*d=*b;
std::cout << (b->remove(449)) << std::endl;
std::cout << (b->insert(374)) << std::endl;
std::cout << (e->insert(157)) << std::endl;
*d=*e;
std::cout << (d->insert(167)) << std::endl;
c->printPretty();
std::cout << (d->insert(167)) << std::endl;
std::cout << (e->insert(167)) << std::endl;
std::cout << (b->remove(26)) << std::endl;
std::cout << (e->insert(474)) << std::endl;
a->printPretty();
std::cout << (e->remove(167)) << std::endl;
std::cout << (e->insert(155)) << std::endl;
std::cout << (d->insert(161)) << std::endl;
c->printPretty();
std::cout << (d->remove(161)) << std::endl;
*c=*d;
std::cout << (d->insert(159)) << std::endl;
std::cout << (d->insert(157)) << std::endl;
std::cout << (d->insert(420)) << std::endl;
std::cout << (b->insert(322)) << std::endl;
std::cout << (c->remove(401)) << std::endl;
std::cout << (e->remove(155)) << std::endl;
*c=*b;
*b=*c;
std::cout << (d->remove(359)) << std::endl;
std::cout << (b->remove(347)) << std::endl;
*d=*b;
d->printPretty();
std::cout << (e->remove(157)) << std::endl;
std::cout << (d->insert(62)) << std::endl;
std::cout << (a->insert(27)) << std::endl;
std::cout << (a->insert(27)) << std::endl;
c->printPretty();
std::cout << (b->remove(374)) << std::endl;
std::cout << (b->remove(262)) << std::endl;
std::cout << (c->insert(118)) << std::endl;
std::cout << (a->insert(77)) << std::endl;
std::cout << (e->remove(258)) << std::endl;
*d=*b;
std::cout << (c->insert(419)) << std::endl;
std::cout << (c->insert(202)) << std::endl;
std::cout << (e->insert(233)) << std::endl;
a->printPretty();
std::cout << (c->insert(202)) << std::endl;
std::cout << (a->remove(77)) << std::endl;
std::cout << (e->remove(136)) << std::endl;
*c=*d;
std::cout << (c->insert(322)) << std::endl;
*e=*d;
std::cout << (e->insert(499)) << std::endl;
std::cout << (e->insert(32)) << std::endl;
b->printPretty();
std::cout << (e->remove(322)) << std::endl;
std::cout << (c->remove(322)) << std::endl;
std::cout << (a->remove(497)) << std::endl;
*c=*d;
std::cout << (e->insert(343)) << std::endl;
a->printPretty();
std::cout << (a->insert(65)) << std::endl;
std::cout << (d->remove(58)) << std::endl;
std::cout << (c->remove(322)) << std::endl;
std::cout << (a->remove(408)) << std::endl;
std::cout << (d->remove(149)) << std::endl;
std::cout << (a->remove(52)) << std::endl;
std::cout << (d->insert(322)) << std::endl;
std::cout << (a->insert(387)) << std::endl;
std::cout << (d->insert(245)) << std::endl;
*e=*a;
std::cout << (e->remove(360)) << std::endl;
std::cout << (a->remove(65)) << std::endl;
std::cout << (d->remove(255)) << std::endl;
std::cout << (a->insert(27)) << std::endl;
std::cout << (d->remove(359)) << std::endl;
std::cout << (d->insert(322)) << std::endl;
*c=*e;
std::cout << (a->insert(109)) << std::endl;
std::cout << (c->insert(472)) << std::endl;
std::cout << (a->insert(27)) << std::endl;
std::cout << (b->insert(245)) << std::endl;
b->printPretty();
*c=*d;
std::cout << (d->remove(322)) << std::endl;
std::cout << (a->insert(109)) << std::endl;
std::cout << (a->remove(387)) << std::endl;
std::cout << (b->insert(129)) << std::endl;
*e=*e;
std::cout << (c->insert(245)) << std::endl;
std::cout << (a->insert(6)) << std::endl;
e->printPretty();
std::cout << (d->remove(15)) << std::endl;
d->printPretty();
std::cout << (b->insert(477)) << std::endl;
std::cout << (d->remove(245)) << std::endl;
std::cout << (a->insert(256)) << std::endl;
std::cout << (c->remove(127)) << std::endl;
std::cout << (e->insert(439)) << std::endl;
std::cout << (a->insert(267)) << std::endl;
std::cout << (e->insert(27)) << std::endl;
std::cout << (e->insert(65)) << std::endl;
*b=*b;
std::cout << (d->insert(317)) << std::endl;
std::cout << (e->insert(59)) << std::endl;
std::cout << (e->insert(291)) << std::endl;
std::cout << (b->remove(69)) << std::endl;
std::cout << (b->insert(140)) << std::endl;
std::cout << (b->remove(499)) << std::endl;
e->printPretty();
std::cout << (b->insert(129)) << std::endl;
std::cout << (e->remove(29)) << std::endl;
std::cout << (b->remove(245)) << std::endl;
std::cout << (c->remove(322)) << std::endl;
std::cout << (e->insert(479)) << std::endl;
std::cout << (a->remove(109)) << std::endl;
*b=*d;
std::cout << (b->remove(317)) << std::endl;
std::cout << (a->insert(259)) << std::endl;
e->printPretty();
std::cout << (a->remove(459)) << std::endl;
std::cout << (d->remove(317)) << std::endl;
c->printPretty();
std::cout << (c->remove(499)) << std::endl;
std::cout << (c->remove(245)) << std::endl;
std::cout << (b->remove(110)) << std::endl;
std::cout << (c->remove(491)) << std::endl;
std::cout << (b->remove(176)) << std::endl;
std::cout << (a->insert(259)) << std::endl;
std::cout << (a->insert(4)) << std::endl;
std::cout << (c->remove(127)) << std::endl;
*a=*a;
std::cout << (e->insert(138)) << std::endl;
d->printPretty();
std::cout << (e->insert(299)) << std::endl;
std::cout << (a->insert(130)) << std::endl;
std::cout << (e->remove(479)) << std::endl;
e->printPretty();
std::cout << (e->insert(393)) << std::endl;
*d=*b;
c->printPretty();
b->printPretty();
std::cout << (a->insert(390)) << std::endl;
std::cout << (e->insert(359)) << std::endl;
*b=*e;
std::cout << (c->insert(41)) << std::endl;
std::cout << (a->remove(27)) << std::endl;
*c=*b;
std::cout << (c->remove(138)) << std::endl;
std::cout << (c->insert(18)) << std::endl;
*b=*b;
e->printPretty();
std::cout << (b->insert(387)) << std::endl;
*e=*e;
e->printPretty();
std::cout << (d->insert(284)) << std::endl;
std::cout << (d->insert(443)) << std::endl;
b->printPretty();
std::cout << (a->remove(256)) << std::endl;
std::cout << (b->remove(442)) << std::endl;
std::cout << (a->remove(390)) << std::endl;
std::cout << (e->insert(393)) << std::endl;
*c=*e;
std::cout << (c->remove(429)) << std::endl;
*c=*b;
std::cout << (b->insert(138)) << std::endl;
*d=*d;
std::cout << (c->remove(436)) << std::endl;
b->printPretty();
std::cout << (b->remove(291)) << std::endl;
std::cout << (c->remove(156)) << std::endl;
std::cout << (b->remove(108)) << std::endl;
std::cout << (e->insert(442)) << std::endl;
c->printPretty();
std::cout << (d->insert(443)) << std::endl;
std::cout << (a->remove(259)) << std::endl;
b->printPretty();
std::cout << (d->remove(464)) << std::endl;
std::cout << (e->insert(211)) << std::endl;
std::cout << (a->insert(4)) << std::endl;
a->printPretty();
*c=*a;
b->printPretty();
std::cout << (d->remove(443)) << std::endl;
std::cout << (c->insert(454)) << std::endl;
std::cout << (b->remove(492)) << std::endl;
std::cout << (c->remove(214)) << std::endl;
std::cout << (e->insert(138)) << std::endl;
std::cout << (b->remove(387)) << std::endl;
std::cout << (a->remove(41)) << std::endl;
std::cout << (d->remove(284)) << std::endl;
std::cout << (e->remove(245)) << std::endl;
d->printPretty();
std::cout << (c->remove(20)) << std::endl;
std::cout << (e->remove(211)) << std::endl;
std::cout << (a->remove(290)) << std::endl;
*b=*e;
std::cout << (d->insert(35)) << std::endl;
c->printPretty();
std::cout << (e->remove(291)) << std::endl;
std::cout << (b->insert(135)) << std::endl;
*e=*b;
std::cout << (d->insert(169)) << std::endl;
std::cout << (c->remove(267)) << std::endl;
*a=*d;
std::cout << (e->remove(442)) << std::endl;
std::cout << (e->remove(65)) << std::endl;
d->printPretty();
std::cout << (b->remove(326)) << std::endl;
std::cout << (c->remove(124)) << std::endl;
*a=*d;
std::cout << (b->remove(381)) << std::endl;
std::cout << (e->insert(135)) << std::endl;
b->printPretty();
std::cout << (b->insert(348)) << std::endl;
b->printPretty();
e->printPretty();
std::cout << (b->insert(65)) << std::endl;
std::cout << (d->remove(35)) << std::endl;
std::cout << (b->insert(457)) << std::endl;
std::cout << (a->remove(164)) << std::endl;
d->printPretty();
d->printPretty();
std::cout << (a->remove(35)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (d->remove(325)) << std::endl;
std::cout << (d->remove(132)) << std::endl;
*b=*e;
std::cout << (c->insert(6)) << std::endl;
d->printPretty();
std::cout << (b->remove(288)) << std::endl;
std::cout << (d->remove(169)) << std::endl;
*d=*a;
std::cout << (b->insert(264)) << std::endl;
std::cout << (e->insert(487)) << std::endl;
c->printPretty();
*d=*c;
c->printPretty();
std::cout << (b->insert(27)) << std::endl;
std::cout << (a->insert(13)) << std::endl;
std::cout << (b->insert(354)) << std::endl;
std::cout << (e->insert(27)) << std::endl;
std::cout << (a->insert(169)) << std::endl;
std::cout << (e->insert(387)) << std::endl;
std::cout << (b->insert(439)) << std::endl;
std::cout << (c->remove(161)) << std::endl;
*c=*e;
std::cout << (a->remove(437)) << std::endl;
e->printPretty();
*b=*c;
std::cout << (d->insert(454)) << std::endl;
std::cout << (c->insert(439)) << std::endl;
*d=*e;
std::cout << (c->insert(474)) << std::endl;
std::cout << (e->remove(207)) << std::endl;
std::cout << (e->remove(135)) << std::endl;
std::cout << (e->remove(291)) << std::endl;
std::cout << (e->remove(169)) << std::endl;
std::cout << (e->insert(236)) << std::endl;
std::cout << (c->insert(291)) << std::endl;
std::cout << (e->insert(359)) << std::endl;
std::cout << (d->remove(299)) << std::endl;
std::cout << (b->remove(340)) << std::endl;
std::cout << (c->insert(363)) << std::endl;
std::cout << (d->remove(404)) << std::endl;
*c=*e;
a->printPretty();
std::cout << (c->remove(362)) << std::endl;
std::cout << (e->insert(487)) << std::endl;
std::cout << (a->insert(13)) << std::endl;
*c=*b;
*b=*e;
std::cout << (e->remove(359)) << std::endl;
std::cout << (a->insert(61)) << std::endl;
std::cout << (c->remove(99)) << std::endl;
std::cout << (e->insert(198)) << std::endl;
return 0;
}