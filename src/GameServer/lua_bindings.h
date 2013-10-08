#pragma once

LUA_FUNCTION(CheckPercent);
LUA_FUNCTION(HowmuchItem);
LUA_FUNCTION(ShowMap);
LUA_FUNCTION(CheckNation);
LUA_FUNCTION(CheckClass);
LUA_FUNCTION(CheckLevel);
LUA_FUNCTION(CheckSkillPoint);
LUA_FUNCTION(SaveEvent);
LUA_FUNCTION(CheckExchange);
LUA_FUNCTION(RunExchange);
LUA_FUNCTION(SearchQuest);
LUA_FUNCTION(NpcMsg);
LUA_FUNCTION(ShowEffect);
LUA_FUNCTION(ShowNpcEffect);
LUA_FUNCTION(ExistMonsterQuestSub);
LUA_FUNCTION(CountMonsterQuestSub);
LUA_FUNCTION(CountMonsterQuestMain); 
LUA_FUNCTION(PromoteKnight);
LUA_FUNCTION(SelectMsg);
LUA_FUNCTION(CastSkill);
LUA_FUNCTION(GetName);;
LUA_FUNCTION(GetAccountName);;
LUA_FUNCTION(GetZoneID);;
LUA_FUNCTION(GetX);;
LUA_FUNCTION(GetY);
LUA_FUNCTION(GetZ);
LUA_FUNCTION(GetNation);
LUA_FUNCTION(GetLevel);
LUA_FUNCTION(GetClass);
LUA_FUNCTION(GetCoins);
LUA_FUNCTION(GetInnCoins);
LUA_FUNCTION(GetLoyalty);
LUA_FUNCTION(GetMonthlyLoyalty);
LUA_FUNCTION(GetManner);
LUA_FUNCTION(isWarrior);
LUA_FUNCTION(isRogue);
LUA_FUNCTION(isMage);
LUA_FUNCTION(isPriest);
LUA_FUNCTION(isInClan);
LUA_FUNCTION(isClanLeader);
LUA_FUNCTION(isInParty);
LUA_FUNCTION(isPartyLeader);
LUA_FUNCTION(isKing);
// Shortcuts for lazy people
LUA_FUNCTION(hasCoins);
LUA_FUNCTION(hasInnCoins);
LUA_FUNCTION(hasLoyalty);
LUA_FUNCTION(hasMonthlyLoyalty);
LUA_FUNCTION(hasManner);
// Here lie the useful methods.
LUA_FUNCTION(GiveItem);
LUA_FUNCTION(RobItem);
LUA_FUNCTION(CheckExistItem);
LUA_FUNCTION(GoldGain);
LUA_FUNCTION(GoldLose);
LUA_FUNCTION(ExpChange);
LUA_FUNCTION(GiveLoyalty);
LUA_FUNCTION(RobLoyalty);
LUA_FUNCTION(NpcSay); // dialog
LUA_FUNCTION(CheckWeight);
LUA_FUNCTION(CheckSkillPoint);
LUA_FUNCTION(isRoomForItem); // FindSlotForItem();
LUA_FUNCTION(SendNameChange);
LUA_FUNCTION(SendStatSkillDistribute);
LUA_FUNCTION(ResetSkillPoints);
LUA_FUNCTION(ResetStatPoints);
LUA_FUNCTION(PromoteUserNovice);
LUA_FUNCTION(PromoteUser);
LUA_FUNCTION(RobAllItemParty);
LUA_FUNCTION(ZoneChange);
LUA_FUNCTION(ZoneChangeParty);
LUA_FUNCTION(ZoneChangeClan);
LUA_FUNCTION(KissUser);
LUA_FUNCTION(ChangeManner);
LUA_FUNCTION(CheckClanGrade);
LUA_FUNCTION(CheckClanPoint);
LUA_FUNCTION(CheckLoyalty);
LUA_FUNCTION(CheckKnight);
LUA_FUNCTION(CheckStatPoint); 
LUA_FUNCTION(RobClanPoint);
LUA_FUNCTION(CheckBeefRoastVictory);
LUA_FUNCTION(RequestPersonalRankReward);
LUA_FUNCTION(RequestReward);
LUA_FUNCTION(RunCountExchange);
LUA_FUNCTION(GetMaxExchange);
LUA_FUNCTION(GetUserDailyOp);