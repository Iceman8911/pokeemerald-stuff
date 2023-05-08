#ifndef GUARD_START_MENU_H
#define GUARD_START_MENU_H

// For multi start menus
// ROUND_UP_DIVISION_RESULT is used to appropriately get the value of NUM_OF_START_MENUS and round it up if needed
#define ROUND_UP_DIVISION_RESULT(number, divisor) (number % divisor == 0 ? number / divisor : (number + (divisor - (number % divisor))) / divisor)

#define NUM_OF_START_MENUS                ROUND_UP_DIVISION_RESULT(FINAL_START_MENU_OPTION, NUM_OF_START_MENU_OPTIONS)     // Self Explanatory
#define NUM_OF_START_MENU_OPTIONS         8                                                                                // Max number of options per menu. (Best to leave it as 8)
#define FINAL_START_MENU_OPTION           MENU_ACTION_EXIT                                                                 // Set this to the last startmenu option you want to print out
#define IS_MULTI_START_MENU_ENABLED       FlagGet(FLAG_IS_MULTI_START_MENU_ENABLED)                                        // Self Explanatory



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
