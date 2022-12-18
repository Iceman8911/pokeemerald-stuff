#ifndef GUARD_START_MENU_H
#define GUARD_START_MENU_H

// For scrolling start menu
#define MAX_MENU_OPTIONS_SHOWN                  8
#define FINAL_START_MENU_OPTION                 MENU_ACTION_EXIT

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

// For Scrolling Start Menu
extern bool8 IsStartMenuActive;   // Used primarily to only specify list menu changes to the start menu
#endif // GUARD_START_MENU_H
