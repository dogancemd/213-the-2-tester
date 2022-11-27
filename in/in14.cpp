#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << (a->remove(50)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
*b=*a;
std::cout << (b->remove(22)) << std::endl;
a->printPretty();
std::cout << (a->remove(223)) << std::endl;
std::cout << (b->remove(394)) << std::endl;
*a=*a;
a->printPretty();
ScapegoatTree<int> *c=new ScapegoatTree<int>(*b);
ScapegoatTree<int> *d=new ScapegoatTree<int>(*c);
*b=*b;
ScapegoatTree<int> *e=new ScapegoatTree<int>;
c->printPretty();
*b=*d;
std::cout << (c->remove(208)) << std::endl;
*b=*a;
d->printPretty();
*d=*c;
*c=*a;
std::cout << (a->remove(58)) << std::endl;
std::cout << (b->remove(330)) << std::endl;
e->printPretty();
std::cout << (e->insert(223)) << std::endl;
c->printPretty();
a->printPretty();
std::cout << (c->remove(241)) << std::endl;
std::cout << (b->remove(293)) << std::endl;
d->printPretty();
std::cout << (e->insert(384)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << (d->remove(483)) << std::endl;
b->printPretty();
*a=*b;
std::cout << (e->insert(350)) << std::endl;
std::cout << (c->remove(241)) << std::endl;
std::cout << (d->insert(127)) << std::endl;
std::cout << (d->insert(57)) << std::endl;
d->printPretty();
std::cout << (e->remove(488)) << std::endl;
std::cout << (e->remove(350)) << std::endl;
std::cout << (b->insert(448)) << std::endl;
std::cout << (e->insert(223)) << std::endl;
*d=*b;
*c=*a;
*c=*b;
std::cout << (b->insert(214)) << std::endl;
std::cout << (e->remove(223)) << std::endl;
std::cout << (b->remove(448)) << std::endl;
std::cout << (a->insert(56)) << std::endl;
std::cout << (c->insert(448)) << std::endl;
std::cout << (a->remove(404)) << std::endl;
std::cout << (d->insert(315)) << std::endl;
d->printPretty();
std::cout << (b->remove(214)) << std::endl;
std::cout << (d->insert(448)) << std::endl;
std::cout << (b->insert(376)) << std::endl;
std::cout << (b->remove(16)) << std::endl;
std::cout << (b->remove(77)) << std::endl;
std::cout << (d->remove(448)) << std::endl;
a->printPretty();
*c=*d;
std::cout << (c->insert(36)) << std::endl;
*d=*b;
std::cout << (a->remove(56)) << std::endl;
std::cout << (d->remove(376)) << std::endl;
std::cout << (a->insert(100)) << std::endl;
std::cout << (c->remove(298)) << std::endl;
std::cout << (c->remove(315)) << std::endl;
std::cout << (b->insert(376)) << std::endl;
std::cout << (c->remove(36)) << std::endl;
*a=*a;
std::cout << (e->remove(250)) << std::endl;
*a=*e;
d->printPretty();
std::cout << (b->remove(428)) << std::endl;
std::cout << (a->insert(384)) << std::endl;
std::cout << (e->insert(384)) << std::endl;
std::cout << (d->remove(370)) << std::endl;
*c=*d;
*a=*c;
std::cout << (c->remove(487)) << std::endl;
*c=*a;
*a=*c;
a->printPretty();
std::cout << (e->remove(384)) << std::endl;
d->printPretty();
std::cout << (d->insert(217)) << std::endl;
std::cout << (d->insert(439)) << std::endl;
std::cout << (b->insert(215)) << std::endl;
*b=*e;
*a=*d;
std::cout << (d->insert(288)) << std::endl;
std::cout << (b->insert(188)) << std::endl;
c->printPretty();
*d=*e;
*b=*c;
*c=*a;
std::cout << (e->insert(318)) << std::endl;
c->printPretty();
std::cout << (d->remove(101)) << std::endl;
std::cout << (e->remove(193)) << std::endl;
std::cout << (a->insert(281)) << std::endl;
std::cout << (a->insert(158)) << std::endl;
a->printPretty();
std::cout << (b->remove(128)) << std::endl;
std::cout << (e->remove(375)) << std::endl;
std::cout << (a->insert(217)) << std::endl;
std::cout << (b->insert(276)) << std::endl;
std::cout << (e->insert(318)) << std::endl;
std::cout << (e->remove(427)) << std::endl;
std::cout << (a->remove(439)) << std::endl;
std::cout << (a->remove(292)) << std::endl;
std::cout << (a->insert(217)) << std::endl;
std::cout << (b->insert(276)) << std::endl;
*b=*d;
std::cout << (d->insert(239)) << std::endl;
*a=*b;
std::cout << (c->remove(160)) << std::endl;
*a=*a;
std::cout << (e->insert(318)) << std::endl;
std::cout << (d->insert(107)) << std::endl;
d->printPretty();
std::cout << (c->remove(2)) << std::endl;
std::cout << (c->remove(59)) << std::endl;
std::cout << (d->insert(239)) << std::endl;
*e=*c;
std::cout << (c->remove(165)) << std::endl;
d->printPretty();
std::cout << (d->insert(239)) << std::endl;
std::cout << (a->remove(194)) << std::endl;
c->printPretty();
std::cout << (e->insert(375)) << std::endl;
std::cout << (c->insert(214)) << std::endl;
std::cout << (b->remove(131)) << std::endl;
a->printPretty();
std::cout << (b->remove(157)) << std::endl;
std::cout << (e->insert(439)) << std::endl;
d->printPretty();
std::cout << (e->remove(439)) << std::endl;
std::cout << (c->remove(389)) << std::endl;
std::cout << (e->insert(240)) << std::endl;
std::cout << (c->insert(439)) << std::endl;
std::cout << (e->remove(375)) << std::endl;
*c=*d;
std::cout << (d->insert(239)) << std::endl;
*c=*c;
std::cout << (e->remove(240)) << std::endl;
e->printPretty();
*a=*b;
std::cout << (e->remove(485)) << std::endl;
std::cout << (d->remove(107)) << std::endl;
std::cout << (d->remove(142)) << std::endl;
std::cout << (c->insert(239)) << std::endl;
c->printPretty();
*a=*e;
std::cout << (e->insert(217)) << std::endl;
std::cout << (a->remove(169)) << std::endl;
std::cout << (c->insert(248)) << std::endl;
std::cout << (e->remove(406)) << std::endl;
std::cout << (a->remove(217)) << std::endl;
std::cout << (d->remove(239)) << std::endl;
*b=*a;
std::cout << (e->insert(233)) << std::endl;
std::cout << (e->insert(217)) << std::endl;
*c=*c;
d->printPretty();
std::cout << (c->insert(248)) << std::endl;
*b=*a;
*d=*e;
*a=*b;
std::cout << (d->insert(217)) << std::endl;
std::cout << (e->insert(233)) << std::endl;
std::cout << (a->remove(142)) << std::endl;
std::cout << (b->insert(192)) << std::endl;
c->printPretty();
std::cout << (d->remove(233)) << std::endl;
std::cout << (c->insert(107)) << std::endl;
*d=*e;
std::cout << (a->insert(447)) << std::endl;
b->printPretty();
std::cout << (b->remove(319)) << std::endl;
std::cout << (b->remove(192)) << std::endl;
std::cout << (b->insert(212)) << std::endl;
std::cout << (a->remove(318)) << std::endl;
e->printPretty();
e->printPretty();
std::cout << (c->remove(107)) << std::endl;
std::cout << (e->remove(1)) << std::endl;
std::cout << (e->remove(273)) << std::endl;
std::cout << (d->insert(3)) << std::endl;
std::cout << (c->remove(248)) << std::endl;
*b=*b;
std::cout << (d->remove(217)) << std::endl;
std::cout << (a->remove(447)) << std::endl;
a->printPretty();
std::cout << (e->remove(295)) << std::endl;
*d=*d;
*a=*d;
std::cout << (c->insert(239)) << std::endl;
std::cout << (e->insert(233)) << std::endl;
std::cout << (d->remove(3)) << std::endl;
*a=*a;
std::cout << (b->remove(347)) << std::endl;
std::cout << (c->remove(180)) << std::endl;
std::cout << (d->remove(250)) << std::endl;
*e=*b;
std::cout << (b->remove(212)) << std::endl;
*b=*e;
e->printPretty();
std::cout << (a->insert(3)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << (b->remove(444)) << std::endl;
a->printPretty();
std::cout << (b->remove(246)) << std::endl;
*b=*e;
std::cout << (e->insert(212)) << std::endl;
d->printPretty();
std::cout << (d->insert(297)) << std::endl;
std::cout << (b->remove(215)) << std::endl;
std::cout << (e->insert(212)) << std::endl;
std::cout << (b->insert(488)) << std::endl;
b->printPretty();
std::cout << (c->remove(461)) << std::endl;
std::cout << (e->insert(212)) << std::endl;
b->printPretty();
std::cout << (c->remove(239)) << std::endl;
b->printPretty();
std::cout << (d->remove(16)) << std::endl;
std::cout << (b->insert(138)) << std::endl;
std::cout << (d->insert(289)) << std::endl;
std::cout << (e->remove(296)) << std::endl;
a->printPretty();
*a=*e;
std::cout << (d->insert(297)) << std::endl;
std::cout << (d->remove(297)) << std::endl;
std::cout << (d->insert(447)) << std::endl;
*b=*c;
std::cout << (e->remove(212)) << std::endl;
d->printPretty();
std::cout << (e->remove(212)) << std::endl;
std::cout << (c->insert(215)) << std::endl;
b->printPretty();
b->printPretty();
*b=*e;
*d=*e;
std::cout << (c->insert(283)) << std::endl;
c->printPretty();
std::cout << (b->remove(318)) << std::endl;
std::cout << (a->remove(458)) << std::endl;
std::cout << (a->insert(212)) << std::endl;
std::cout << (c->remove(215)) << std::endl;
*e=*b;
std::cout << (c->remove(266)) << std::endl;
a->printPretty();
*a=*a;
std::cout << (a->remove(212)) << std::endl;
std::cout << (e->remove(378)) << std::endl;
d->printPretty();
*e=*c;
std::cout << (e->insert(283)) << std::endl;
std::cout << (a->insert(334)) << std::endl;
std::cout << (b->remove(332)) << std::endl;
std::cout << (c->insert(283)) << std::endl;
std::cout << (a->remove(334)) << std::endl;
std::cout << (d->remove(344)) << std::endl;
std::cout << (a->remove(122)) << std::endl;
*d=*b;
std::cout << (e->remove(283)) << std::endl;
std::cout << (e->remove(449)) << std::endl;
*d=*c;
a->printPretty();
std::cout << (a->remove(212)) << std::endl;
std::cout << (c->remove(27)) << std::endl;
std::cout << (e->remove(220)) << std::endl;
e->printPretty();
std::cout << (d->insert(405)) << std::endl;
std::cout << (a->insert(202)) << std::endl;
std::cout << (b->remove(66)) << std::endl;
c->printPretty();
std::cout << (d->remove(364)) << std::endl;
std::cout << (a->insert(124)) << std::endl;
*b=*a;
std::cout << (d->remove(319)) << std::endl;
std::cout << (c->insert(20)) << std::endl;
std::cout << (e->remove(130)) << std::endl;
b->printPretty();
*e=*e;
std::cout << (a->insert(21)) << std::endl;
*e=*e;
std::cout << (d->remove(274)) << std::endl;
std::cout << (d->insert(494)) << std::endl;
*a=*e;
*a=*d;
std::cout << (c->insert(283)) << std::endl;
std::cout << (b->insert(202)) << std::endl;
c->printPretty();
std::cout << (a->remove(70)) << std::endl;
e->printPretty();
std::cout << (b->remove(124)) << std::endl;
c->printPretty();
*a=*e;
std::cout << (b->remove(202)) << std::endl;
std::cout << (c->remove(283)) << std::endl;
d->printPretty();
std::cout << (a->remove(136)) << std::endl;
std::cout << (e->remove(484)) << std::endl;
*c=*e;
std::cout << (d->insert(283)) << std::endl;
std::cout << (d->remove(399)) << std::endl;
*e=*b;
b->printPretty();
std::cout << (d->insert(494)) << std::endl;
std::cout << (c->remove(478)) << std::endl;
a->printPretty();
*e=*d;
std::cout << (b->remove(401)) << std::endl;
d->printPretty();
std::cout << (c->insert(326)) << std::endl;
std::cout << (b->insert(324)) << std::endl;
*b=*c;
std::cout << (c->insert(326)) << std::endl;
std::cout << (b->insert(445)) << std::endl;
std::cout << (b->insert(173)) << std::endl;
std::cout << (a->remove(434)) << std::endl;
*c=*e;
std::cout << (e->insert(329)) << std::endl;
std::cout << (d->remove(283)) << std::endl;
std::cout << (d->insert(373)) << std::endl;
std::cout << (d->insert(234)) << std::endl;
*c=*e;
std::cout << (a->remove(142)) << std::endl;
std::cout << (d->remove(106)) << std::endl;
std::cout << (b->insert(326)) << std::endl;
std::cout << (d->remove(373)) << std::endl;
*e=*b;
std::cout << (c->insert(207)) << std::endl;
std::cout << (e->remove(170)) << std::endl;
std::cout << (b->remove(391)) << std::endl;
std::cout << (c->remove(207)) << std::endl;
*c=*c;
std::cout << (c->insert(329)) << std::endl;
e->printPretty();
std::cout << (e->insert(445)) << std::endl;
b->printPretty();
std::cout << (e->insert(173)) << std::endl;
*e=*a;
*c=*b;
std::cout << (e->remove(97)) << std::endl;
std::cout << (b->remove(445)) << std::endl;
std::cout << (d->remove(162)) << std::endl;
*c=*b;
*d=*e;
std::cout << (c->remove(267)) << std::endl;
std::cout << (c->remove(326)) << std::endl;
a->printPretty();
std::cout << (c->remove(173)) << std::endl;
std::cout << (e->remove(449)) << std::endl;
std::cout << (b->remove(326)) << std::endl;
std::cout << (b->insert(139)) << std::endl;
std::cout << (c->remove(32)) << std::endl;
b->printPretty();
std::cout << (a->remove(496)) << std::endl;
std::cout << (e->insert(37)) << std::endl;
*c=*a;
std::cout << (e->remove(474)) << std::endl;
std::cout << (d->remove(490)) << std::endl;
std::cout << (a->insert(276)) << std::endl;
std::cout << (e->insert(37)) << std::endl;
std::cout << (e->insert(37)) << std::endl;
d->printPretty();
*b=*d;
std::cout << (a->insert(107)) << std::endl;
std::cout << (e->insert(37)) << std::endl;
std::cout << (a->remove(460)) << std::endl;
std::cout << (a->insert(327)) << std::endl;
std::cout << (a->remove(107)) << std::endl;
*b=*a;
std::cout << (e->insert(271)) << std::endl;
std::cout << (e->remove(149)) << std::endl;
std::cout << (d->insert(435)) << std::endl;
*e=*d;
*d=*e;
std::cout << (e->insert(33)) << std::endl;
std::cout << (d->remove(179)) << std::endl;
std::cout << (a->remove(276)) << std::endl;
std::cout << (a->remove(319)) << std::endl;
std::cout << (c->remove(244)) << std::endl;
std::cout << (d->insert(367)) << std::endl;
std::cout << (e->insert(162)) << std::endl;
std::cout << (a->insert(386)) << std::endl;
*c=*b;
*d=*c;
std::cout << (a->remove(266)) << std::endl;
std::cout << (e->remove(235)) << std::endl;
*a=*a;
*e=*b;
std::cout << (c->insert(276)) << std::endl;
std::cout << (d->insert(327)) << std::endl;
std::cout << (d->insert(327)) << std::endl;
std::cout << (b->remove(276)) << std::endl;
*b=*e;
a->printPretty();
std::cout << (c->insert(477)) << std::endl;
std::cout << (d->insert(327)) << std::endl;
c->printPretty();
std::cout << (d->insert(191)) << std::endl;
*b=*b;
*e=*b;
std::cout << (c->remove(45)) << std::endl;
std::cout << (a->insert(372)) << std::endl;
std::cout << (c->insert(347)) << std::endl;
std::cout << (e->insert(81)) << std::endl;
std::cout << (c->insert(276)) << std::endl;
std::cout << (c->insert(477)) << std::endl;
std::cout << (b->remove(244)) << std::endl;
std::cout << (e->insert(83)) << std::endl;
std::cout << (c->insert(477)) << std::endl;
std::cout << (c->remove(165)) << std::endl;
std::cout << (c->insert(347)) << std::endl;
std::cout << (a->remove(296)) << std::endl;
*a=*e;
b->printPretty();
a->printPretty();
std::cout << (d->insert(185)) << std::endl;
std::cout << (c->insert(389)) << std::endl;
std::cout << (d->remove(185)) << std::endl;
std::cout << (c->insert(485)) << std::endl;
std::cout << (d->insert(383)) << std::endl;
std::cout << (d->remove(40)) << std::endl;
d->printPretty();
std::cout << (b->remove(67)) << std::endl;
c->printPretty();
*d=*b;
d->printPretty();
std::cout << (b->insert(450)) << std::endl;
std::cout << (d->insert(276)) << std::endl;
std::cout << (a->remove(327)) << std::endl;
std::cout << (b->remove(450)) << std::endl;
std::cout << (d->insert(1)) << std::endl;
std::cout << (c->insert(8)) << std::endl;
std::cout << (d->remove(500)) << std::endl;
std::cout << (b->insert(327)) << std::endl;
std::cout << (c->remove(389)) << std::endl;
std::cout << (b->insert(183)) << std::endl;
e->printPretty();
std::cout << (c->remove(85)) << std::endl;
std::cout << (e->insert(450)) << std::endl;
*e=*d;
*b=*d;
*b=*e;
b->printPretty();
*d=*d;
d->printPretty();
c->printPretty();
std::cout << (e->insert(1)) << std::endl;
std::cout << (e->remove(327)) << std::endl;
std::cout << (e->remove(475)) << std::endl;
c->printPretty();
std::cout << (c->remove(82)) << std::endl;
*d=*d;
*b=*a;
std::cout << (d->remove(171)) << std::endl;
std::cout << (d->insert(327)) << std::endl;
std::cout << (b->insert(83)) << std::endl;
b->printPretty();
*a=*c;
std::cout << (a->remove(398)) << std::endl;
std::cout << (d->remove(127)) << std::endl;
std::cout << (d->remove(327)) << std::endl;
std::cout << (c->insert(331)) << std::endl;
std::cout << (e->insert(19)) << std::endl;
std::cout << (e->insert(455)) << std::endl;
std::cout << (a->insert(347)) << std::endl;
std::cout << (b->remove(326)) << std::endl;
*b=*d;
std::cout << (a->remove(105)) << std::endl;
std::cout << (b->insert(121)) << std::endl;
*a=*b;
std::cout << (a->remove(1)) << std::endl;
std::cout << (d->remove(353)) << std::endl;
*a=*e;
std::cout << (c->remove(276)) << std::endl;
std::cout << (d->insert(194)) << std::endl;
std::cout << (a->insert(51)) << std::endl;
std::cout << (d->insert(194)) << std::endl;
std::cout << (a->remove(1)) << std::endl;
std::cout << (c->insert(327)) << std::endl;
std::cout << (c->insert(331)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (b->remove(421)) << std::endl;
std::cout << (d->insert(181)) << std::endl;
c->printPretty();
*b=*d;
std::cout << (c->insert(18)) << std::endl;
std::cout << (a->insert(455)) << std::endl;
std::cout << (d->remove(276)) << std::endl;
std::cout << (e->remove(263)) << std::endl;
*b=*d;
e->printPretty();
std::cout << (b->remove(181)) << std::endl;
std::cout << (d->remove(315)) << std::endl;
std::cout << (e->insert(19)) << std::endl;
*a=*a;
std::cout << (c->insert(331)) << std::endl;
*d=*c;
std::cout << (d->remove(347)) << std::endl;
*e=*b;
std::cout << (c->insert(360)) << std::endl;
std::cout << (c->remove(433)) << std::endl;
*b=*c;
std::cout << (b->insert(64)) << std::endl;
b->printPretty();
e->printPretty();
a->printPretty();
*d=*e;
std::cout << (e->remove(459)) << std::endl;
std::cout << (d->insert(350)) << std::endl;
c->printPretty();
c->printPretty();
std::cout << (a->insert(276)) << std::endl;
std::cout << (e->insert(194)) << std::endl;
std::cout << (a->remove(140)) << std::endl;
std::cout << (d->insert(1)) << std::endl;
std::cout << (e->insert(168)) << std::endl;
e->printPretty();
*a=*c;
std::cout << (a->insert(258)) << std::endl;
d->printPretty();
std::cout << (d->remove(350)) << std::endl;
*d=*a;
std::cout << (b->remove(360)) << std::endl;
*d=*e;
std::cout << (e->insert(18)) << std::endl;
std::cout << (c->remove(120)) << std::endl;
std::cout << (a->remove(410)) << std::endl;
std::cout << (d->remove(305)) << std::endl;
*b=*e;
std::cout << (b->remove(177)) << std::endl;
std::cout << (c->remove(451)) << std::endl;
std::cout << (c->insert(305)) << std::endl;
std::cout << (e->insert(168)) << std::endl;
c->printPretty();
std::cout << (b->insert(18)) << std::endl;
std::cout << (c->remove(219)) << std::endl;
c->printPretty();
std::cout << (b->insert(18)) << std::endl;
std::cout << (e->remove(18)) << std::endl;
std::cout << (c->insert(360)) << std::endl;
std::cout << (a->remove(97)) << std::endl;
b->printPretty();
std::cout << (c->remove(18)) << std::endl;
b->printPretty();
std::cout << (a->insert(44)) << std::endl;
std::cout << (d->remove(194)) << std::endl;
std::cout << (c->insert(347)) << std::endl;
*a=*e;
std::cout << (b->insert(177)) << std::endl;
std::cout << (d->remove(1)) << std::endl;
d->printPretty();
std::cout << (e->insert(1)) << std::endl;
d->printPretty();
std::cout << (e->insert(32)) << std::endl;
*a=*e;
std::cout << (e->remove(322)) << std::endl;
std::cout << (a->remove(105)) << std::endl;
c->printPretty();
std::cout << (d->insert(168)) << std::endl;
std::cout << (c->remove(230)) << std::endl;
std::cout << (e->remove(194)) << std::endl;
std::cout << (b->insert(34)) << std::endl;
std::cout << (a->insert(168)) << std::endl;
d->printPretty();
std::cout << (a->insert(478)) << std::endl;
a->printPretty();
std::cout << (d->remove(413)) << std::endl;
*a=*e;
std::cout << (e->insert(32)) << std::endl;
std::cout << (e->remove(1)) << std::endl;
std::cout << (d->insert(50)) << std::endl;
std::cout << (a->insert(248)) << std::endl;
*d=*e;
std::cout << (c->insert(331)) << std::endl;
std::cout << (c->insert(451)) << std::endl;
c->printPretty();
*d=*d;
std::cout << (d->remove(168)) << std::endl;
std::cout << (d->remove(411)) << std::endl;
std::cout << (e->insert(168)) << std::endl;
std::cout << (d->insert(306)) << std::endl;
*b=*b;
a->printPretty();
std::cout << (e->remove(49)) << std::endl;
*e=*a;
std::cout << (b->remove(16)) << std::endl;
std::cout << (b->remove(18)) << std::endl;
std::cout << (c->remove(426)) << std::endl;
std::cout << (a->insert(52)) << std::endl;
std::cout << (e->insert(168)) << std::endl;
d->printPretty();
std::cout << (c->remove(108)) << std::endl;
std::cout << (a->remove(411)) << std::endl;
std::cout << (e->insert(22)) << std::endl;
std::cout << (e->remove(248)) << std::endl;
a->printPretty();
std::cout << (a->remove(477)) << std::endl;
std::cout << (c->remove(98)) << std::endl;
std::cout << (c->insert(78)) << std::endl;
*d=*d;
e->printPretty();
std::cout << (b->insert(5)) << std::endl;
e->printPretty();
std::cout << (e->insert(252)) << std::endl;
std::cout << (c->remove(250)) << std::endl;
std::cout << (c->insert(217)) << std::endl;
std::cout << (c->remove(481)) << std::endl;
e->printPretty();
std::cout << (b->insert(7)) << std::endl;
std::cout << (a->insert(210)) << std::endl;
std::cout << (b->remove(410)) << std::endl;
std::cout << (d->remove(29)) << std::endl;
*a=*e;
std::cout << (c->remove(485)) << std::endl;
std::cout << (a->insert(22)) << std::endl;
std::cout << (e->insert(449)) << std::endl;
c->printPretty();
std::cout << (a->insert(252)) << std::endl;
c->printPretty();
*c=*b;
std::cout << (d->insert(306)) << std::endl;
std::cout << (d->remove(32)) << std::endl;
std::cout << (e->remove(252)) << std::endl;
std::cout << (a->remove(168)) << std::endl;
std::cout << (a->remove(32)) << std::endl;
a->printPretty();
*d=*e;
std::cout << (e->insert(44)) << std::endl;
std::cout << (c->remove(177)) << std::endl;
std::cout << (e->remove(449)) << std::endl;
std::cout << (e->remove(408)) << std::endl;
std::cout << (b->remove(151)) << std::endl;
std::cout << (d->insert(290)) << std::endl;
std::cout << (b->remove(213)) << std::endl;
a->printPretty();
d->printPretty();
*c=*e;
std::cout << (b->remove(448)) << std::endl;
std::cout << (b->remove(194)) << std::endl;
d->printPretty();
std::cout << (e->insert(72)) << std::endl;
std::cout << (e->remove(32)) << std::endl;
std::cout << (a->remove(252)) << std::endl;
std::cout << (e->insert(72)) << std::endl;
*c=*e;
std::cout << (c->remove(72)) << std::endl;
std::cout << (c->remove(186)) << std::endl;
c->printPretty();
std::cout << (a->insert(369)) << std::endl;
a->printPretty();
d->printPretty();
b->printPretty();
std::cout << (e->insert(386)) << std::endl;
std::cout << (b->insert(168)) << std::endl;
*a=*e;
std::cout << (a->insert(418)) << std::endl;
std::cout << (c->insert(1)) << std::endl;
std::cout << (d->insert(449)) << std::endl;
std::cout << (e->insert(275)) << std::endl;
*a=*a;
std::cout << (d->insert(168)) << std::endl;
d->printPretty();
std::cout << (d->insert(274)) << std::endl;
std::cout << (c->remove(363)) << std::endl;
std::cout << (e->remove(82)) << std::endl;
std::cout << (c->insert(44)) << std::endl;
*a=*c;
std::cout << (c->remove(44)) << std::endl;
d->printPretty();
*c=*d;
std::cout << (d->insert(32)) << std::endl;
std::cout << (b->remove(402)) << std::endl;
*a=*e;
*b=*d;
std::cout << (e->remove(70)) << std::endl;
std::cout << (a->remove(112)) << std::endl;
std::cout << (a->insert(1)) << std::endl;
std::cout << (d->insert(260)) << std::endl;
std::cout << (b->remove(290)) << std::endl;
*e=*c;
std::cout << (e->insert(486)) << std::endl;
std::cout << (b->remove(168)) << std::endl;
c->printPretty();
std::cout << (d->insert(95)) << std::endl;
*b=*c;
std::cout << (e->insert(168)) << std::endl;
d->printPretty();
c->printPretty();
a->printPretty();
a->printPretty();
std::cout << (c->insert(290)) << std::endl;
b->printPretty();
std::cout << (d->insert(290)) << std::endl;
std::cout << (d->remove(383)) << std::endl;
return 0;
}