#ifndef GUARD_START_MENU_H
#define GUARD_START_MENU_H

#define MAX_MENU_OPTIONS_SHOWN          8
#define FINAL_START_MENU_OPTION         MENU_ACTION_PYRAMID_BAG

extern bool8 (*gMenuCallback)(void);

void ShowReturnToFieldStartMenu(void);
void Task_ShowStartMenu(u8 taskId);
void ShowStartMenu(void);
void ShowBattlePyramidStartMenu(void);
void SaveGame(void);
void CB2_SetUpSaveAfterLinkBattle(void);
void SaveForBattleTowerLink(void);
void HideStartMenu(void);
void AppendToList(u8 *list, u8 *pos, u8 newEntry);

#endif // GUARD_START_MENU_H
