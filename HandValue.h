#pragma once
#include <map>

#include "struture.h"


struct Card;
int HasHighCard(const std::vector<Card>& _handcalcul);
bool HasPair(const std::vector<Card>& _handcalcul);
bool HasTwoPair(const std::vector<Card>& _handcalcul);
bool HasThreeOfAKind(const std::vector<Card>& _handcalcul);
bool HasStraight(const std::vector<Card>& _handcalcul);
bool HasFlush(const std::vector<Card>& _handcalcul);
bool HasFullhouse(const std::vector<Card>& _handcalcul);
bool HasFour_of_a_kind(const std::vector<Card>& _handcalcul);
bool HasStraightFlush(const std::vector<Card>& _handcalcul);
bool HasRoyal_flush(const std::vector<Card>& _handcalcul);
