#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << (a->remove(386)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
*a=*b;
b->printPretty();
a->printPretty();
std::cout << (a->insert(351)) << std::endl;
std::cout << (a->insert(95)) << std::endl;
b->printPretty();
std::cout << (a->remove(351)) << std::endl;
std::cout << (a->remove(141)) << std::endl;
std::cout << (a->remove(66)) << std::endl;
a->printPretty();
b->printPretty();
*a=*b;
*b=*a;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*b);
b->printPretty();
std::cout << (a->insert(405)) << std::endl;
ScapegoatTree<int> *d=new ScapegoatTree<int>;
ScapegoatTree<int> *e=new ScapegoatTree<int>;
*b=*c;
a->printPretty();
c->printPretty();
std::cout << (d->insert(11)) << std::endl;
d->printPretty();
std::cout << (a->insert(405)) << std::endl;
std::cout << (a->insert(67)) << std::endl;
b->printPretty();
std::cout << (a->insert(196)) << std::endl;
std::cout << (a->insert(196)) << std::endl;
std::cout << (a->insert(236)) << std::endl;
std::cout << (d->insert(231)) << std::endl;
std::cout << (c->insert(151)) << std::endl;
a->printPretty();
std::cout << (d->remove(231)) << std::endl;
std::cout << (c->insert(319)) << std::endl;
std::cout << (a->remove(196)) << std::endl;
a->printPretty();
std::cout << (a->remove(236)) << std::endl;
*d=*e;
std::cout << (c->remove(324)) << std::endl;
a->printPretty();
std::cout << (d->insert(459)) << std::endl;
*d=*b;
std::cout << (b->remove(207)) << std::endl;
*b=*d;
d->printPretty();
a->printPretty();
*d=*c;
std::cout << (c->remove(119)) << std::endl;
*e=*b;
std::cout << (d->insert(151)) << std::endl;
std::cout << (d->insert(319)) << std::endl;
std::cout << (a->remove(67)) << std::endl;
std::cout << (b->remove(94)) << std::endl;
std::cout << (d->insert(319)) << std::endl;
std::cout << (b->remove(27)) << std::endl;
a->printPretty();
std::cout << (c->remove(49)) << std::endl;
*b=*d;
std::cout << (c->insert(266)) << std::endl;
std::cout << (b->insert(151)) << std::endl;
std::cout << (e->insert(103)) << std::endl;
std::cout << (e->insert(133)) << std::endl;
std::cout << (c->remove(151)) << std::endl;
std::cout << (c->remove(168)) << std::endl;
b->printPretty();
std::cout << (e->insert(359)) << std::endl;
*b=*b;
std::cout << (c->remove(319)) << std::endl;
std::cout << (c->insert(287)) << std::endl;
std::cout << (b->insert(151)) << std::endl;
std::cout << (c->insert(88)) << std::endl;
std::cout << (b->insert(319)) << std::endl;
std::cout << (e->insert(359)) << std::endl;
e->printPretty();
a->printPretty();
d->printPretty();
std::cout << (a->remove(83)) << std::endl;
std::cout << (e->insert(73)) << std::endl;
std::cout << (e->insert(103)) << std::endl;
std::cout << (b->remove(151)) << std::endl;
e->printPretty();
a->printPretty();
std::cout << (e->remove(447)) << std::endl;
*d=*e;
*e=*e;
std::cout << (a->remove(405)) << std::endl;
std::cout << (e->insert(133)) << std::endl;
*d=*a;
*b=*d;
c->printPretty();
std::cout << (b->remove(228)) << std::endl;
std::cout << (e->remove(37)) << std::endl;
*e=*e;
a->printPretty();
std::cout << (a->remove(341)) << std::endl;
a->printPretty();
e->printPretty();
*b=*c;
b->printPretty();
b->printPretty();
*d=*e;
std::cout << (d->insert(361)) << std::endl;
std::cout << (c->remove(266)) << std::endl;
b->printPretty();
std::cout << (c->remove(88)) << std::endl;
std::cout << (e->insert(73)) << std::endl;
std::cout << (b->remove(266)) << std::endl;
std::cout << (c->insert(287)) << std::endl;
std::cout << (c->insert(287)) << std::endl;
*e=*e;
d->printPretty();
std::cout << (a->insert(406)) << std::endl;
c->printPretty();
std::cout << (c->insert(25)) << std::endl;
std::cout << (c->insert(183)) << std::endl;
std::cout << (d->insert(202)) << std::endl;
std::cout << (e->remove(359)) << std::endl;
std::cout << (e->insert(133)) << std::endl;
std::cout << (b->remove(88)) << std::endl;
e->printPretty();
std::cout << (d->insert(47)) << std::endl;
*c=*a;
std::cout << (d->insert(328)) << std::endl;
std::cout << (b->remove(287)) << std::endl;
std::cout << (b->remove(305)) << std::endl;
std::cout << (e->remove(133)) << std::endl;
std::cout << (c->remove(92)) << std::endl;
*e=*b;
std::cout << (a->remove(406)) << std::endl;
*e=*d;
std::cout << (a->insert(467)) << std::endl;
*c=*e;
*b=*e;
std::cout << (e->insert(359)) << std::endl;
std::cout << (e->remove(69)) << std::endl;
std::cout << (b->insert(359)) << std::endl;
std::cout << (c->insert(202)) << std::endl;
std::cout << (a->insert(17)) << std::endl;
std::cout << (d->remove(361)) << std::endl;
std::cout << (c->insert(133)) << std::endl;
a->printPretty();
std::cout << (e->remove(361)) << std::endl;
std::cout << (e->remove(73)) << std::endl;
std::cout << (d->remove(163)) << std::endl;
a->printPretty();
std::cout << (d->remove(202)) << std::endl;
b->printPretty();
e->printPretty();
c->printPretty();
*e=*a;
*c=*a;
std::cout << (d->insert(103)) << std::endl;
std::cout << (e->remove(17)) << std::endl;
std::cout << (d->insert(359)) << std::endl;
std::cout << (a->remove(384)) << std::endl;
a->printPretty();
std::cout << (e->insert(467)) << std::endl;
std::cout << (a->remove(234)) << std::endl;
std::cout << (a->remove(467)) << std::endl;
*b=*b;
d->printPretty();
*c=*e;
std::cout << (b->remove(359)) << std::endl;
std::cout << (c->insert(23)) << std::endl;
std::cout << (b->insert(92)) << std::endl;
std::cout << (e->insert(205)) << std::endl;
std::cout << (a->remove(17)) << std::endl;
*c=*d;
*a=*d;
*b=*c;
d->printPretty();
std::cout << (e->insert(467)) << std::endl;
std::cout << (a->remove(291)) << std::endl;
*a=*d;
std::cout << (e->remove(218)) << std::endl;
b->printPretty();
*b=*b;
*a=*a;
c->printPretty();
std::cout << (d->remove(47)) << std::endl;
std::cout << (b->remove(247)) << std::endl;
std::cout << (e->insert(467)) << std::endl;
std::cout << (b->remove(30)) << std::endl;
std::cout << (a->remove(328)) << std::endl;
std::cout << (d->remove(122)) << std::endl;
std::cout << (c->remove(331)) << std::endl;
std::cout << (e->insert(327)) << std::endl;
std::cout << (c->insert(328)) << std::endl;
std::cout << (a->remove(263)) << std::endl;
std::cout << (c->remove(289)) << std::endl;
c->printPretty();
std::cout << (d->insert(73)) << std::endl;
std::cout << (e->insert(327)) << std::endl;
*e=*d;
std::cout << (c->insert(359)) << std::endl;
std::cout << (e->insert(328)) << std::endl;
std::cout << (a->insert(133)) << std::endl;
std::cout << (c->insert(461)) << std::endl;
std::cout << (a->insert(222)) << std::endl;
*d=*c;
std::cout << (c->insert(47)) << std::endl;
std::cout << (c->remove(48)) << std::endl;
std::cout << (b->remove(133)) << std::endl;
std::cout << (c->insert(54)) << std::endl;
std::cout << (e->insert(336)) << std::endl;
std::cout << (d->remove(77)) << std::endl;
e->printPretty();
d->printPretty();
c->printPretty();
*a=*b;
std::cout << (d->insert(103)) << std::endl;
*e=*c;
a->printPretty();
d->printPretty();
std::cout << (c->remove(254)) << std::endl;
std::cout << (e->remove(103)) << std::endl;
std::cout << (a->insert(103)) << std::endl;
c->printPretty();
*e=*e;
std::cout << (c->remove(133)) << std::endl;
b->printPretty();
std::cout << (d->remove(319)) << std::endl;
*c=*a;
std::cout << (c->insert(47)) << std::endl;
std::cout << (a->insert(49)) << std::endl;
*d=*a;
std::cout << (c->remove(415)) << std::endl;
std::cout << (d->insert(86)) << std::endl;
*c=*c;
std::cout << (c->remove(452)) << std::endl;
std::cout << (a->remove(195)) << std::endl;
std::cout << (e->remove(106)) << std::endl;
*c=*b;
std::cout << (c->insert(359)) << std::endl;
std::cout << (a->remove(242)) << std::endl;
std::cout << (a->insert(499)) << std::endl;
*b=*d;
std::cout << (c->remove(328)) << std::endl;
std::cout << (c->remove(90)) << std::endl;
c->printPretty();
std::cout << (b->insert(295)) << std::endl;
a->printPretty();
std::cout << (e->insert(348)) << std::endl;
std::cout << (c->insert(278)) << std::endl;
d->printPretty();
std::cout << (e->remove(465)) << std::endl;
std::cout << (d->insert(103)) << std::endl;
*a=*a;
std::cout << (e->insert(47)) << std::endl;
std::cout << (c->remove(73)) << std::endl;
std::cout << (e->insert(111)) << std::endl;
*d=*c;
std::cout << (d->insert(278)) << std::endl;
*b=*e;
*a=*d;
*e=*c;
std::cout << (a->remove(39)) << std::endl;
std::cout << (c->remove(409)) << std::endl;
std::cout << (c->remove(278)) << std::endl;
*c=*c;
*e=*c;
std::cout << (d->remove(382)) << std::endl;
a->printPretty();
std::cout << (c->remove(359)) << std::endl;
std::cout << (a->remove(278)) << std::endl;
*a=*d;
std::cout << (e->insert(47)) << std::endl;
e->printPretty();
std::cout << (c->insert(325)) << std::endl;
c->printPretty();
std::cout << (b->remove(73)) << std::endl;
std::cout << (a->remove(285)) << std::endl;
std::cout << (a->remove(468)) << std::endl;
std::cout << (a->remove(47)) << std::endl;
std::cout << (b->remove(461)) << std::endl;
std::cout << (b->remove(365)) << std::endl;
std::cout << (b->remove(348)) << std::endl;
std::cout << (a->insert(278)) << std::endl;
std::cout << (b->insert(327)) << std::endl;
std::cout << (d->remove(278)) << std::endl;
std::cout << (e->remove(359)) << std::endl;
std::cout << (a->remove(205)) << std::endl;
*b=*d;
*c=*e;
*a=*b;
*c=*c;
std::cout << (b->remove(103)) << std::endl;
e->printPretty();
std::cout << (e->remove(357)) << std::endl;
std::cout << (d->remove(339)) << std::endl;
e->printPretty();
e->printPretty();
std::cout << (e->insert(103)) << std::endl;
std::cout << (d->insert(426)) << std::endl;
*d=*a;
std::cout << (a->remove(359)) << std::endl;
std::cout << (d->remove(47)) << std::endl;
b->printPretty();
std::cout << (e->insert(103)) << std::endl;
c->printPretty();
std::cout << (a->remove(103)) << std::endl;
*c=*d;
std::cout << (c->insert(384)) << std::endl;
c->printPretty();
std::cout << (d->remove(426)) << std::endl;
std::cout << (b->remove(47)) << std::endl;
std::cout << (c->remove(103)) << std::endl;
std::cout << (e->remove(428)) << std::endl;
std::cout << (d->remove(485)) << std::endl;
std::cout << (d->insert(151)) << std::endl;
std::cout << (b->insert(359)) << std::endl;
d->printPretty();
*d=*c;
std::cout << (d->insert(146)) << std::endl;
*a=*b;
std::cout << (b->remove(342)) << std::endl;
a->printPretty();
std::cout << (c->remove(191)) << std::endl;
std::cout << (e->insert(132)) << std::endl;
std::cout << (b->remove(210)) << std::endl;
b->printPretty();
std::cout << (a->remove(359)) << std::endl;
std::cout << (c->insert(359)) << std::endl;
std::cout << (e->insert(180)) << std::endl;
e->printPretty();
std::cout << (c->remove(247)) << std::endl;
e->printPretty();
e->printPretty();
a->printPretty();
*b=*d;
b->printPretty();
c->printPretty();
std::cout << (c->insert(395)) << std::endl;
std::cout << (b->remove(146)) << std::endl;
std::cout << (b->insert(220)) << std::endl;
std::cout << (b->insert(384)) << std::endl;
d->printPretty();
std::cout << (e->remove(103)) << std::endl;
std::cout << (e->remove(296)) << std::endl;
std::cout << (b->remove(359)) << std::endl;
*d=*b;
std::cout << (a->insert(161)) << std::endl;
std::cout << (a->insert(455)) << std::endl;
std::cout << (b->insert(470)) << std::endl;
a->printPretty();
std::cout << (b->remove(470)) << std::endl;
std::cout << (a->remove(161)) << std::endl;
*e=*b;
*b=*b;
d->printPretty();
std::cout << (e->insert(77)) << std::endl;
std::cout << (d->remove(384)) << std::endl;
std::cout << (b->remove(446)) << std::endl;
std::cout << (d->insert(4)) << std::endl;
std::cout << (a->insert(203)) << std::endl;
a->printPretty();
std::cout << (d->insert(4)) << std::endl;
b->printPretty();
std::cout << (d->insert(8)) << std::endl;
*e=*e;
*b=*a;
std::cout << (e->remove(384)) << std::endl;
std::cout << (d->insert(8)) << std::endl;
std::cout << (a->remove(455)) << std::endl;
std::cout << (e->insert(249)) << std::endl;
std::cout << (b->insert(203)) << std::endl;
*e=*a;
std::cout << (b->remove(267)) << std::endl;
d->printPretty();
std::cout << (b->remove(498)) << std::endl;
*d=*a;
std::cout << (b->remove(362)) << std::endl;
std::cout << (e->remove(203)) << std::endl;
std::cout << (d->remove(203)) << std::endl;
a->printPretty();
c->printPretty();
std::cout << (e->remove(423)) << std::endl;
e->printPretty();
std::cout << (d->remove(474)) << std::endl;
d->printPretty();
std::cout << (b->insert(203)) << std::endl;
std::cout << (e->remove(376)) << std::endl;
std::cout << (e->insert(303)) << std::endl;
std::cout << (c->insert(306)) << std::endl;
std::cout << (b->remove(455)) << std::endl;
*e=*e;
std::cout << (c->insert(359)) << std::endl;
*b=*d;
std::cout << (e->insert(285)) << std::endl;
b->printPretty();
std::cout << (b->remove(249)) << std::endl;
std::cout << (a->remove(203)) << std::endl;
std::cout << (b->insert(41)) << std::endl;
*a=*e;
std::cout << (e->insert(285)) << std::endl;
std::cout << (b->remove(442)) << std::endl;
std::cout << (e->insert(285)) << std::endl;
std::cout << (e->insert(176)) << std::endl;
a->printPretty();
std::cout << (a->insert(285)) << std::endl;
std::cout << (e->remove(176)) << std::endl;
std::cout << (d->remove(140)) << std::endl;
std::cout << (c->remove(130)) << std::endl;
std::cout << (e->remove(286)) << std::endl;
*d=*b;
d->printPretty();
*d=*c;
std::cout << (b->remove(15)) << std::endl;
std::cout << (a->remove(285)) << std::endl;
std::cout << (a->remove(395)) << std::endl;
std::cout << (d->remove(311)) << std::endl;
b->printPretty();
std::cout << (c->insert(306)) << std::endl;
*c=*c;
std::cout << (d->remove(370)) << std::endl;
std::cout << (c->insert(306)) << std::endl;
std::cout << (d->insert(359)) << std::endl;
a->printPretty();
std::cout << (a->remove(258)) << std::endl;
*d=*d;
std::cout << (c->insert(306)) << std::endl;
*e=*a;
d->printPretty();
std::cout << (e->insert(295)) << std::endl;
e->printPretty();
std::cout << (b->insert(135)) << std::endl;
std::cout << (d->remove(126)) << std::endl;
b->printPretty();
std::cout << (a->remove(353)) << std::endl;
std::cout << (b->remove(96)) << std::endl;
std::cout << (e->remove(303)) << std::endl;
b->printPretty();
std::cout << (d->insert(385)) << std::endl;
*d=*b;
std::cout << (e->insert(295)) << std::endl;
std::cout << (a->remove(303)) << std::endl;
*a=*d;
*d=*b;
std::cout << (e->remove(295)) << std::endl;
*b=*b;
std::cout << (a->remove(135)) << std::endl;
b->printPretty();
std::cout << (b->insert(135)) << std::endl;
*d=*e;
*b=*a;
std::cout << (b->insert(421)) << std::endl;
std::cout << (a->remove(41)) << std::endl;
std::cout << (b->remove(41)) << std::endl;
std::cout << (e->insert(456)) << std::endl;
std::cout << (c->insert(384)) << std::endl;
*d=*b;
*b=*d;
std::cout << (e->insert(456)) << std::endl;
std::cout << (b->remove(499)) << std::endl;
b->printPretty();
std::cout << (a->insert(454)) << std::endl;
std::cout << (d->remove(421)) << std::endl;
std::cout << (e->insert(40)) << std::endl;
*d=*a;
std::cout << (e->insert(456)) << std::endl;
std::cout << (c->remove(384)) << std::endl;
d->printPretty();
std::cout << (c->insert(32)) << std::endl;
a->printPretty();
d->printPretty();
std::cout << (e->insert(364)) << std::endl;
std::cout << (a->insert(457)) << std::endl;
*a=*e;
*c=*d;
d->printPretty();
std::cout << (b->remove(408)) << std::endl;
std::cout << (a->remove(364)) << std::endl;
std::cout << (b->remove(421)) << std::endl;
b->printPretty();
std::cout << (c->insert(154)) << std::endl;
std::cout << (a->remove(456)) << std::endl;
std::cout << (a->insert(40)) << std::endl;
std::cout << (a->insert(470)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << (e->insert(456)) << std::endl;
std::cout << (b->remove(58)) << std::endl;
std::cout << (d->remove(454)) << std::endl;
std::cout << (d->insert(413)) << std::endl;
std::cout << (c->insert(389)) << std::endl;
std::cout << (e->insert(40)) << std::endl;
std::cout << (d->insert(413)) << std::endl;
std::cout << (d->insert(129)) << std::endl;
*a=*a;
std::cout << (c->insert(154)) << std::endl;
std::cout << (c->insert(209)) << std::endl;
std::cout << (d->insert(129)) << std::endl;
std::cout << (e->remove(236)) << std::endl;
std::cout << (c->remove(154)) << std::endl;
b->printPretty();
std::cout << (b->remove(54)) << std::endl;
*b=*e;
std::cout << (d->insert(171)) << std::endl;
a->printPretty();
c->printPretty();
*c=*d;
std::cout << (c->insert(129)) << std::endl;
std::cout << (d->insert(410)) << std::endl;
std::cout << (d->remove(413)) << std::endl;
d->printPretty();
std::cout << (c->insert(171)) << std::endl;
std::cout << (d->remove(264)) << std::endl;
std::cout << (d->remove(171)) << std::endl;
*c=*d;
c->printPretty();
std::cout << (b->remove(429)) << std::endl;
std::cout << (a->remove(470)) << std::endl;
std::cout << (b->insert(314)) << std::endl;
std::cout << (c->insert(29)) << std::endl;
c->printPretty();
std::cout << (a->insert(129)) << std::endl;
*b=*e;
std::cout << (d->insert(4)) << std::endl;
std::cout << (d->remove(129)) << std::endl;
*d=*b;
std::cout << (c->remove(370)) << std::endl;
*b=*d;
std::cout << (c->remove(129)) << std::endl;
std::cout << (c->insert(53)) << std::endl;
std::cout << (a->remove(487)) << std::endl;
c->printPretty();
std::cout << (d->remove(388)) << std::endl;
std::cout << (d->insert(9)) << std::endl;
std::cout << (d->remove(367)) << std::endl;
std::cout << (c->insert(53)) << std::endl;
std::cout << (a->remove(129)) << std::endl;
std::cout << (d->remove(9)) << std::endl;
std::cout << (a->remove(347)) << std::endl;
std::cout << (c->remove(29)) << std::endl;
std::cout << (e->remove(40)) << std::endl;
d->printPretty();
a->printPretty();
c->printPretty();
*c=*e;
std::cout << (a->insert(40)) << std::endl;
std::cout << (b->remove(126)) << std::endl;
std::cout << (c->insert(456)) << std::endl;
std::cout << (c->insert(456)) << std::endl;
std::cout << (a->insert(461)) << std::endl;
std::cout << (e->remove(144)) << std::endl;
std::cout << (d->insert(7)) << std::endl;
std::cout << (e->insert(456)) << std::endl;
std::cout << (b->insert(352)) << std::endl;
std::cout << (d->remove(383)) << std::endl;
std::cout << (e->insert(257)) << std::endl;
*a=*c;
std::cout << (b->remove(447)) << std::endl;
std::cout << (a->remove(364)) << std::endl;
std::cout << (d->insert(7)) << std::endl;
*e=*a;
*d=*c;
std::cout << (d->insert(22)) << std::endl;
d->printPretty();
std::cout << (a->remove(456)) << std::endl;
*b=*c;
c->printPretty();
d->printPretty();
std::cout << (e->insert(456)) << std::endl;
std::cout << (d->remove(316)) << std::endl;
std::cout << (c->insert(456)) << std::endl;
std::cout << (b->insert(456)) << std::endl;
std::cout << (c->remove(364)) << std::endl;
d->printPretty();
*e=*c;
*b=*e;
*e=*e;
std::cout << (b->insert(456)) << std::endl;
std::cout << (b->remove(456)) << std::endl;
std::cout << (c->insert(456)) << std::endl;
std::cout << (d->remove(390)) << std::endl;
std::cout << (d->insert(20)) << std::endl;
std::cout << (d->insert(456)) << std::endl;
std::cout << (e->insert(456)) << std::endl;
a->printPretty();
std::cout << (e->remove(486)) << std::endl;
std::cout << (c->insert(456)) << std::endl;
*d=*e;
std::cout << (e->insert(429)) << std::endl;
e->printPretty();
e->printPretty();
std::cout << (c->insert(139)) << std::endl;
std::cout << (d->remove(456)) << std::endl;
std::cout << (b->remove(420)) << std::endl;
d->printPretty();
std::cout << (c->insert(456)) << std::endl;
std::cout << (c->insert(456)) << std::endl;
std::cout << (c->remove(434)) << std::endl;
b->printPretty();
*a=*e;
std::cout << (b->remove(499)) << std::endl;
std::cout << (a->insert(68)) << std::endl;
std::cout << (a->remove(166)) << std::endl;
std::cout << (d->insert(86)) << std::endl;
*b=*c;
c->printPretty();
std::cout << (a->remove(369)) << std::endl;
*e=*c;
*e=*d;
std::cout << (a->remove(68)) << std::endl;
std::cout << (e->insert(86)) << std::endl;
std::cout << (d->insert(86)) << std::endl;
std::cout << (b->remove(223)) << std::endl;
std::cout << (d->remove(241)) << std::endl;
std::cout << (d->remove(86)) << std::endl;
std::cout << (e->insert(328)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << (d->remove(444)) << std::endl;
*d=*c;
std::cout << (c->remove(89)) << std::endl;
*e=*c;
e->printPretty();
*b=*a;
*c=*c;
std::cout << (b->remove(392)) << std::endl;
std::cout << (d->insert(403)) << std::endl;
std::cout << (c->remove(139)) << std::endl;
std::cout << (b->remove(147)) << std::endl;
std::cout << (b->insert(456)) << std::endl;
std::cout << (a->remove(429)) << std::endl;
std::cout << (b->insert(238)) << std::endl;
*a=*b;
std::cout << (c->insert(456)) << std::endl;
std::cout << (d->insert(37)) << std::endl;
std::cout << (c->insert(456)) << std::endl;
std::cout << (b->insert(429)) << std::endl;
std::cout << (c->remove(456)) << std::endl;
std::cout << (d->remove(37)) << std::endl;
std::cout << (b->insert(238)) << std::endl;
std::cout << (e->insert(139)) << std::endl;
std::cout << (b->insert(320)) << std::endl;
*c=*d;
*b=*d;
std::cout << (b->remove(456)) << std::endl;
b->printPretty();
std::cout << (a->remove(419)) << std::endl;
*a=*b;
std::cout << (d->insert(8)) << std::endl;
*a=*b;
std::cout << (a->insert(126)) << std::endl;
*a=*d;
std::cout << (c->insert(454)) << std::endl;
*d=*a;
std::cout << (a->remove(313)) << std::endl;
std::cout << (a->insert(8)) << std::endl;
std::cout << (b->remove(284)) << std::endl;
*e=*c;
std::cout << (a->insert(403)) << std::endl;
std::cout << (a->insert(456)) << std::endl;
std::cout << (d->remove(70)) << std::endl;
*a=*b;
std::cout << (b->insert(403)) << std::endl;
*a=*e;
std::cout << (a->remove(139)) << std::endl;
std::cout << (a->insert(456)) << std::endl;
d->printPretty();
*a=*c;
std::cout << (d->remove(480)) << std::endl;
d->printPretty();
std::cout << (a->remove(456)) << std::endl;
c->printPretty();
std::cout << (b->insert(403)) << std::endl;
std::cout << (d->insert(201)) << std::endl;
std::cout << (e->remove(250)) << std::endl;
*b=*b;
std::cout << (e->insert(249)) << std::endl;
*c=*d;
std::cout << (c->remove(139)) << std::endl;
std::cout << (a->insert(139)) << std::endl;
*c=*c;
std::cout << (c->remove(201)) << std::endl;
std::cout << (c->remove(456)) << std::endl;
std::cout << (c->remove(8)) << std::endl;
std::cout << (b->remove(139)) << std::endl;
std::cout << (c->insert(62)) << std::endl;
d->printPretty();
std::cout << (c->remove(62)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (e->insert(456)) << std::endl;
*a=*e;
std::cout << (c->insert(35)) << std::endl;
std::cout << (c->remove(403)) << std::endl;
e->printPretty();
std::cout << (b->remove(403)) << std::endl;
std::cout << (d->insert(361)) << std::endl;
std::cout << (a->insert(403)) << std::endl;
a->printPretty();
std::cout << (e->insert(403)) << std::endl;
*b=*d;
std::cout << (c->remove(44)) << std::endl;
std::cout << (e->insert(93)) << std::endl;
e->printPretty();
c->printPretty();
std::cout << (e->remove(415)) << std::endl;
std::cout << (e->remove(110)) << std::endl;
a->printPretty();
std::cout << (c->insert(201)) << std::endl;
*a=*b;
std::cout << (d->remove(9)) << std::endl;
std::cout << (c->remove(301)) << std::endl;
b->printPretty();
std::cout << (d->insert(317)) << std::endl;
std::cout << (c->remove(201)) << std::endl;
std::cout << (a->insert(403)) << std::endl;
std::cout << (e->remove(310)) << std::endl;
std::cout << (b->insert(201)) << std::endl;
*e=*c;
*a=*d;
std::cout << (c->insert(311)) << std::endl;
std::cout << (e->remove(35)) << std::endl;
std::cout << (a->remove(456)) << std::endl;
a->printPretty();
std::cout << (c->remove(311)) << std::endl;
std::cout << (d->remove(242)) << std::endl;
a->printPretty();
*a=*c;
*b=*c;
std::cout << (d->remove(291)) << std::endl;
std::cout << (c->remove(398)) << std::endl;
std::cout << (a->remove(35)) << std::endl;
a->printPretty();
std::cout << (a->remove(182)) << std::endl;
a->printPretty();
return 0;
}
