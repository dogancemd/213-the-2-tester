#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << (a->remove(18)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
b->printPretty();
*b=*b;
ScapegoatTree<int> *c=new ScapegoatTree<int>(*a);
ScapegoatTree<int> *d=new ScapegoatTree<int>(*a);
*b=*b;
b->printPretty();
std::cout << (a->remove(66)) << std::endl;
ScapegoatTree<int> *e=new ScapegoatTree<int>(*d);
std::cout << (b->insert(58)) << std::endl;
std::cout << (e->insert(173)) << std::endl;
c->printPretty();
std::cout << (c->insert(77)) << std::endl;
std::cout << (b->remove(103)) << std::endl;
b->printPretty();
e->printPretty();
std::cout << (e->insert(173)) << std::endl;
std::cout << (d->insert(315)) << std::endl;
std::cout << (c->remove(77)) << std::endl;
*c=*d;
std::cout << (c->insert(259)) << std::endl;
std::cout << (d->insert(315)) << std::endl;
*a=*e;
std::cout << (c->insert(473)) << std::endl;
std::cout << (b->remove(58)) << std::endl;
*b=*a;
std::cout << (e->insert(173)) << std::endl;
c->printPretty();
std::cout << (d->insert(315)) << std::endl;
std::cout << (b->insert(173)) << std::endl;
std::cout << (a->insert(495)) << std::endl;
std::cout << (d->insert(315)) << std::endl;
std::cout << (c->remove(165)) << std::endl;
*b=*a;
std::cout << (a->insert(495)) << std::endl;
std::cout << (c->insert(65)) << std::endl;
d->printPretty();
std::cout << (c->remove(65)) << std::endl;
*b=*c;
std::cout << (b->insert(374)) << std::endl;
std::cout << (c->remove(315)) << std::endl;
*e=*e;
std::cout << (b->remove(374)) << std::endl;
e->printPretty();
*b=*b;
std::cout << (d->insert(315)) << std::endl;
c->printPretty();
std::cout << (a->insert(164)) << std::endl;
std::cout << (e->insert(173)) << std::endl;
c->printPretty();
*d=*e;
a->printPretty();
std::cout << (c->insert(473)) << std::endl;
std::cout << (a->insert(246)) << std::endl;
std::cout << (d->remove(384)) << std::endl;
d->printPretty();
std::cout << (a->insert(246)) << std::endl;
std::cout << (b->remove(315)) << std::endl;
std::cout << (c->remove(473)) << std::endl;
c->printPretty();
*c=*c;
d->printPretty();
std::cout << (b->insert(164)) << std::endl;
std::cout << (d->insert(190)) << std::endl;
std::cout << (d->remove(190)) << std::endl;
std::cout << (e->remove(471)) << std::endl;
std::cout << (c->remove(259)) << std::endl;
std::cout << (b->insert(384)) << std::endl;
*e=*b;
b->printPretty();
a->printPretty();
std::cout << (b->remove(499)) << std::endl;
c->printPretty();
std::cout << (b->insert(28)) << std::endl;
d->printPretty();
std::cout << (d->remove(105)) << std::endl;
*b=*e;
e->printPretty();
e->printPretty();
std::cout << (a->remove(173)) << std::endl;
c->printPretty();
std::cout << (b->insert(384)) << std::endl;
e->printPretty();
*b=*a;
b->printPretty();
a->printPretty();
std::cout << (c->insert(78)) << std::endl;
std::cout << (b->insert(251)) << std::endl;
e->printPretty();
std::cout << (e->remove(473)) << std::endl;
a->printPretty();
std::cout << (b->remove(164)) << std::endl;
*a=*b;
std::cout << (a->remove(148)) << std::endl;
d->printPretty();
std::cout << (c->remove(78)) << std::endl;
c->printPretty();
std::cout << (a->insert(495)) << std::endl;
e->printPretty();
std::cout << (b->insert(310)) << std::endl;
std::cout << (b->insert(494)) << std::endl;
std::cout << (d->remove(173)) << std::endl;
std::cout << (d->insert(165)) << std::endl;
std::cout << (b->remove(81)) << std::endl;
d->printPretty();
std::cout << (a->remove(418)) << std::endl;
std::cout << (a->remove(495)) << std::endl;
d->printPretty();
std::cout << (e->remove(164)) << std::endl;
e->printPretty();
std::cout << (b->insert(494)) << std::endl;
c->printPretty();
a->printPretty();
b->printPretty();
*e=*b;
std::cout << (e->remove(148)) << std::endl;
std::cout << (c->remove(98)) << std::endl;
e->printPretty();
*d=*b;
std::cout << (c->insert(50)) << std::endl;
std::cout << (c->remove(50)) << std::endl;
e->printPretty();
std::cout << (b->insert(490)) << std::endl;
std::cout << (b->insert(251)) << std::endl;
c->printPretty();
*b=*b;
*a=*b;
*e=*a;
std::cout << (a->insert(110)) << std::endl;
std::cout << (a->insert(378)) << std::endl;
c->printPretty();
*d=*e;
*b=*a;
std::cout << (e->insert(494)) << std::endl;
a->printPretty();
std::cout << (e->insert(375)) << std::endl;
std::cout << (b->remove(110)) << std::endl;
std::cout << (b->remove(18)) << std::endl;
std::cout << (d->insert(218)) << std::endl;
std::cout << (e->remove(246)) << std::endl;
c->printPretty();
std::cout << (a->insert(110)) << std::endl;
std::cout << (b->remove(495)) << std::endl;
std::cout << (d->insert(178)) << std::endl;
*b=*e;
*c=*a;
std::cout << (c->remove(363)) << std::endl;
a->printPretty();
std::cout << (a->remove(495)) << std::endl;
std::cout << (e->insert(375)) << std::endl;
std::cout << (e->insert(172)) << std::endl;
std::cout << (e->insert(291)) << std::endl;
std::cout << (c->remove(490)) << std::endl;
std::cout << (d->remove(136)) << std::endl;
std::cout << (b->remove(251)) << std::endl;
std::cout << (d->insert(347)) << std::endl;
std::cout << (c->insert(154)) << std::endl;
std::cout << (e->remove(380)) << std::endl;
b->printPretty();
std::cout << (c->remove(310)) << std::endl;
d->printPretty();
e->printPretty();
std::cout << (b->remove(310)) << std::endl;
e->printPretty();
std::cout << (b->remove(163)) << std::endl;
std::cout << (d->insert(490)) << std::endl;
std::cout << (d->insert(399)) << std::endl;
std::cout << (d->insert(255)) << std::endl;
std::cout << (a->insert(110)) << std::endl;
std::cout << (c->insert(246)) << std::endl;
c->printPretty();
std::cout << (a->remove(294)) << std::endl;
std::cout << (d->insert(372)) << std::endl;
*e=*d;
a->printPretty();
std::cout << (d->insert(415)) << std::endl;
std::cout << (b->remove(63)) << std::endl;
std::cout << (b->remove(490)) << std::endl;
std::cout << (a->insert(310)) << std::endl;
d->printPretty();
std::cout << (b->remove(261)) << std::endl;
*b=*a;
std::cout << (b->remove(310)) << std::endl;
std::cout << (e->insert(219)) << std::endl;
b->printPretty();
a->printPretty();
a->printPretty();
std::cout << (c->remove(331)) << std::endl;
std::cout << (e->remove(109)) << std::endl;
std::cout << (b->insert(251)) << std::endl;
std::cout << (e->remove(218)) << std::endl;
*c=*c;
std::cout << (e->remove(310)) << std::endl;
std::cout << (d->remove(354)) << std::endl;
c->printPretty();
*d=*c;
std::cout << (a->insert(139)) << std::endl;
*b=*d;
std::cout << (c->insert(160)) << std::endl;
e->printPretty();
*a=*a;
std::cout << (c->insert(25)) << std::endl;
std::cout << (b->insert(188)) << std::endl;
std::cout << (a->remove(310)) << std::endl;
std::cout << (e->remove(402)) << std::endl;
std::cout << (a->remove(490)) << std::endl;
std::cout << (e->insert(219)) << std::endl;
std::cout << (a->insert(494)) << std::endl;
std::cout << (c->insert(289)) << std::endl;
std::cout << (b->insert(148)) << std::endl;
std::cout << (a->insert(251)) << std::endl;
c->printPretty();
*d=*e;
std::cout << (d->remove(246)) << std::endl;
std::cout << (b->insert(495)) << std::endl;
std::cout << (c->insert(25)) << std::endl;
std::cout << (d->remove(60)) << std::endl;
std::cout << (a->insert(110)) << std::endl;
std::cout << (c->insert(47)) << std::endl;
std::cout << (d->remove(138)) << std::endl;
a->printPretty();
std::cout << (b->insert(330)) << std::endl;
std::cout << (a->remove(341)) << std::endl;
*c=*d;
std::cout << (a->insert(494)) << std::endl;
*d=*d;
std::cout << (d->insert(131)) << std::endl;
std::cout << (a->remove(110)) << std::endl;
std::cout << (d->insert(31)) << std::endl;
e->printPretty();
std::cout << (a->insert(160)) << std::endl;
*a=*a;
std::cout << (a->insert(320)) << std::endl;
a->printPretty();
std::cout << (e->remove(219)) << std::endl;
std::cout << (b->insert(103)) << std::endl;
b->printPretty();
std::cout << (c->insert(318)) << std::endl;
std::cout << (d->insert(219)) << std::endl;
std::cout << (a->insert(378)) << std::endl;
std::cout << (c->insert(178)) << std::endl;
std::cout << (b->remove(103)) << std::endl;
std::cout << (d->remove(466)) << std::endl;
std::cout << (e->remove(211)) << std::endl;
b->printPretty();
std::cout << (b->insert(154)) << std::endl;
a->printPretty();
*d=*b;
std::cout << (e->remove(68)) << std::endl;
*d=*d;
*c=*b;
std::cout << (c->remove(378)) << std::endl;
std::cout << (e->remove(495)) << std::endl;
std::cout << (a->remove(251)) << std::endl;
c->printPretty();
std::cout << (a->remove(246)) << std::endl;
std::cout << (c->insert(246)) << std::endl;
std::cout << (d->remove(265)) << std::endl;
std::cout << (b->insert(103)) << std::endl;
std::cout << (b->remove(458)) << std::endl;
c->printPretty();
*b=*e;
std::cout << (b->insert(490)) << std::endl;
*a=*d;
std::cout << (e->remove(372)) << std::endl;
*c=*e;
std::cout << (c->remove(490)) << std::endl;
a->printPretty();
*a=*e;
std::cout << (a->insert(13)) << std::endl;
b->printPretty();
c->printPretty();
c->printPretty();
*b=*a;
std::cout << (b->insert(21)) << std::endl;
std::cout << (b->remove(255)) << std::endl;
std::cout << (c->insert(347)) << std::endl;
std::cout << (a->remove(202)) << std::endl;
std::cout << (c->remove(119)) << std::endl;
*c=*b;
std::cout << (c->remove(399)) << std::endl;
std::cout << (d->remove(313)) << std::endl;
std::cout << (e->remove(255)) << std::endl;
std::cout << (e->insert(147)) << std::endl;
std::cout << (b->remove(378)) << std::endl;
std::cout << (e->remove(347)) << std::endl;
std::cout << (c->insert(490)) << std::endl;
std::cout << (d->insert(376)) << std::endl;
std::cout << (c->insert(178)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (c->remove(312)) << std::endl;
std::cout << (c->remove(426)) << std::endl;
std::cout << (b->insert(246)) << std::endl;
std::cout << (c->insert(380)) << std::endl;
std::cout << (d->remove(429)) << std::endl;
std::cout << (d->insert(378)) << std::endl;
std::cout << (d->insert(154)) << std::endl;
std::cout << (d->remove(148)) << std::endl;
std::cout << (b->remove(134)) << std::endl;
std::cout << (e->remove(251)) << std::endl;
d->printPretty();
*a=*a;
a->printPretty();
std::cout << (a->insert(490)) << std::endl;
a->printPretty();
*e=*a;
std::cout << (c->insert(13)) << std::endl;
std::cout << (b->insert(227)) << std::endl;
std::cout << (b->insert(494)) << std::endl;
std::cout << (b->insert(120)) << std::endl;
*d=*a;
std::cout << (c->insert(416)) << std::endl;
std::cout << (d->remove(490)) << std::endl;
std::cout << (d->insert(246)) << std::endl;
*b=*e;
std::cout << (d->insert(255)) << std::endl;
c->printPretty();
std::cout << (e->insert(28)) << std::endl;
b->printPretty();
std::cout << (c->insert(164)) << std::endl;
std::cout << (d->remove(340)) << std::endl;
std::cout << (d->insert(187)) << std::endl;
std::cout << (a->insert(459)) << std::endl;
*d=*e;
std::cout << (e->remove(204)) << std::endl;
std::cout << (c->insert(347)) << std::endl;
*d=*d;
*c=*a;
std::cout << (c->insert(251)) << std::endl;
std::cout << (b->insert(494)) << std::endl;
std::cout << (c->remove(251)) << std::endl;
std::cout << (c->remove(457)) << std::endl;
std::cout << (d->insert(417)) << std::endl;
*b=*c;
*a=*d;
*c=*b;
std::cout << (e->remove(285)) << std::endl;
b->printPretty();
*a=*d;
std::cout << (c->remove(368)) << std::endl;
std::cout << (c->remove(219)) << std::endl;
std::cout << (a->insert(124)) << std::endl;
e->printPretty();
d->printPretty();
*b=*b;
std::cout << (d->remove(251)) << std::endl;
std::cout << (d->remove(278)) << std::endl;
std::cout << (d->remove(156)) << std::endl;
std::cout << (d->remove(365)) << std::endl;
std::cout << (d->remove(347)) << std::endl;
b->printPretty();
*c=*a;
std::cout << (b->insert(459)) << std::endl;
std::cout << (b->insert(246)) << std::endl;
std::cout << (d->insert(219)) << std::endl;
std::cout << (d->insert(484)) << std::endl;
*a=*b;
std::cout << (b->remove(459)) << std::endl;
std::cout << (d->insert(255)) << std::endl;
c->printPretty();
std::cout << (d->insert(399)) << std::endl;
std::cout << (c->remove(21)) << std::endl;
*e=*a;
*b=*c;
d->printPretty();
std::cout << (c->insert(417)) << std::endl;
std::cout << (a->insert(347)) << std::endl;
d->printPretty();
a->printPretty();
std::cout << (a->insert(170)) << std::endl;
std::cout << (e->insert(178)) << std::endl;
std::cout << (b->insert(132)) << std::endl;
std::cout << (b->remove(113)) << std::endl;
std::cout << (e->remove(487)) << std::endl;
std::cout << (e->remove(399)) << std::endl;
std::cout << (c->remove(251)) << std::endl;
*e=*d;
*a=*e;
std::cout << (e->insert(399)) << std::endl;
std::cout << (b->insert(132)) << std::endl;
c->printPretty();
std::cout << (a->insert(255)) << std::endl;
*b=*c;
std::cout << (a->insert(61)) << std::endl;
std::cout << (b->insert(494)) << std::endl;
std::cout << (b->insert(124)) << std::endl;
d->printPretty();
*d=*a;
std::cout << (b->insert(490)) << std::endl;
std::cout << (a->insert(61)) << std::endl;
d->printPretty();
std::cout << (e->insert(209)) << std::endl;
std::cout << (a->remove(178)) << std::endl;
std::cout << (b->remove(13)) << std::endl;
*d=*b;
std::cout << (b->insert(289)) << std::endl;
std::cout << (c->remove(246)) << std::endl;
std::cout << (d->insert(20)) << std::endl;
std::cout << (e->remove(62)) << std::endl;
std::cout << (e->insert(246)) << std::endl;
std::cout << (c->remove(24)) << std::endl;
std::cout << (e->remove(264)) << std::endl;
std::cout << (a->insert(246)) << std::endl;
*b=*a;
e->printPretty();
std::cout << (a->remove(245)) << std::endl;
*b=*c;
c->printPretty();
std::cout << (c->remove(490)) << std::endl;
std::cout << (e->remove(267)) << std::endl;
std::cout << (c->remove(124)) << std::endl;
b->printPretty();
std::cout << (e->remove(364)) << std::endl;
std::cout << (e->insert(185)) << std::endl;
c->printPretty();
std::cout << (e->insert(417)) << std::endl;
c->printPretty();
std::cout << (c->remove(250)) << std::endl;
std::cout << (a->remove(240)) << std::endl;
*b=*b;
c->printPretty();
std::cout << (a->remove(13)) << std::endl;
a->printPretty();
std::cout << (d->remove(494)) << std::endl;
std::cout << (a->remove(255)) << std::endl;
std::cout << (c->insert(28)) << std::endl;
std::cout << (e->insert(129)) << std::endl;
std::cout << (c->remove(493)) << std::endl;
*e=*d;
std::cout << (e->remove(167)) << std::endl;
*a=*d;
*d=*d;
std::cout << (d->remove(262)) << std::endl;
std::cout << (e->remove(164)) << std::endl;
a->printPretty();
std::cout << (d->remove(255)) << std::endl;
b->printPretty();
std::cout << (c->insert(111)) << std::endl;
std::cout << (b->remove(244)) << std::endl;
std::cout << (d->remove(246)) << std::endl;
b->printPretty();
*e=*c;
std::cout << (c->remove(417)) << std::endl;
*c=*e;
b->printPretty();
std::cout << (a->remove(195)) << std::endl;
std::cout << (e->remove(178)) << std::endl;
std::cout << (e->insert(379)) << std::endl;
std::cout << (e->insert(379)) << std::endl;
*e=*c;
*e=*a;
std::cout << (e->remove(11)) << std::endl;
d->printPretty();
std::cout << (a->insert(246)) << std::endl;
std::cout << (b->insert(399)) << std::endl;
c->printPretty();
std::cout << (a->remove(177)) << std::endl;
std::cout << (d->remove(399)) << std::endl;
std::cout << (d->insert(314)) << std::endl;
std::cout << (e->insert(492)) << std::endl;
std::cout << (e->remove(117)) << std::endl;
d->printPretty();
std::cout << (e->remove(255)) << std::endl;
b->printPretty();
d->printPretty();
std::cout << (a->remove(28)) << std::endl;
*a=*b;
std::cout << (c->remove(372)) << std::endl;
*e=*c;
std::cout << (b->insert(347)) << std::endl;
e->printPretty();
std::cout << (c->insert(118)) << std::endl;
std::cout << (a->insert(494)) << std::endl;
c->printPretty();
std::cout << (c->remove(389)) << std::endl;
*b=*b;
std::cout << (b->insert(255)) << std::endl;
*d=*c;
*c=*b;
std::cout << (e->insert(255)) << std::endl;
std::cout << (d->remove(311)) << std::endl;
std::cout << (c->insert(490)) << std::endl;
*b=*a;
std::cout << (e->remove(445)) << std::endl;
d->printPretty();
std::cout << (d->insert(255)) << std::endl;
*b=*a;
*e=*c;
std::cout << (a->remove(347)) << std::endl;
std::cout << (a->remove(83)) << std::endl;
std::cout << (b->remove(347)) << std::endl;
std::cout << (e->remove(355)) << std::endl;
std::cout << (a->remove(173)) << std::endl;
d->printPretty();
std::cout << (e->remove(149)) << std::endl;
d->printPretty();
std::cout << (c->insert(347)) << std::endl;
*e=*b;
std::cout << (e->insert(28)) << std::endl;
std::cout << (a->insert(190)) << std::endl;
std::cout << (d->insert(389)) << std::endl;
std::cout << (d->insert(53)) << std::endl;
*a=*c;
std::cout << (d->insert(222)) << std::endl;
d->printPretty();
std::cout << (e->insert(210)) << std::endl;
std::cout << (c->remove(417)) << std::endl;
a->printPretty();
std::cout << (e->insert(466)) << std::endl;
*b=*c;
std::cout << (c->remove(28)) << std::endl;
*d=*a;
std::cout << (b->insert(257)) << std::endl;
std::cout << (b->insert(98)) << std::endl;
std::cout << (d->remove(124)) << std::endl;
std::cout << (a->insert(468)) << std::endl;
d->printPretty();
std::cout << (c->remove(290)) << std::endl;
*a=*a;
std::cout << (b->remove(490)) << std::endl;
std::cout << (d->remove(13)) << std::endl;
std::cout << (a->remove(468)) << std::endl;
std::cout << (e->insert(252)) << std::endl;
std::cout << (d->insert(447)) << std::endl;
std::cout << (a->remove(399)) << std::endl;
std::cout << (c->remove(347)) << std::endl;
std::cout << (a->insert(124)) << std::endl;
std::cout << (c->remove(490)) << std::endl;
std::cout << (e->remove(494)) << std::endl;
std::cout << (c->insert(45)) << std::endl;
e->printPretty();
a->printPretty();
c->printPretty();
d->printPretty();
std::cout << (a->remove(280)) << std::endl;
*a=*e;
a->printPretty();
std::cout << (e->insert(100)) << std::endl;
std::cout << (c->remove(399)) << std::endl;
std::cout << (d->insert(255)) << std::endl;
std::cout << (c->insert(13)) << std::endl;
std::cout << (a->insert(449)) << std::endl;
*b=*d;
std::cout << (e->insert(466)) << std::endl;
*c=*b;
c->printPretty();
a->printPretty();
std::cout << (d->remove(347)) << std::endl;
std::cout << (a->insert(266)) << std::endl;
b->printPretty();
std::cout << (d->remove(491)) << std::endl;
std::cout << (c->insert(347)) << std::endl;
std::cout << (a->remove(119)) << std::endl;
*b=*b;
std::cout << (b->remove(107)) << std::endl;
e->printPretty();
*e=*e;
std::cout << (d->remove(189)) << std::endl;
c->printPretty();
std::cout << (c->remove(428)) << std::endl;
*e=*a;
std::cout << (d->insert(399)) << std::endl;
std::cout << (e->insert(126)) << std::endl;
std::cout << (d->insert(434)) << std::endl;
std::cout << (b->remove(6)) << std::endl;
*a=*d;
std::cout << (b->insert(399)) << std::endl;
std::cout << (c->remove(244)) << std::endl;
std::cout << (e->insert(207)) << std::endl;
*c=*b;
b->printPretty();
b->printPretty();
*c=*b;
std::cout << (b->insert(447)) << std::endl;
std::cout << (b->remove(255)) << std::endl;
std::cout << (a->remove(434)) << std::endl;
c->printPretty();
std::cout << (a->remove(417)) << std::endl;
std::cout << (d->remove(13)) << std::endl;
std::cout << (c->remove(396)) << std::endl;
std::cout << (a->insert(432)) << std::endl;
std::cout << (b->insert(115)) << std::endl;
std::cout << (c->remove(350)) << std::endl;
std::cout << (a->insert(494)) << std::endl;
d->printPretty();
std::cout << (c->remove(447)) << std::endl;
std::cout << (e->remove(133)) << std::endl;
c->printPretty();
std::cout << (b->remove(306)) << std::endl;
std::cout << (e->insert(139)) << std::endl;
std::cout << (d->insert(399)) << std::endl;
b->printPretty();
std::cout << (a->insert(432)) << std::endl;
std::cout << (d->remove(178)) << std::endl;
std::cout << (e->remove(246)) << std::endl;
std::cout << (c->insert(104)) << std::endl;
std::cout << (a->remove(27)) << std::endl;
std::cout << (a->remove(172)) << std::endl;
std::cout << (c->remove(347)) << std::endl;
std::cout << (c->insert(255)) << std::endl;
std::cout << (c->remove(255)) << std::endl;
std::cout << (a->insert(67)) << std::endl;
std::cout << (b->insert(354)) << std::endl;
std::cout << (e->remove(13)) << std::endl;
c->printPretty();
*d=*b;
std::cout << (d->insert(459)) << std::endl;
std::cout << (e->remove(74)) << std::endl;
std::cout << (c->insert(288)) << std::endl;
std::cout << (a->insert(90)) << std::endl;
d->printPretty();
std::cout << (e->remove(363)) << std::endl;
c->printPretty();
std::cout << (b->insert(462)) << std::endl;
std::cout << (d->remove(112)) << std::endl;
std::cout << (d->insert(490)) << std::endl;
*d=*a;
*a=*b;
*a=*d;
std::cout << (c->insert(28)) << std::endl;
std::cout << (c->insert(44)) << std::endl;
d->printPretty();
std::cout << (a->insert(432)) << std::endl;
std::cout << (b->insert(354)) << std::endl;
b->printPretty();
*c=*a;
b->printPretty();
std::cout << (a->remove(425)) << std::endl;
std::cout << (c->remove(449)) << std::endl;
std::cout << (a->insert(249)) << std::endl;
*c=*c;
std::cout << (b->remove(105)) << std::endl;
std::cout << (e->remove(139)) << std::endl;
std::cout << (c->insert(432)) << std::endl;
c->printPretty();
*d=*c;
std::cout << (c->insert(178)) << std::endl;
std::cout << (c->remove(255)) << std::endl;
*d=*e;
std::cout << (c->remove(67)) << std::endl;
std::cout << (e->insert(261)) << std::endl;
std::cout << (d->remove(479)) << std::endl;
std::cout << (a->remove(67)) << std::endl;
std::cout << (a->insert(324)) << std::endl;
std::cout << (c->remove(399)) << std::endl;
std::cout << (c->remove(432)) << std::endl;
std::cout << (d->remove(474)) << std::endl;
std::cout << (b->insert(494)) << std::endl;
std::cout << (d->remove(126)) << std::endl;
std::cout << (c->remove(447)) << std::endl;
std::cout << (b->remove(494)) << std::endl;
std::cout << (d->insert(207)) << std::endl;
std::cout << (a->insert(447)) << std::endl;
std::cout << (a->remove(255)) << std::endl;
std::cout << (d->insert(209)) << std::endl;
std::cout << (a->insert(287)) << std::endl;
std::cout << (b->insert(429)) << std::endl;
std::cout << (a->remove(178)) << std::endl;
std::cout << (b->remove(493)) << std::endl;
d->printPretty();
b->printPretty();
std::cout << (c->remove(195)) << std::endl;
*b=*e;
std::cout << (a->remove(88)) << std::endl;
std::cout << (b->insert(178)) << std::endl;
std::cout << (b->remove(174)) << std::endl;
*c=*e;
std::cout << (c->insert(76)) << std::endl;
std::cout << (e->insert(252)) << std::endl;
std::cout << (c->remove(266)) << std::endl;
std::cout << (b->insert(126)) << std::endl;
*c=*d;
std::cout << (d->insert(209)) << std::endl;
std::cout << (b->insert(393)) << std::endl;
std::cout << (e->remove(266)) << std::endl;
std::cout << (e->insert(399)) << std::endl;
std::cout << (b->insert(28)) << std::endl;
b->printPretty();
std::cout << (b->insert(124)) << std::endl;
std::cout << (b->insert(44)) << std::endl;
std::cout << (a->remove(225)) << std::endl;
std::cout << (b->remove(406)) << std::endl;
c->printPretty();
std::cout << (b->remove(393)) << std::endl;
*a=*a;
b->printPretty();
std::cout << (e->insert(207)) << std::endl;
std::cout << (b->insert(369)) << std::endl;
std::cout << (d->insert(266)) << std::endl;
*e=*e;
std::cout << (d->insert(89)) << std::endl;
std::cout << (c->insert(421)) << std::endl;
std::cout << (b->remove(252)) << std::endl;
std::cout << (b->insert(178)) << std::endl;
std::cout << (a->insert(195)) << std::endl;
std::cout << (c->remove(283)) << std::endl;
*c=*d;
std::cout << (a->insert(55)) << std::endl;
std::cout << (d->insert(67)) << std::endl;
b->printPretty();
std::cout << (d->remove(209)) << std::endl;
std::cout << (b->remove(417)) << std::endl;
std::cout << (c->insert(28)) << std::endl;
a->printPretty();
std::cout << (a->insert(90)) << std::endl;
std::cout << (b->insert(251)) << std::endl;
std::cout << (b->remove(286)) << std::endl;
*c=*e;
std::cout << (b->insert(86)) << std::endl;
std::cout << (e->insert(251)) << std::endl;
std::cout << (b->remove(466)) << std::endl;
std::cout << (b->remove(396)) << std::endl;
std::cout << (c->insert(252)) << std::endl;
std::cout << (e->remove(255)) << std::endl;
std::cout << (a->insert(28)) << std::endl;
std::cout << (c->insert(490)) << std::endl;
std::cout << (a->insert(453)) << std::endl;
std::cout << (b->insert(178)) << std::endl;
std::cout << (c->insert(399)) << std::endl;
b->printPretty();
std::cout << (b->insert(449)) << std::endl;
std::cout << (e->remove(252)) << std::endl;
c->printPretty();
std::cout << (d->remove(28)) << std::endl;
d->printPretty();
std::cout << (c->insert(128)) << std::endl;
std::cout << (c->remove(191)) << std::endl;
e->printPretty();
std::cout << (b->remove(178)) << std::endl;
std::cout << (d->remove(210)) << std::endl;
std::cout << (c->insert(490)) << std::endl;
d->printPretty();
std::cout << (e->remove(239)) << std::endl;
std::cout << (c->insert(382)) << std::endl;
std::cout << (b->insert(199)) << std::endl;
*d=*e;
std::cout << (e->insert(178)) << std::endl;
std::cout << (a->remove(249)) << std::endl;
*b=*a;
a->printPretty();
std::cout << (a->insert(460)) << std::endl;
std::cout << (a->insert(281)) << std::endl;
std::cout << (c->insert(382)) << std::endl;
std::cout << (a->insert(399)) << std::endl;
a->printPretty();
c->printPretty();
*d=*c;
return 0;
}
