#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
*a=*a;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*b);
ScapegoatTree<int> *d=new ScapegoatTree<int>;
ScapegoatTree<int> *e=new ScapegoatTree<int>(*c);
std::cout << (c->insert(359)) << std::endl;
*b=*a;
*e=*b;
b->printPretty();
std::cout << (a->insert(63)) << std::endl;
std::cout << (d->insert(5)) << std::endl;
std::cout << (c->remove(359)) << std::endl;
*d=*d;
*e=*c;
std::cout << (b->insert(129)) << std::endl;
a->printPretty();
std::cout << (e->remove(362)) << std::endl;
std::cout << (c->insert(232)) << std::endl;
*d=*d;
std::cout << (c->insert(418)) << std::endl;
std::cout << (a->remove(63)) << std::endl;
c->printPretty();
b->printPretty();
*e=*d;
std::cout << (e->insert(494)) << std::endl;
*c=*d;
std::cout << (e->insert(361)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (a->remove(238)) << std::endl;
std::cout << (a->remove(399)) << std::endl;
e->printPretty();
std::cout << (b->remove(365)) << std::endl;
std::cout << (e->remove(361)) << std::endl;
std::cout << (b->insert(422)) << std::endl;
std::cout << (c->insert(5)) << std::endl;
std::cout << (b->remove(422)) << std::endl;
std::cout << (d->insert(5)) << std::endl;
*c=*e;
*b=*d;
d->printPretty();
std::cout << (b->insert(345)) << std::endl;
std::cout << (c->insert(482)) << std::endl;
std::cout << (d->insert(102)) << std::endl;
std::cout << (d->insert(450)) << std::endl;
e->printPretty();
std::cout << (b->insert(5)) << std::endl;
*d=*c;
std::cout << (e->insert(143)) << std::endl;
std::cout << (e->insert(5)) << std::endl;
std::cout << (d->remove(494)) << std::endl;
c->printPretty();
std::cout << (a->remove(451)) << std::endl;
a->printPretty();
std::cout << (e->insert(494)) << std::endl;
b->printPretty();
e->printPretty();
*d=*b;
std::cout << (d->remove(267)) << std::endl;
std::cout << (a->remove(143)) << std::endl;
std::cout << (b->remove(19)) << std::endl;
std::cout << (a->insert(116)) << std::endl;
*e=*d;
std::cout << (a->insert(3)) << std::endl;
std::cout << (d->insert(5)) << std::endl;
std::cout << (e->insert(115)) << std::endl;
a->printPretty();
std::cout << (c->insert(42)) << std::endl;
a->printPretty();
std::cout << (b->remove(108)) << std::endl;
std::cout << (d->remove(67)) << std::endl;
std::cout << (d->insert(162)) << std::endl;
std::cout << (d->insert(345)) << std::endl;
std::cout << (c->insert(482)) << std::endl;
std::cout << (c->insert(491)) << std::endl;
std::cout << (e->remove(345)) << std::endl;
std::cout << (b->insert(400)) << std::endl;
std::cout << (d->insert(345)) << std::endl;
std::cout << (a->insert(3)) << std::endl;
a->printPretty();
std::cout << (e->remove(356)) << std::endl;
std::cout << (c->insert(482)) << std::endl;
std::cout << (b->insert(251)) << std::endl;
d->printPretty();
*b=*d;
std::cout << (b->insert(5)) << std::endl;
std::cout << (a->remove(3)) << std::endl;
d->printPretty();
e->printPretty();
std::cout << (a->remove(116)) << std::endl;
c->printPretty();
std::cout << (d->remove(162)) << std::endl;
std::cout << (d->insert(345)) << std::endl;
b->printPretty();
std::cout << (c->remove(361)) << std::endl;
std::cout << (e->insert(275)) << std::endl;
*d=*e;
std::cout << (e->remove(154)) << std::endl;
std::cout << (c->insert(5)) << std::endl;
*c=*b;
*a=*a;
std::cout << (c->insert(5)) << std::endl;
*c=*e;
std::cout << (d->remove(146)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (e->remove(275)) << std::endl;
c->printPretty();
*e=*c;
a->printPretty();
std::cout << (c->insert(98)) << std::endl;
std::cout << (b->insert(232)) << std::endl;
std::cout << (c->insert(275)) << std::endl;
std::cout << (d->remove(5)) << std::endl;
std::cout << (a->remove(80)) << std::endl;
c->printPretty();
std::cout << (c->insert(294)) << std::endl;
std::cout << (d->insert(115)) << std::endl;
std::cout << (b->insert(5)) << std::endl;
std::cout << (b->remove(405)) << std::endl;
*e=*e;
std::cout << (d->remove(213)) << std::endl;
std::cout << (a->insert(17)) << std::endl;
d->printPretty();
std::cout << (c->remove(5)) << std::endl;
std::cout << (e->remove(275)) << std::endl;
std::cout << (d->insert(275)) << std::endl;
c->printPretty();
c->printPretty();
*a=*b;
std::cout << (a->remove(75)) << std::endl;
e->printPretty();
std::cout << (a->remove(9)) << std::endl;
std::cout << (b->remove(197)) << std::endl;
a->printPretty();
std::cout << (b->remove(345)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << (e->remove(115)) << std::endl;
std::cout << (a->remove(232)) << std::endl;
std::cout << (a->remove(397)) << std::endl;
std::cout << (d->remove(237)) << std::endl;
std::cout << (a->remove(115)) << std::endl;
*a=*e;
std::cout << (b->insert(162)) << std::endl;
std::cout << (c->insert(163)) << std::endl;
std::cout << (a->insert(182)) << std::endl;
std::cout << (a->insert(5)) << std::endl;
*b=*b;
b->printPretty();
std::cout << (e->insert(5)) << std::endl;
std::cout << (c->insert(73)) << std::endl;
std::cout << (c->insert(307)) << std::endl;
std::cout << (b->insert(5)) << std::endl;
std::cout << (e->remove(77)) << std::endl;
std::cout << (e->insert(37)) << std::endl;
std::cout << (b->insert(5)) << std::endl;
std::cout << (c->remove(163)) << std::endl;
std::cout << (e->insert(8)) << std::endl;
std::cout << (e->insert(303)) << std::endl;
std::cout << (b->remove(232)) << std::endl;
*e=*e;
std::cout << (d->insert(322)) << std::endl;
d->printPretty();
std::cout << (b->remove(70)) << std::endl;
std::cout << (d->remove(322)) << std::endl;
std::cout << (d->insert(275)) << std::endl;
std::cout << (d->remove(464)) << std::endl;
std::cout << (c->insert(356)) << std::endl;
std::cout << (e->remove(435)) << std::endl;
*c=*b;
e->printPretty();
std::cout << (e->remove(270)) << std::endl;
std::cout << (d->insert(275)) << std::endl;
std::cout << (a->insert(317)) << std::endl;
std::cout << (a->remove(243)) << std::endl;
std::cout << (c->insert(162)) << std::endl;
*c=*c;
c->printPretty();
std::cout << (d->remove(115)) << std::endl;
*b=*d;
std::cout << (e->remove(5)) << std::endl;
std::cout << (e->remove(37)) << std::endl;
std::cout << (c->remove(331)) << std::endl;
std::cout << (c->insert(162)) << std::endl;
std::cout << (c->remove(162)) << std::endl;
d->printPretty();
std::cout << (c->insert(410)) << std::endl;
*b=*c;
std::cout << (d->insert(75)) << std::endl;
std::cout << (b->insert(410)) << std::endl;
std::cout << (e->remove(495)) << std::endl;
std::cout << (a->remove(5)) << std::endl;
std::cout << (c->insert(410)) << std::endl;
std::cout << (b->remove(427)) << std::endl;
*a=*a;
std::cout << (a->remove(182)) << std::endl;
std::cout << (d->insert(75)) << std::endl;
std::cout << (e->remove(8)) << std::endl;
std::cout << (e->remove(133)) << std::endl;
std::cout << (c->remove(416)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << (e->remove(14)) << std::endl;
std::cout << (c->insert(410)) << std::endl;
std::cout << (d->remove(204)) << std::endl;
std::cout << (b->remove(410)) << std::endl;
std::cout << (c->remove(111)) << std::endl;
a->printPretty();
std::cout << (b->remove(212)) << std::endl;
std::cout << (b->insert(369)) << std::endl;
std::cout << (d->remove(75)) << std::endl;
std::cout << (c->remove(410)) << std::endl;
*a=*b;
*b=*b;
std::cout << (e->remove(303)) << std::endl;
std::cout << (c->insert(5)) << std::endl;
std::cout << (b->insert(422)) << std::endl;
a->printPretty();
std::cout << (b->insert(369)) << std::endl;
std::cout << (a->remove(461)) << std::endl;
e->printPretty();
std::cout << (a->insert(369)) << std::endl;
*b=*d;
std::cout << (c->remove(490)) << std::endl;
a->printPretty();
std::cout << (d->remove(15)) << std::endl;
b->printPretty();
e->printPretty();
std::cout << (c->remove(212)) << std::endl;
std::cout << (c->remove(5)) << std::endl;
std::cout << (a->insert(369)) << std::endl;
e->printPretty();
d->printPretty();
std::cout << (d->remove(276)) << std::endl;
std::cout << (a->remove(5)) << std::endl;
*d=*c;
std::cout << (b->insert(490)) << std::endl;
c->printPretty();
std::cout << (d->remove(336)) << std::endl;
std::cout << (e->insert(159)) << std::endl;
std::cout << (a->insert(369)) << std::endl;
*e=*a;
std::cout << (a->insert(316)) << std::endl;
std::cout << (a->remove(316)) << std::endl;
std::cout << (b->remove(432)) << std::endl;
b->printPretty();
std::cout << (e->insert(369)) << std::endl;
*b=*b;
*e=*d;
std::cout << (c->remove(352)) << std::endl;
*b=*d;
std::cout << (e->insert(353)) << std::endl;
std::cout << (c->insert(334)) << std::endl;
std::cout << (c->remove(40)) << std::endl;
*a=*b;
std::cout << (d->insert(150)) << std::endl;
std::cout << (d->insert(91)) << std::endl;
a->printPretty();
std::cout << (d->insert(212)) << std::endl;
*d=*a;
std::cout << (c->insert(334)) << std::endl;
std::cout << (e->insert(353)) << std::endl;
std::cout << (e->remove(353)) << std::endl;
c->printPretty();
std::cout << (c->insert(334)) << std::endl;
b->printPretty();
std::cout << (a->remove(207)) << std::endl;
std::cout << (c->insert(97)) << std::endl;
*e=*d;
a->printPretty();
std::cout << (d->insert(215)) << std::endl;
*a=*a;
c->printPretty();
std::cout << (c->insert(97)) << std::endl;
std::cout << (e->insert(376)) << std::endl;
std::cout << (d->remove(215)) << std::endl;
std::cout << (a->insert(113)) << std::endl;
std::cout << (c->remove(493)) << std::endl;
*c=*d;
std::cout << (a->remove(487)) << std::endl;
std::cout << (a->remove(126)) << std::endl;
*c=*d;
std::cout << (e->insert(376)) << std::endl;
std::cout << (d->insert(4)) << std::endl;
d->printPretty();
std::cout << (e->insert(11)) << std::endl;
std::cout << (c->insert(387)) << std::endl;
*e=*b;
std::cout << (a->insert(373)) << std::endl;
std::cout << (c->insert(387)) << std::endl;
std::cout << (c->insert(387)) << std::endl;
std::cout << (d->remove(108)) << std::endl;
*d=*a;
c->printPretty();
std::cout << (a->insert(259)) << std::endl;
std::cout << (b->insert(355)) << std::endl;
std::cout << (d->remove(125)) << std::endl;
e->printPretty();
c->printPretty();
std::cout << (e->insert(378)) << std::endl;
std::cout << (e->insert(378)) << std::endl;
*c=*d;
std::cout << (a->remove(259)) << std::endl;
d->printPretty();
std::cout << (e->insert(164)) << std::endl;
std::cout << (c->insert(263)) << std::endl;
std::cout << (c->insert(281)) << std::endl;
std::cout << (a->insert(8)) << std::endl;
std::cout << (a->remove(412)) << std::endl;
e->printPretty();
std::cout << (d->insert(166)) << std::endl;
*e=*b;
std::cout << (c->insert(263)) << std::endl;
std::cout << (e->insert(209)) << std::endl;
std::cout << (c->insert(312)) << std::endl;
std::cout << (e->remove(215)) << std::endl;
std::cout << (d->insert(113)) << std::endl;
std::cout << (d->insert(373)) << std::endl;
*b=*a;
*b=*e;
*d=*b;
std::cout << (b->insert(209)) << std::endl;
std::cout << (c->remove(281)) << std::endl;
std::cout << (c->insert(113)) << std::endl;
std::cout << (d->insert(90)) << std::endl;
d->printPretty();
*a=*c;
std::cout << (c->insert(312)) << std::endl;
std::cout << (a->remove(471)) << std::endl;
std::cout << (c->insert(260)) << std::endl;
std::cout << (b->insert(209)) << std::endl;
std::cout << (a->insert(404)) << std::endl;
c->printPretty();
*a=*b;
std::cout << (b->insert(209)) << std::endl;
std::cout << (e->insert(344)) << std::endl;
std::cout << (e->remove(355)) << std::endl;
e->printPretty();
std::cout << (e->insert(165)) << std::endl;
std::cout << (e->remove(165)) << std::endl;
std::cout << (e->insert(344)) << std::endl;
std::cout << (c->insert(260)) << std::endl;
std::cout << (a->insert(46)) << std::endl;
std::cout << (c->remove(113)) << std::endl;
*e=*c;
c->printPretty();
std::cout << (a->insert(357)) << std::endl;
std::cout << (d->remove(127)) << std::endl;
std::cout << (a->insert(46)) << std::endl;
std::cout << (a->remove(499)) << std::endl;
std::cout << (a->remove(355)) << std::endl;
std::cout << (c->insert(22)) << std::endl;
std::cout << (d->remove(209)) << std::endl;
std::cout << (b->remove(465)) << std::endl;
std::cout << (a->remove(3)) << std::endl;
std::cout << (a->remove(209)) << std::endl;
std::cout << (d->remove(355)) << std::endl;
std::cout << (d->remove(14)) << std::endl;
std::cout << (a->insert(46)) << std::endl;
std::cout << (d->insert(90)) << std::endl;
d->printPretty();
std::cout << (d->remove(105)) << std::endl;
std::cout << (a->insert(337)) << std::endl;
*b=*a;
*a=*d;
d->printPretty();
std::cout << (b->remove(225)) << std::endl;
std::cout << (e->remove(419)) << std::endl;
std::cout << (d->insert(90)) << std::endl;
std::cout << (c->insert(185)) << std::endl;
std::cout << (e->insert(202)) << std::endl;
std::cout << (a->remove(478)) << std::endl;
std::cout << (b->remove(217)) << std::endl;
std::cout << (e->insert(182)) << std::endl;
std::cout << (d->insert(90)) << std::endl;
std::cout << (b->remove(357)) << std::endl;
std::cout << (b->insert(12)) << std::endl;
std::cout << (b->insert(379)) << std::endl;
std::cout << (e->insert(467)) << std::endl;
std::cout << (a->remove(90)) << std::endl;
a->printPretty();
std::cout << (b->insert(12)) << std::endl;
std::cout << (c->insert(263)) << std::endl;
std::cout << (c->insert(312)) << std::endl;
std::cout << (b->insert(210)) << std::endl;
a->printPretty();
std::cout << (b->remove(376)) << std::endl;
*e=*d;
std::cout << (a->insert(421)) << std::endl;
std::cout << (d->remove(90)) << std::endl;
*e=*d;
d->printPretty();
std::cout << (a->insert(409)) << std::endl;
std::cout << (e->remove(384)) << std::endl;
std::cout << (b->remove(132)) << std::endl;
std::cout << (e->insert(226)) << std::endl;
std::cout << (a->insert(260)) << std::endl;
std::cout << (c->remove(263)) << std::endl;
std::cout << (b->insert(26)) << std::endl;
std::cout << (a->insert(371)) << std::endl;
std::cout << (b->insert(419)) << std::endl;
b->printPretty();
std::cout << (d->remove(245)) << std::endl;
std::cout << (c->insert(373)) << std::endl;
std::cout << (b->insert(26)) << std::endl;
std::cout << (c->remove(220)) << std::endl;
std::cout << (e->remove(226)) << std::endl;
std::cout << (a->remove(339)) << std::endl;
*e=*d;
c->printPretty();
std::cout << (b->insert(419)) << std::endl;
*e=*b;
a->printPretty();
std::cout << (e->insert(337)) << std::endl;
std::cout << (e->insert(379)) << std::endl;
std::cout << (e->insert(419)) << std::endl;
d->printPretty();
d->printPretty();
b->printPretty();
*d=*d;
std::cout << (c->remove(373)) << std::endl;
std::cout << (e->insert(210)) << std::endl;
*b=*c;
std::cout << (b->insert(109)) << std::endl;
a->printPretty();
std::cout << (e->remove(337)) << std::endl;
std::cout << (b->insert(143)) << std::endl;
std::cout << (c->remove(247)) << std::endl;
std::cout << (e->insert(210)) << std::endl;
e->printPretty();
std::cout << (e->remove(182)) << std::endl;
std::cout << (e->remove(379)) << std::endl;
std::cout << (c->remove(266)) << std::endl;
std::cout << (a->insert(187)) << std::endl;
std::cout << (a->remove(375)) << std::endl;
std::cout << (e->insert(46)) << std::endl;
std::cout << (c->remove(20)) << std::endl;
std::cout << (b->remove(22)) << std::endl;
b->printPretty();
*b=*c;
std::cout << (c->insert(22)) << std::endl;
std::cout << (b->insert(436)) << std::endl;
std::cout << (c->remove(226)) << std::endl;
c->printPretty();
std::cout << (a->insert(53)) << std::endl;
a->printPretty();
std::cout << (e->insert(90)) << std::endl;
std::cout << (d->remove(167)) << std::endl;
b->printPretty();
std::cout << (c->insert(312)) << std::endl;
std::cout << (e->insert(12)) << std::endl;
d->printPretty();
std::cout << (d->remove(215)) << std::endl;
std::cout << (a->remove(371)) << std::endl;
c->printPretty();
d->printPretty();
std::cout << (a->remove(141)) << std::endl;
c->printPretty();
*d=*e;
*d=*d;
c->printPretty();
std::cout << (e->insert(90)) << std::endl;
std::cout << (b->remove(371)) << std::endl;
std::cout << (d->remove(12)) << std::endl;
std::cout << (b->insert(185)) << std::endl;
a->printPretty();
*b=*e;
std::cout << (c->remove(260)) << std::endl;
std::cout << (a->remove(409)) << std::endl;
*b=*b;
std::cout << (d->insert(435)) << std::endl;
std::cout << (a->remove(440)) << std::endl;
*b=*a;
b->printPretty();
*c=*d;
std::cout << (b->remove(187)) << std::endl;
*a=*b;
a->printPretty();
c->printPretty();
*a=*d;
std::cout << (a->remove(210)) << std::endl;
std::cout << (d->remove(71)) << std::endl;
std::cout << (d->remove(325)) << std::endl;
std::cout << (a->insert(268)) << std::endl;
std::cout << (c->insert(210)) << std::endl;
d->printPretty();
std::cout << (e->remove(390)) << std::endl;
*c=*e;
*a=*d;
std::cout << (b->insert(351)) << std::endl;
std::cout << (a->remove(46)) << std::endl;
std::cout << (c->remove(377)) << std::endl;
std::cout << (b->insert(260)) << std::endl;
std::cout << (c->insert(209)) << std::endl;
*c=*d;
std::cout << (e->remove(210)) << std::endl;
std::cout << (c->insert(178)) << std::endl;
std::cout << (a->remove(159)) << std::endl;
a->printPretty();
std::cout << (d->insert(90)) << std::endl;
std::cout << (a->remove(90)) << std::endl;
std::cout << (d->insert(223)) << std::endl;
c->printPretty();
std::cout << (a->remove(435)) << std::endl;
std::cout << (b->insert(484)) << std::endl;
std::cout << (b->insert(260)) << std::endl;
std::cout << (e->insert(46)) << std::endl;
std::cout << (b->insert(351)) << std::endl;
*c=*b;
std::cout << (c->insert(344)) << std::endl;
std::cout << (b->remove(53)) << std::endl;
std::cout << (a->remove(388)) << std::endl;
std::cout << (e->insert(90)) << std::endl;
std::cout << (d->remove(484)) << std::endl;
std::cout << (c->remove(335)) << std::endl;
*c=*e;
std::cout << (c->remove(26)) << std::endl;
std::cout << (e->remove(260)) << std::endl;
std::cout << (a->insert(146)) << std::endl;
std::cout << (d->insert(223)) << std::endl;
std::cout << (d->insert(46)) << std::endl;
std::cout << (a->insert(419)) << std::endl;
std::cout << (a->insert(26)) << std::endl;
std::cout << (b->insert(354)) << std::endl;
std::cout << (b->remove(351)) << std::endl;
a->printPretty();
*c=*a;
b->printPretty();
e->printPretty();
c->printPretty();
std::cout << (c->insert(419)) << std::endl;
std::cout << (a->remove(146)) << std::endl;
std::cout << (d->insert(321)) << std::endl;
std::cout << (c->insert(419)) << std::endl;
*b=*d;
std::cout << (d->insert(419)) << std::endl;
a->printPretty();
std::cout << (e->remove(178)) << std::endl;
*e=*b;
std::cout << (d->remove(451)) << std::endl;
d->printPretty();
std::cout << (b->remove(34)) << std::endl;
std::cout << (c->insert(26)) << std::endl;
std::cout << (b->insert(125)) << std::endl;
std::cout << (e->insert(210)) << std::endl;
std::cout << (c->insert(210)) << std::endl;
std::cout << (c->remove(146)) << std::endl;
*a=*e;
a->printPretty();
std::cout << (c->remove(53)) << std::endl;
*a=*c;
std::cout << (b->insert(235)) << std::endl;
std::cout << (d->insert(394)) << std::endl;
std::cout << (e->insert(15)) << std::endl;
std::cout << (c->insert(419)) << std::endl;
std::cout << (c->remove(183)) << std::endl;
std::cout << (e->insert(90)) << std::endl;
*b=*d;
std::cout << (a->remove(210)) << std::endl;
std::cout << (b->insert(314)) << std::endl;
std::cout << (c->insert(152)) << std::endl;
std::cout << (a->remove(26)) << std::endl;
std::cout << (d->insert(223)) << std::endl;
std::cout << (a->insert(419)) << std::endl;
std::cout << (e->insert(321)) << std::endl;
std::cout << (d->remove(321)) << std::endl;
*c=*b;
std::cout << (e->insert(191)) << std::endl;
*d=*d;
std::cout << (d->remove(435)) << std::endl;
a->printPretty();
d->printPretty();
b->printPretty();
std::cout << (b->remove(26)) << std::endl;
std::cout << (b->remove(326)) << std::endl;
std::cout << (b->insert(314)) << std::endl;
std::cout << (d->remove(210)) << std::endl;
std::cout << (b->insert(314)) << std::endl;
std::cout << (c->insert(90)) << std::endl;
std::cout << (b->remove(53)) << std::endl;
std::cout << (e->remove(189)) << std::endl;
*b=*d;
std::cout << (a->insert(419)) << std::endl;
std::cout << (c->insert(435)) << std::endl;
std::cout << (e->insert(210)) << std::endl;
std::cout << (e->insert(387)) << std::endl;
std::cout << (b->insert(46)) << std::endl;
*a=*b;
*a=*e;
std::cout << (a->insert(191)) << std::endl;
std::cout << (d->remove(123)) << std::endl;
std::cout << (c->insert(26)) << std::endl;
*d=*b;
std::cout << (c->insert(223)) << std::endl;
std::cout << (c->insert(419)) << std::endl;
b->printPretty();
std::cout << (b->insert(26)) << std::endl;
std::cout << (e->insert(15)) << std::endl;
*d=*c;
std::cout << (b->remove(157)) << std::endl;
std::cout << (e->remove(31)) << std::endl;
std::cout << (c->remove(321)) << std::endl;
std::cout << (b->remove(394)) << std::endl;
std::cout << (a->remove(191)) << std::endl;
*e=*e;
std::cout << (b->insert(26)) << std::endl;
std::cout << (b->insert(419)) << std::endl;
c->printPretty();
std::cout << (a->remove(435)) << std::endl;
*e=*e;
std::cout << (a->insert(90)) << std::endl;
*e=*e;
*b=*b;
std::cout << (e->remove(419)) << std::endl;
std::cout << (c->insert(26)) << std::endl;
std::cout << (c->insert(246)) << std::endl;
std::cout << (a->remove(260)) << std::endl;
std::cout << (e->remove(210)) << std::endl;
e->printPretty();
*e=*a;
*d=*b;
*d=*d;
std::cout << (c->remove(197)) << std::endl;
e->printPretty();
std::cout << (a->insert(321)) << std::endl;
std::cout << (d->insert(419)) << std::endl;
std::cout << (d->insert(26)) << std::endl;
std::cout << (b->remove(255)) << std::endl;
std::cout << (c->remove(435)) << std::endl;
*a=*b;
std::cout << (d->remove(260)) << std::endl;
std::cout << (e->insert(15)) << std::endl;
std::cout << (c->remove(46)) << std::endl;
std::cout << (c->remove(246)) << std::endl;
std::cout << (b->insert(121)) << std::endl;
std::cout << (a->insert(108)) << std::endl;
std::cout << (c->insert(140)) << std::endl;
std::cout << (b->remove(54)) << std::endl;
std::cout << (c->insert(413)) << std::endl;
*c=*b;
std::cout << (c->remove(376)) << std::endl;
std::cout << (b->remove(121)) << std::endl;
*a=*d;
std::cout << (c->remove(26)) << std::endl;
b->printPretty();
std::cout << (e->remove(382)) << std::endl;
std::cout << (a->remove(223)) << std::endl;
std::cout << (d->remove(223)) << std::endl;
*b=*a;
std::cout << (a->remove(419)) << std::endl;
std::cout << (c->insert(104)) << std::endl;
*d=*c;
std::cout << (a->insert(144)) << std::endl;
*d=*b;
std::cout << (a->remove(340)) << std::endl;
std::cout << (c->insert(121)) << std::endl;
std::cout << (b->remove(413)) << std::endl;
std::cout << (a->remove(144)) << std::endl;
e->printPretty();
std::cout << (c->remove(30)) << std::endl;
std::cout << (e->remove(15)) << std::endl;
std::cout << (b->remove(46)) << std::endl;
std::cout << (b->remove(26)) << std::endl;
std::cout << (a->insert(34)) << std::endl;
std::cout << (c->insert(301)) << std::endl;
std::cout << (d->insert(90)) << std::endl;
e->printPretty();
std::cout << (b->remove(90)) << std::endl;
std::cout << (c->remove(46)) << std::endl;
std::cout << (e->remove(350)) << std::endl;
std::cout << (d->insert(37)) << std::endl;
c->printPretty();
*a=*c;
std::cout << (e->remove(159)) << std::endl;
std::cout << (a->remove(214)) << std::endl;
std::cout << (a->insert(402)) << std::endl;
d->printPretty();
*a=*b;
std::cout << (e->remove(90)) << std::endl;
c->printPretty();
std::cout << (d->insert(278)) << std::endl;
std::cout << (d->remove(26)) << std::endl;
std::cout << (c->remove(102)) << std::endl;
std::cout << (a->insert(419)) << std::endl;
std::cout << (d->remove(435)) << std::endl;
std::cout << (d->insert(37)) << std::endl;
d->printPretty();
std::cout << (a->remove(23)) << std::endl;
*d=*a;
std::cout << (b->insert(77)) << std::endl;
e->printPretty();
std::cout << (c->insert(104)) << std::endl;
*e=*c;
*e=*d;
std::cout << (b->insert(419)) << std::endl;
std::cout << (c->insert(345)) << std::endl;
d->printPretty();
std::cout << (e->insert(37)) << std::endl;
*d=*b;
std::cout << (d->remove(419)) << std::endl;
std::cout << (c->remove(117)) << std::endl;
std::cout << (b->remove(77)) << std::endl;
std::cout << (d->remove(240)) << std::endl;
std::cout << (b->insert(419)) << std::endl;
std::cout << (e->insert(419)) << std::endl;
std::cout << (d->remove(77)) << std::endl;
d->printPretty();
std::cout << (b->remove(255)) << std::endl;
std::cout << (d->insert(206)) << std::endl;
std::cout << (a->remove(161)) << std::endl;
std::cout << (e->remove(65)) << std::endl;
*e=*a;
e->printPretty();
std::cout << (b->insert(419)) << std::endl;
*c=*d;
*e=*a;
std::cout << (d->remove(206)) << std::endl;
a->printPretty();
std::cout << (a->remove(419)) << std::endl;
return 0;
}